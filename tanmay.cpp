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
	
	void insertticket()
	{
	int j=0;
	int i;
		for(i=firstticket;i<lastticket;i++)
		{
			tickets[j]=i;
			j++;
		}
	}
	void printticket()
	{
	int j=0;
	int i;
		for(i=firstticket;i<lastticket;i++)
		{
			printf("%d ",tickets[j]);
			j++;
		}	
	}

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
		for(i=0;i<n;i++)	
		{	
		printf("Enter the process id for %d process  ",i+1);
		scanf("%d",&p[i].processid);
		printf("Enter the Burst Time for %d process  ",(i+1));
		scanf("%d",&p[i].bursttime);
		p[i].wait=0;
		printf("Enter  the ending number of  ticket for %d process ranging from from  %d  to 200  ",i+1,ts);
		scanf("%d",&te);
		p[i].firstticket=ts;
		p[i].lastticket=te;
		size1=te-ts;
		p[i].size=size1;
		p[i].insertticket();
		ts=te;
		}
