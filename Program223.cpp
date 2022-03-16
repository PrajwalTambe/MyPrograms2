#include<iostream>

using namespace std;

//specific function
void Swap(char *p, char *q)
{
	char temp;
	
	temp= *p;
	*p=*q;
	*q=temp;
	
}
//Generic Function

 template<class T>
void SwapX(T *p, T *q)
{
	T temp;
	
	temp= *p;
	*p=*q;
	*q=temp;
	
}

int main()
{
	char x= 'A' , y = 'B';
	SwapX(&x,&y);
	cout<<"value of X becomes :"<<x<<"\n";
	cout<<"value of Y becomes :"<<y<<"\n";
	
	int i=11,j=21;
	SwapX(&i,&j);
	
	cout<<"value of X becomes :"<<i<<"\n";
	cout<<"value of Y becomes :"<<j<<"\n";
	
	return 0;
}