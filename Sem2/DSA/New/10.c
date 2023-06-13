#include <stdio.h>
#include <stdlib.h>

struct node
{
    int vertex;
    struct node *next;
};

struct Graph
{
    int numVertices;
    struct node **adjLists;
};

struct node *createnode(int v)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->vertex = v;
    newnode->next = NULL;
    return newnode;
}

struct Graph *createGraph(int numVertices)
{
    struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
    graph->numVertices = numVertices;
    graph->adjLists = (struct node *)malloc(numVertices * sizeof(struct node));

    int i;
    for (i = 0; i < numVertices; i++)
        graph->adjLists[i] = NULL;

    return graph;
}

void addEdge(struct Graph *graph, int src, int dest)
{
    struct node *newnode = createnode(dest);
    newnode->next = graph->adjLists[src];
    graph->adjLists[src] = newnode;

    newnode = createnode(src);
    newnode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newnode;
}

void printGraph(struct Graph *graph)
{
    int i;
    for (i = 0; i < graph->numVertices; i++)
    {
        struct node *temp = graph->adjLists[i];
        printf("Adjacency list of vertex %d\n", i);
        while (temp)
        {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

void BFS(struct Graph *graph, int startVertex)
{
    int *visited = (int *)malloc(graph->numVertices * sizeof(int));
    int i;
    for (i = 0; i < graph->numVertices; i++)
        visited[i] = 0;

    int *queue = (int *)malloc(graph->numVertices * sizeof(int));
    int front = 0, rear = 0;

    visited[startVertex] = 1;
    queue[rear++] = startVertex;

    printf("BFS traversal starting from vertex %d: ", startVertex);

    while (front < rear)
    {
        int currentVertex = queue[front++];
        printf("%d ", currentVertex);

        struct node *temp = graph->adjLists[currentVertex];

        while (temp)
        {
            int adjVertex = temp->vertex;

            if (!visited[adjVertex])
            {
                visited[adjVertex] = 1;
                queue[rear++] = adjVertex;
            }

            temp = temp->next;
        }
    }

    printf("\n");

    free(visited);
    free(queue);
}

int main()
{
    int numVertices, choice, src, dest, startVertex;

    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &numVertices);

    struct Graph *graph = createGraph(numVertices);

    printf("\nMenu\n");
    printf("1. Add an edge\n");
    printf("2. Print the graph\n");
    printf("3. Perform BFS traversal\n");
    printf("4. Exit\n");
    while (1)
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the source and destination vertices of the edge: ");
            scanf("%d %d", &src, &dest);
            addEdge(graph, src, dest);
            break;

        case 2:
            printGraph(graph);
            break;

        case 3:
            printf("Enter the starting vertex for BFS traversal: ");
            scanf("%d", &startVertex);
            BFS(graph, startVertex);
            break;

        case 4:
            printf("Exit\n");
            exit(0);

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}