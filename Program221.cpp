#include<iostream>

using namespace std;

void Swap(char *p, char *q)
{
	char temp;
	
	temp= *p;
	*p=*q;
	*q=temp;
	
}

int main()
{
	char x= '\0' , y = '\0';
	
	cout<<"Enter the first charachter\n";
	cin>>x;
	
	cout<<"Enter the second charachter\n";
	cin>>y;
	
	Swap(&x,&y);
	
	cout<<"value of X becomes :"<<x<<"\n";
	cout<<"value of Y becomes :"<<y<<"\n";
	return 0;
}