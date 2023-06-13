#include <stdio.h>
#include <stdlib.h>
#define max 100

typedef struct node
{
    int data, weight;
    struct node *next;
} node;

void insert(node *graph[], int src, int dst, int weight)
{
    node *nn1 = malloc(sizeof(node));
    node *nn2 = malloc(sizeof(node));

    nn1->data = dst;
    nn1->weight = weight;
    nn1->next = graph[src];
    graph[src] = nn1;

    nn2->data = src;
    nn2->weight = weight;
    nn2->next = graph[dst];
    graph[dst] = nn2;
}

void disp(node *head, int src)
{
    while (head != NULL)
    {
        printf("%d --> %d (weight: %d)\n", src, head->data, head->weight);
        head = head->next;
    }
}

int main()
{
    node *graph[max] = {NULL};
    int ch, src, dst;

    printf("\n\nKrishant Chauhan MCA 2A Roll no-32 \n");
    printf("Menu\n");
    printf("1. Insert\n");
    printf("2. Display\n");
    printf("3. Exit\n");
    do
    {
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter source, destination, and weight:- ");
            scanf("%d%d%d", &src, &dst, &ch);
            insert(graph, src, dst, ch);
            break;
        case 2:
            for (ch = 0; ch < max; ch++)
            {
                if (graph[ch] != NULL)
                {
                    disp(graph[ch], ch);
                    printf("\n");
                }
            }
            break;
        case 3:
            printf("Exit\n");
            break;
        default:
            printf("Invalid choice!\n");
            break;
        }
        printf("\n");
    } while (ch != 3);

    return 0;
}
