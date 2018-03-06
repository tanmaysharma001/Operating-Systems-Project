#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct lotteryprocess 
{
	int processid;
	int bursttime;
	int wait;
	int size;
	int firstticket, lastticket;
	int tickets[100];

};
 	int main()
	{
		int n;
		int size1;
		printf("Enter the Number of Processes ");
		scanf("%d",&n);
		int ts=0,te;
		struct lotteryprocess p[n];
		int i;
