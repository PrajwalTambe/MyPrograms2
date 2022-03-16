#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int no )
{
   
	   
}

void InsertLast(PPNODE Head,int no )
{
   
}

void Display(PNODE Head)
{
	
}
 
 void DeleteLast(PPNODE Head)
 {

 }
 
int main()
{
	PNODE first=NULL;
    int iChoice=1,value=0,iRet=0,pos=0;

    printf("\n_________________________________________\n");
    printf("Enter the desire operation that you want to perform in liknkde list\n"); 	
	printf("1:Insrt the node at first position \n");
	printf("2:Insrt the node at last  position \n");
	printf("3:Insrt the node at desire position \n");
	printf("4:DElete the first node \n");
	printf("5:Delete the Last node \n");
	printf("6:Delete  the at desire  position \n");
	printf("7:Display the contents at linked list \n");
	printf("8: Count the number of nodes \n");
	printf("0:Insrt the node at first position \n");


    switch(iChoice)
	{
		case 1:
		 printf("Enter the data to insert\n");
		 scanf ("%d",&value);
		 InsertLast(&firs		 )
		 
		 
		 
		 
		 
		 
		 
		 case 4:
		 DeleteFirst(&first);
		  break;
		  
		  case 5:
		 DeleteLast(&first);
		  break;
		
		  
		  case 6:
		 DeleteFirst(&first);
		  break;
		 
		 
		 case 7:
		 printf("Elements of linked list are \n");
		 Display(first);
		 break;
		 
		 
		 case 8:
		 iRet=Count(first)
		 printf("Number of Elements  are:%d \n",iRet);
		 break;
		 
		 
		 case 0:
		 printf("Elements of linked list are \n");
		 Display(first);
		 break;
		 

	return 0;
	
	
}

/*

void InsertFirst(PPNODE Head,int no )
void InsertLast(PPNODE Head,int no )
void InsertAtPos(PPNODE Head,int no,int pos)

void DeleteFirst(PPNODE Head, )
void DeleteLast(PPNODE Head, )
void DeleteAtPos(PPNODE Head,int pos)


 void Display(PNODE Head)
 int Count(PNODE Head)
 
 */
