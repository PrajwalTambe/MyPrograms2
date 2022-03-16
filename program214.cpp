#include<iostream>

using namespace std;

typedef struct node
{
	int data;
	struct node * next;
	struct node * prev;
}NODE,*PNODE;
	

class DoublyCl
{
	private:
    PNODE first;
		PNODE last;
		PNODE size;
		int size= 0;
		
		public:
		
		DoublyCl()
		{
			first = NULL;
			last = NULL;
			size = 0;
		}
		
	void Display();
	int Count();
	void InsertFirst(int no);
	void InsertLast(int no);
	void InsertAtPos(int no, int ipos);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int ipos);
	
};

//return_value Class_name :: Function_Name(Parameters)

void DoublyCl :: InsertFirst(int no)
{
	PNODE newn = new NODE;
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;
	
	if((first == NULL) && (last == NULL))
	{
		first = newn;
		last = newn;
	}
	else
	{
		newn->next=first;
		first->prev=newn;
		first=newn;
	}
	last->next=first;
	first->prev=last;
	size++;
}
 
  void DoublyCl :: InsertLast(int no)
  {
	  
	PNODE newn = new NODE;
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;
	
	if((first == NULL) && (last == NULL))
	{
		first = newn;
		last = newn;
	}
	else
	{
		last->next=newn;
		newn->prev=last;
		last=newn;
	}
	last->next=first;
	first->prev=last;
	size++;
	  
  }
	
	void DoublyCl :: Display()
	{
		PNODE temp=first;
		
		for(int i=1; i <=size;i++)
		{
			cout<<"|"<<temp->data<<"|->";
			temp = temp -> next;
		}
		cout<<"\n";
		
		
	}
	
 int DoublyCl :: Count()
 {
	 return size;
 }
 
 void DoublyCl :: DeleteFirst()
 {
	 if((first == NULL ) && (last == NULL))\
	 {
		 return ; 
	 }
	 else if(first == last)
	 {
		 delete first ;
		 first = NULL;
		 last = NULL;
	 }
	 else
	 {
		 first=first->next;
		 delete last->next;
		 
	 first -> prev=last;
	 last -> next = first;
	 }
	 size --;
 }
 
  void DoublyCl :: DeleteLast()
 {
	 if((first == NULL ) && (last == NULL))\
	 {
		 return ; 
	 }
	 else if(first == last)
	 {
		 delete first ;
		 first = NULL;
		 last = NULL;
	 }
	 else
	 {
		 last=last->prev;
		 delete last->next;
	
	    first -> prev=last;
	    last -> next = first;
	 }
	 size --;
 }
 
   void DoublyCl :: InsertAtPos(int no, int ipos)
   {
	   if((ipos < 1)||(ipos>size+1))
	   {
		   return;
	   }
	   if(ipos == 1)
	   {
		   InsertFirst(no);
	   }
	   else if(ipos == size +1)
	   {
		   InsertLast(no);
	   }
	   else
	   {
		   PNODE newn = new NODE;
		   
		   newn -> data=no;
		   newn->next=NULL;
		   newn->prev=NULL;
		   
		   PNODE temp = first;
		   
		   for(int i =1 ; i <ipos -1 ;i++)
		   {
			   temp = temp -> next;
			   newn->next=temp->next;
			   newn->next->prev=newn;
			   
			   temp->next=newn;
			   newn->prev=temp;
			   
			   size++;
		   }
	   }
   }
 
 void DoublyCl :: DeleteAtPos(int ipos)
 {
	   if((ipos < 1)||(ipos>size))
	   {
		   return;
	   }
	   if(ipos == 1)
	   {
		   DeleteFirst();
	   }
	   else if(ipos == size)
	   {
		   DeleteLast(no);
	   }
	   else
	   {
		   
		   PNODE temp =first;
		   
		   for(int i =1; i<ipos -1;i++)
		   {
			   
			   temp=temp->next;
		   }
		   temp->next=temp->next->next;
		   delete temp->next->prev;
		   temp->next->prev=temp;
	   }
	 
	 
 }

int main()
{
	DoublyCl obj;
	
	
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	obj.InsertFirst(51);
	
	obj.InsertLast(51);
	obj.InsertLast(101);
	
	obj.InsertAtPos(75,3);
	obj.Display();
	
	int iret= obj.Count();
	cout<<"Number of elements are : "<<iret<<"\n";
	
	obj.DeleteAtPos(3);
	obj.DeleteFirst();
	obj.DeleteLast();
	
	obj.Display();
	return 0;
}