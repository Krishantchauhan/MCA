#include <stdio.h>
int arr[6] = {0, 0, 0, 0, 0, 0};
int size = 6;
int ind = 0;

void push()
{
	if (ind < size)
	{
		int val;
		printf("\nEnter the value: ");
		scanf("%d", &val);
		arr[ind] = val;
		ind++;
		printf("\nvalue inserted\n");
	}
	else
	{
		printf("Array full");
	}
}

void pop()
{
	if (size <= 0)
	{
		printf("Array Empty");
	}
	else
	{
		int pos;
		ind--;
		size--;
		printf("\nEnter the position: ");
		scanf("%d", &pos);
		if (pos < size && pos >= 0)
		{
			for (int i = pos - 1; i < size; i++)
			{
				arr[i] = arr[i + 1];
			}
		}
	}
}

void display()
{
	for (int i = 0; i < ind; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void search()
{
	int s;
	printf("\nEnter value to be search\n");
	scanf("%d", &s);
	for (int i = 0; i < size; i++)
	{
		if (s == arr[i])
		{
			printf("\nValue %d found at index %d\n", s, i);
			return;
		}
	}
	printf("Not found");
}

void main()
{
	int flag = 0;
	while (1)
	{
		int ch;
		printf("\nEnter your choice:\n1.Insert\n2.Delete\n3.Display\n4.Seacrh\n5.exit\n\n");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			search();
			break;
		case 5:
			flag = 1;
			break;
		default:
			printf("Enter correct choice");
		}
		if (flag == 1)
		{
			break;
		}
	}
}
