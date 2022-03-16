#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE,**PPNODE;


void Display(PNODE Head,PNODE Tail)
{

	if((Head == NULL) && (Tail == NULL))
	{
		return;
	}
	do
	{
		printf("|%d| -> ",Head -> data);
		Head=Head->next;
	}while(Head != Tail->next);
	
	printf("\n");
}
int Count(PNODE Head,PNODE Tail)
{
	int iCnt=0;
	if((Head == NULL) && (Tail == NULL))
	{
		return;
	}
	do
	{
		iCnt++;
		Head=Head->next;
	}while(Head != Tail->next);
	
	
	return iCnt;
}


void InsertFirst(PPNODE Head,PPNODE Tail,int no)
{
	PNODE newn=NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data=no;
	newn->next=NULL;
	
	
	if((*Head == NULL)&&(*Tail == NULL)) 
	{
		*Head=newn;
		*Tail=newn;
		
	}
	else
	{
		newn->next=*Head;
		*Head=newn;
	}
	(*Tail)->next=*Head; // to maintain circular nature
}

void InsertLast(PPNODE Head,PPNODE Tail,int no)
{
		PNODE newn=NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data=no;
	newn->next=NULL;
	
	
	if((*Head == NULL)&&(*Tail == NULL))// LL is empty 
	{
		*Head=newn;
		*Tail=newn;
		
	}
	else
	{
		(*Tail)->next=newn;
		*Tail=newn;
	}
	(*Tail)->next=*Head; // to maintain circular nature
}
}

void InsertAtPos(PPNODE Head,PPNODE Tail,int no,int ipos)
{
         PNODE newn=NULL;         
          newn=(PNODE)malloc(sizeof(NODE));
            
        if((ipos < 1) || (ipos > (size+1)))
        {
            return;
        }
        
        if(ipos ==1)
        {
            InsertFirst(Head,Tail,no);
        }
        else if(ipos == size+1)
        {
            InsertLast(Head,Tail,no);
        }
        else
        {
          
            newn->data = no;
            newn->next = NULL;
            
            PNODE temp = Head;
            
            for(int i = 1; i < ipos-1; i++)
            {
                temp = temp->next;
            }
            
            newn->next = temp->next;
            temp->next = newn;
        }
        (*Tail)->next=*Head;
}

void DeleteFirst(PPNODE Head,PPNODE Tail)
{
	if((*Head == NULL)&&(*Tail == NULL))
	{
		return;
	}
	else if(*Head == *Tail)
	{
		free(*Head);
		*Head=NULL;
		*Tail=NULL;
	}
	else
	{
		*Head=(*Head)->next;
		free(*Tail)->next);
		
		(*Tail)->next=*Head;	
	}

}

void DeletLast(PPNODE Head,PPNODE Tail)
{
	PNODE temp=*Head;
	
	if((*Head == NULL)&&(*Tail == NULL))
	{
		return;
	}
	else if(*Head == *Tail)
	{
		free(*Head);
		*Head=NULL;
		*Tail=NULL;
	}
	else
	{
	  while(temp-> next != *Tail)
	  {
		  temp = temp -> next;
	  }		  
		free(*Tail);
		*Tail=temp;
		(*Tail)->next=*Head;
	}

}

void DeleteAtPos(PPNODE Head,PPNODE Tail,int ipos)
{
    if((ipos < 1) || (ipos > size))
        {
            return;
        }
        
        if(ipos ==1)
        {
            DeleteFirst(Head,Tail);
        }
        else if(ipos == size)
        {
            DeleteLast(Head,Tail);
        }
        else
        {
            PNODE temp = Head;
            for(int i = 1; i < ipos-1; i++)
            {
                temp = temp->next;
            }
            
            PNODE targated = temp->next;
            
            temp->next = targated->next;
            free targated;
           
        }
        (*Tail)->next=*Head;
    }
}


int main()
{
	PNODE first = NULL;
	PNODE last = NULL;
	int iret=0;
	
	InsertFirst(&first,&last,51);
	InsertFirst(&first,&last,21);
	InsertFirst(&first,&last,11);
	
	InsertLast(&first,&last,101);
	
	Display(first,last);
	iret=Count(first,last);
	printf("Number of elements are %d",iret);
	
	DeleteFirst(&first,&last);
	DeleteLast(&first,&last);
	
	Display(first,last);
	iret=Count(first,last);
	printf("Number of elements are %d",iret);
	
	
	return 0;
}

