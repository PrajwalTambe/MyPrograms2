#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	char Arr[10];
	
	fd = open("LB17.txt",O_RDWR);
	
	if(fd == -1)
	{
		
		printf("unable to open file\n");
	}
	
	lseek(fd,10,2);
	
	
	write(fd,"*",1);
	
	close(fd);
	
	return 0;
	
}