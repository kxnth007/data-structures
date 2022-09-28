#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of elements :");
    scanf("%d",&n);
    int queue[n],ch=1,front=0,rear=0,i,j=1,x=n;
    printf("Queue using Array");
    printf("\n1.enqueue \n2.Dequeue \n3.Display \n4.Exit");
    while(ch)
    {
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            if(rear==x)
                printf("\n Queue is Full");
            else
            {
                printf("\n Enter no %d:",j++);
                scanf("%d",&queue[rear++]);
            }
            break;
        case 2:
            if(front==rear)
            {
                printf("\n Queue is empty");
            }
            else
            {
                printf("\n Deleted Element is %d",queue[front++]);
                x++;
            }
            break;
        case 3:
            printf("\nQueue Elements are:\n ");
            if(front==rear)
                printf("\n Queue is Empty");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("%d",queue[i]);
                    printf("\n");
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice: please see the options");
            }
        }
    }
    return 0;
}

sample output:
Enter the number of elements :3
Queue using Array
1.enqueue
2.Dequeue
3.Display
4.Exit
Enter the Choice:1

 Enter no 1:5

Enter the Choice:1

 Enter no 2:7

Enter the Choice:1

 Enter no 3:6

Enter the Choice:1

 Queue is Full
Enter the Choice:3

Queue Elements are:
 5
7
6

Enter the Choice:2

 Deleted Element is 5
Enter the Choice:4
