#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
   int fd =0, icnt= 0, iRet=0,i=0;
   
   char fname[20];
   char Buffer[10];
   
   printf("Enter File Name\n");
   scanf("%s",fname);
   
   fd = open(fname,O_RDWR);
   
   if(fd == -1)
   {
	   printf("unable to open the file\n");
	   return -1;
   }
   
   while((iRet = read(fd,Buffer,10))!=0)
   {
	   for(i=0;i<iRet;i++)
	   {
		   if((Buffer[i] >='A') && (Buffer[i]<='z'))
		   {
			   icnt++;
		   }
	   }
   }
   
   printf("Total Number of a are : %d\n",icnt);
   
   close(fd);
   
   return 0;
}
   