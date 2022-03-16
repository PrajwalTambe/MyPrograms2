#include<iostream>

using namespace std;

void Swap(int *p, int *q)
{
	int temp;
	
	temp= *p;
	*p=*q;
	*q=temp;
	
}

int main()
{
	int x= 0 , y = 0;
	
	cout<<"Enter the first number\n";
	cin>>x;
	
	cout<<"Enter the second number\n";
	cin>>y;
	
	Swap(&x,&y);
	
	cout<<"value of X becomes :"<<x<<"\n";
	cout<<"value of Y becomes :"<<y<<"\n";
	return 0;
}