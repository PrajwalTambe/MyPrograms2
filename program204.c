#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node * next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void fun(PNODE p)
{
	
	
}
	
void gun(PPNODE q)
{
	
	
}
	int main()
	{
		PNODE first = NULL;
		
		fun(first);
		
		gun(&first);
		
		return 0;
		
	}
	

