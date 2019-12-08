#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct player
{
	float cr;
	char name[100];
	int jersey;
	int fours,six,runs,wickets;
	float points;
	struct player *next;
};
struct player *start=NULL;
void wicketkeeper();
void batsman();
void bowler();
void allrounder();
void display();
void sort();
void search();
void removed();

int main()
{
	int ct;
	clrscr();
	printf("FANTASY GAME\n");
	do
	{
		printf("\n1)WICKETKEEPER\n2)BATSMAN\n3)ALLROUNDER\n4)BOWLER\n5)DISPLAY\n6)SORT\n7)SEARCH\n8)REMOVE\n9)EXIT\n");
		scanf("%d",&ct);
		switch(ct)
		{
			case 1:	wicketkeeper();
				break;
			case 2: batsman();
				break;
			case 3: allrounder();
				break;
			case 4: bowler();
				break;
			case 5:	display();
				break;
			case 6: sort();
				break;
			case 7:search();
				break;
			case 8:removed();
				break;
		}
	}while(ct!=9);
	getch();
	return 0;
}
void wicketkeeper()
{
	int wk,runs,fours,six,wickets=0;
	float points;
	struct player *newplayer,*ptr;
	newplayer=(struct player*)malloc(sizeof(struct player));
	printf("Name\t\tCredits\n1)Dhoni\t\t8.5\n2)Karthik\t8.0\n");
	scanf("%d",&wk);
	printf("Enter Runs:\t");
	scanf("%d",&runs);
	printf("Enter No.of Fours Hit:\t");
	scanf("%d",&fours);
	printf("Enter No. of Sixes Hit:\t");
	scanf("%d",&six);
	switch(wk)
	{
		case 1:strcpy(newplayer->name,"Dhoni");
			newplayer->cr=8.5;
			newplayer->jersey=7;
			break;
		case 2:  strcpy(newplayer->name,"Karthik");
			newplayer->cr=8.0;
			newplayer->jersey=21;
			break;
	}
	newplayer->runs=runs;
	newplayer->fours=fours;
	newplayer->six=six;
	newplayer->wickets=0;
	points=(float)(runs+fours*0.5+six+12*wickets);
	newplayer->points=points;
	ptr=start;
	if(start==NULL)
	{
		newplayer->next=NULL;
		start=newplayer;
	}
	else
	{
			while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=newplayer;
		newplayer->next=NULL;


	}
}
void batsman()
{
	int bt,runs,wickets=0,fours,six;
	float points;
	struct player *newplayer,*ptr;
	newplayer=(struct player*)malloc(sizeof(struct player));
	printf("1)Rohit\n2)Kohli\n3)Dhawan\n4)Rayudu\n5)Rahul\n6)Manish\n");
	scanf("%d",&bt);
	printf("Enter Runs:\t");
	scanf("%d",&runs);
	printf("Enter No.of Fours Hit:\t");
	scanf("%d",&fours);
	printf("Enter No. of Sixes Hit:\t");
	scanf("%d",&six);
	switch(bt)
	{
		case 1:strcpy(newplayer->name,"Rohit");
			newplayer->cr=10.5;
			newplayer->jersey=45;
			break;
		case 2:strcpy(newplayer->name,"Kohli");
			newplayer->cr=10.5;
			newplayer->jersey=18;
			break;
		case 3:  strcpy(newplayer->name,"Dhawan");
			newplayer->cr=10.0;
			newplayer->jersey=25;
			break;
		case 4:  strcpy(newplayer->name,"Rayudu");
			newplayer->cr=9.0;
			newplayer->jersey=5;
			break;
		case 5:  strcpy(newplayer->name,"Rahul");
			newplayer->cr=8.5;
			newplayer->jersey=1;
			break;
		case 6:  strcpy(newplayer->name,"Manish");
			newplayer->cr=8.0;
			newplayer->jersey=9;
			break;

	}
	newplayer->runs=runs;
	newplayer->fours=fours;
	newplayer->six=six;
	newplayer->wickets=0;
	points=(float)runs+fours*0.5+six+wickets*12;
	newplayer->points=points;
	ptr=start;
	if(start==NULL)
	{
		newplayer->next=NULL;
		start=newplayer;
	}
	else
	{
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=newplayer;
		newplayer->next=NULL;

	}
}
void allrounder()
{
	int ar,runs,wickets,fours,six;
	float points;
	struct player *newplayer,*ptr;
	newplayer=(struct player*)malloc(sizeof(struct player));
	printf("1)Kedar\n2)Jadeja3)Ashwin\n");
	scanf("%d",&ar);
	printf("Enter Runs:\t");
	scanf("%d",&runs);
	printf("Enter No.of Fours Hit:\t");
	scanf("%d",&fours);
	printf("Enter No. of Sixes Hit:\t");
	scanf("%d",&six);
	printf("Enter No. of Wickets Taken:\t");
	scanf("%d",&wickets);
	switch(ar)
	{
		case 1:strcpy(newplayer->name,"Kedar");
			newplayer->cr=8.5;
			newplayer->jersey=81;
			break;
		case 2:  strcpy(newplayer->name,"Jadeja");
			newplayer->cr=8.5;
			newplayer->jersey=8;
			break;
		case 3:strcpy(newplayer->name,"Ashwin");
			newplayer->cr=9.0;
			newplayer->jersey=99;
			break;
	}
	newplayer->runs=runs;
	newplayer->fours=fours;
	newplayer->six=six;
	newplayer->wickets=0;
	points=(float)runs+fours*0.5+six+wickets*12;
	newplayer->points=points;
	ptr=start;
	if(start==NULL)
	{
		newplayer->next=NULL;
		start=newplayer;
	}
	else
	{
			while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=newplayer;
		newplayer->next=NULL;

	}
}
void bowler()
{
	int bw,runs,wickets,fours=0,six=0;
	float points;
	struct player *newplayer,*ptr;
	newplayer=(struct player*)malloc(sizeof(struct player));
	printf("1)Bumrah\n2)Bhuvneshwar\n3)Kuldeep\n4)Chahal\n");
	scanf("%d",&bw);
	printf("Enter Runs:\t");
	scanf("%d",&runs);
	if(runs!=0)
	{
		printf("Enter No.of Fours Hit:\t");
		scanf("%d",&fours);
		printf("Enter No. of Sixes Hit:\t");
		scanf("%d",&six);
	}
	printf("Enter No. of Wickets Taken:\t");
	scanf("%d",&wickets);
	switch(bw)
	{
		case 1:strcpy(newplayer->name,"Bumrah");
			newplayer->cr=9.0;
			newplayer->jersey=93;
			break;
		case 2:  strcpy(newplayer->name,"Bhuvneshwar");
			newplayer->cr=8.5;
			newplayer->jersey=15;
			break;
		case 3:  strcpy(newplayer->name,"Kuldeep");
			newplayer->cr=9.0;
			newplayer->jersey=23;
			break;
		case 4:  strcpy(newplayer->name,"Chahal");
			newplayer->cr=8.5;
			newplayer->jersey=3;
			break;
	}
	newplayer->runs=runs;
	newplayer->fours=fours;
	newplayer->six=six;
	newplayer->wickets=0;
	points=(float)runs+fours*0.5+six+wickets*12;
	newplayer->points=points;
	ptr=start;
	if(start==NULL)
	{
		newplayer->next=NULL;
		start=newplayer;
	}
	else
	{
			while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=newplayer;
		newplayer->next=NULL;


	}
}

void display()
{
	struct player *ptr;
	float sum=0;
	float totalp=0;
	int i=0;
	printf("JERSEY NO.\tPLAYER NAME\tCREDITS\tRuns\tFours\tSixes\tWickets\tPoints\n");
	for(ptr=start;ptr!=NULL;ptr=ptr->next)
	{       i++;
		sum=sum+ptr->cr;
		totalp=totalp+ptr->points;
		printf("  %d\t\t%s\t\t%.1f\t%d\t%d\t%d\t%d\t%.2f\n",ptr->jersey,ptr->name,ptr->cr,ptr->runs,ptr->fours,ptr->six,ptr->wickets,ptr->points);
	}
	printf("\nTotal Player:%d/7\n",i);
	printf("Credit Used:%f\n",sum);
	printf("Total Points:%.2f",totalp);
	if(i>7)
	{
		printf("\nRemove %d Players",i-7);
	}
}

void sort()
{
	struct player *ptr1,*ptr2;
	int temp;
	ptr1=start;
	while(ptr1->next!=NULL)
	{
		ptr2=ptr1->next;
		while(ptr2!=NULL)
		{
			if(ptr1->jersey>ptr2->jersey)
			{
				temp=ptr1->jersey;
				ptr1->jersey=ptr2->jersey;
				ptr2->jersey=temp;
			}
			ptr2=ptr2->next;
		}
		ptr1=ptr1->next;
	}
	display();
}

void search()
{
	int jersey;
	struct player *ptr;
	printf("Enter Jersey Number:\t");
	scanf("%d",&jersey);
	for(ptr=start;ptr->next!=NULL;ptr=ptr->next)
	{
		if(jersey==ptr->jersey)
		{
			printf("%d\t%s\t%.1f\n",ptr->jersey,ptr->name,ptr->cr);
		}
	}

}
void removed()
{
	struct player *ptr;
	search();
	free(ptr);
}