#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
   int fd =0,iRet=0;
   
   char fname[20];
   
   printf("Enter File Name\n");
   scanf("%s",fname);
   
   fd = open(fname,O_RDWR);
   
   if(fd == -1)
   {
	   printf("unable to open the file\n");
	   return -1;
   }
	iRet=lseek(fd,0,2);
  
  printf("file size is :%d\n",isum);
   
   close(fd);
   
   return 0;
}
   