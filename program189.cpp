#include<iostream>

using namespace std;
typedef unsigned int UINT;

int CountBit(int iNo)
{
		int i=0, icnt=0,iResult=0;
		int iMask=0x00000001;
	
		for(i=1;i<32;i++)
		{
			iResult=iNo & iMask;
			if(iResult!=0)
			{
				icnt++;
			}
			iMask=iMask <<1;	
		}
	return icnt;
}

 int main()
{
   int iValue = 0, iRet = 0;
   
   
   cout<< "Enter number\n";
   cin>>iValue;

   
   iRet= CountBit(iValue); 
	
	cout<<"number of bits which are ON :"<<iRet<<"\n";
	return 0;
	
}


