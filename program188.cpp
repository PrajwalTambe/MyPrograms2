#include<iostream>

using namespace std;
typedef unsigned int UINT;


 int ToggleBit(int iNo, int iPos)
{
	int iMask=0x00000001;
	int iResult= 0;
	
	iMask= iMask<<(iPos -1);
	
	iResult = iNo ^ iMask;
	
	return iResult;
	}
int main()
{
   int iValue = 0, iRet = 0,i=0;
   cout<< "Enter number\n";
   cin>>iValue;

   cout<<"Enter the position of bit\n";
	cin>>i;
	
   iRet= ToggleBit(iValue,i); 
	
	cout<<"updated number is :"<<iRet<<"\n";
	return 0;
	
}


