#include <stdio.h>
#include <stdlib.h>
struct node {
	int info;
	struct node* link;
};
struct node* start = NULL;
void createList()
{
	if (start == NULL) {
		int n;
		printf("\nEnter the number of nodes: ");
		scanf("%d", &n);
		if (n != 0) {
			int data;
			struct node* newnode;
			struct node* temp;
			newnode = malloc(sizeof(struct node));
			start = newnode;
			temp = start;
			printf("\nEnter number to"
				" be inserted : ");
			scanf("%d", &data);
			start->info = data;

			for (int i = 2; i <= n; i++) {
				newnode = malloc(sizeof(struct node));
				temp->link = newnode;
				printf("\nEnter number to"
					" be inserted : ");
				scanf("%d", &data);
				newnode->info = data;
				temp = temp->link;
			}
		}
		printf("\nThe list is created\n");
	}
	else
		printf("\nThe list is already created\n");
}
void traverse()
{
	struct node* temp;
	if (start == NULL)
		printf("\nList is empty\n");
	else {
		temp = start;
		while (temp != NULL) {
			printf("Data = %d\n", temp->info);
			temp = temp->link;
		}
	}
}
void insertAtPosition()
{
	struct node *temp, *newnode;
	int pos, data, i = 1;
	newnode = malloc(sizeof(struct node));
	printf("\nEnter position and data :");
	scanf("%d %d", &pos, &data);
	temp = start;
	newnode->info = data;
	newnode->link = 0;
	while (i < pos - 1) {
		temp = temp->link;
		i++;
	}
	newnode->link = temp->link;
	temp->link = newnode;
}
void deletePosition()
{
	struct node *temp, *position;
	int i = 1, pos;
	if (start == NULL)
		printf("\nList is empty\n");
	else {
		printf("\nEnter index : ");
		scanf("%d", &pos);
		position = malloc(sizeof(struct node));
		temp = start;
		while (i < pos - 1) {
			temp = temp->link;
			i++;
		}
		position = temp->link;
		temp->link = position->link;
		free(position);
	}
}
void sort()
{
	struct node* current = start;
	struct node* index = NULL;
	int temp;
	if (start == NULL) {
		return;
	}
	else {
		while (current != NULL) {
			index = current->link;
			while (index != NULL) {
				if (current->info > index->info) {
					temp = current->info;
					current->info = index->info;
					index->info = temp;
				}
				index = index->link;
			}
			current = current->link;
		}
	}
}
int main()
{
	int choice;
	while (1) {
	    
        printf("\n\t1 To Insert\n");
		printf("\t2 To see list\n");
		printf("\t3 For insertion at "
			"any position\n");
		printf("\t4 For deletion of "
			"element at any position\n");
		printf("\t5 To sort element\n");
		printf("\t6 To exit\n");
		printf("\nEnter Choice :\n");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			createList();
			break;
		case 2:
			traverse();
			break;
		case 3:
			insertAtPosition();
			break;
		case 4:
			deletePosition();
			break;
		case 5:
			sort();
			break;
		case 6:
			exit(1);
			break;
		default:
			printf("Incorrect Choice\n");
		}
	}
	return 0;
}



sample out:

1 To Insert
        2 To see list
        3 For insertion at any position
        4 For deletion of element at any position
        5 To sort element
        6 To exit

Enter Choice :
1

Enter the number of nodes: 3

Enter number to be inserted : 1

Enter number to be inserted : 2

Enter number to be inserted : 3

The list is created

        1 To Insert
        2 To see list
        3 For insertion at any position
        4 For deletion of element at any position
        5 To sort element
        6 To exit

Enter Choice :
2
Data = 1
Data = 2
Data = 3

        1 To Insert
        2 To see list
        3 For insertion at any position
        4 For deletion of element at any position
        5 To sort element
        6 To exit

Enter Choice :
3

Enter position and data :4 4

        1 To Insert
        2 To see list
        3 For insertion at any position
        4 For deletion of element at any position
        5 To sort element
        6 To exit

Enter Choice :
2
Data = 1
Data = 2
Data = 3
Data = 4

        1 To Insert
        2 To see list
        3 For insertion at any position
        4 For deletion of element at any position
        5 To sort element
        6 To exit

Enter Choice :
4

Enter index : 3  

        1 To Insert
        2 To see list
        3 For insertion at any position
        4 For deletion of element at any position
        5 To sort element
        6 To exit

Enter Choice :
2
Data = 1
Data = 2
Data = 4

        1 To Insert
        2 To see list
        3 For insertion at any position
        4 For deletion of element at any position
        5 To sort element
        6 To exit

Enter Choice :
5

        1 To Insert
        2 To see list
        3 For insertion at any position
        4 For deletion of element at any position
        5 To sort element
        6 To exit

Enter Choice :
5

        1 To Insert
        2 To see list
        3 For insertion at any position
        4 For deletion of element at any position
        5 To sort element
        6 To exit

Enter Choice :
3

Enter position and data :3 3

        1 To Insert
        2 To see list
        3 For insertion at any position
        4 For deletion of element at any position
        5 To sort element
        6 To exit

Enter Choice :
2
Data = 1
Data = 2
Data = 3
Data = 4

        1 To Insert
        2 To see list
        3 For insertion at any position
        4 For deletion of element at any position
        5 To sort element
        6 To exit

Enter Choice :
6
