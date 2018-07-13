#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
	printf("hello git!\n");
	printf("hello lujy!\n");
	printf("push github!\n");

	pid_t pid = fork();

	int a=10;

	if(-1 == pid)
	{
		printf("fork error!\n");
	}
	else if(0==pid)
	{

		a++;

		printf("this is child,pid=%d,ppid=%d,a=%d\n",getpid(),getppid(),a);

		exit(0);
	}
	else
	{
		a+=10;

		printf("this is father,pid=%d,a=%d\n",getpid(),a);
	}

	return 0;
}
