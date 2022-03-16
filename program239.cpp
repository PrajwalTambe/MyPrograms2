#include<iostream>
using namespace std;

int SterlenI(char *str)
{
	int iCnt=0;
	
	while(*str != '\0')
	{
		iCnt++;
		str++;
		
		
	}
	return iCnt++;
	
}



int main()
{
	char Arr[20];
	int iRet=0;
	
	
	cout<<"Enter String\n";
	scanf("%[^'\n']s,Arr");
	
	iRet=SterlenI(Arr);
	
	cout<<"Length of string is :"<<iRet<<"\n";
	
	return 0;
	
}