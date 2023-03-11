#include <stdio.h>
 
#define MAX 50
 
void insert();
void delete();
void display();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
main()
{
    int choice;
    while (choice!=4)
    {
    	printf("************FACE RECOGNITION**********\n");
        printf("1.Add student to the face recognition \n");
        printf("2.Delete the student who attended the face recognisation from the other branch \n");
        printf("3.Display students who taken the face recognition \n");
        printf("4.exit \n");
        printf("*******************************************\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:  
            insert();  
            break;  
            case 2:  
            delete();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:  
            exit (0);  
            break;  
            default:   
            printf("\nEnter valid choice??\n");
        } 
    } 
} 
 
void insert()
{
    int add_item;
    char sec;
    if (rear == MAX - 1)
    printf("cant add the student \n");
    else
    {
        if (front == - 1)
        front = 0;
        int i,n;
		
        printf("enter the student id: ");
        scanf("%d", &add_item);
        
        printf("enter the section:\n");
        scanf("%s",&sec);
    
        rear = rear + 1;
        queue_array[rear] = add_item;
        
      }
       printf("%d-student face recognition completed successfully\n",queue_array[front]);
       printf("----------------------------\n");
} 
 
void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("student cant add \n");
        return ;
    }
    else
    {
        printf("student has removed from the face recognition from other branch: %d\n",queue_array[front]);
        printf("-----------------------------------------\n");
        front = front + 1;
    }
} 
 
void display()
{
    int i;
    if (front == - 1)
        printf("no students are added \n");
    else
    {
        printf("these students are successfully completed their face recognition: \n");
        for (i = front; i <= rear; i++)
            printf("%d\n", queue_array[i]);
        printf("------------------------------\n");
    }
}
