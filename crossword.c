#include<stdio.h>
#include<string.h>
void crossgamestart(char c[7][7]);
int one(char s[10],char c[7][7],int ch,char f);
void showcross(char a[7][7])
{
	int i,j;
	printf("\n Word to be typed are displayed in form of stars and the starting points are represented below");
	printf("\n\t\t ---------------");
	for(i=0;i<7;i++)
	{
		printf("\n\t\t |");
		for(j=0;j<7;j++)
				if(a[i][j]=='X')
					printf("  ");
				else
					printf("%c ",a[i][j]);
		printf("\b|");
	}
	printf("\n\t\t ---------------");
	printf("\n Across:");
	printf("\n 1) By the way, in the centre of the Earth is a dead body (6)(Starting point: 1st row 1st column)");
	printf("\n 5) Reminder for men engrossed in cryptic tome (7)(Starting point: 3rd row 1st column)");
	printf("\n 7) Left to consume her hide (7)(Starting point: 5th row 1st column)");
	printf("\n 10) Cold and stiff, following failure (6)(Starting point: 7th row 2nd column)");
	printf("\n Down:");
	printf("\n 1) Go along with company and imply I am missing (6)(Starting point: 1st row 1st column)");
	printf("\n 2) Sheep butt? (3)(Starting point: 1st row 3rd column)");
	printf("\n 3) Alas, I never can hide an evil deed (3)(Starting point: 1st row 5th column)");
	printf("\n 4) Drunkenly rode up and filled a glass (6)(Starting point: 2nd row 7th column)");
	printf("\n 6) Devour meaty innards (3)(Starting point: 3rd row 4th column)");
	printf("\n 8) Element of pretension? (3)(Starting point: 5th row 3rd column)");
	printf("\n 9) Gigantic, endless embrace (3)(Starting point: 5th row 5th column)");
}
void main()
{
	char a[7][7];
	int i,j;
	for(i=0;i<7;i++)
		for(j=0;j<7;j++)
			a[i][j]='0';
	a[0][6]='X';
	a[1][1]='X';
	a[1][3]='X';
	a[1][5]='X';
	a[3][1]='X';
	a[3][2]='X';
	a[3][4]='X';
	a[3][5]='X';
	a[5][1]='X';
	a[5][3]='X';
	a[5][5]='X';
	for(i=0;i<7;i++)
		for(j=0;j<7;j++)
			if(a[i][j]=='0')
				a[i][j]='*';
	showcross(a);
	crossgamestart(a);
}
int down(char c[7][7])
{
	int a[7]={1,2,3,4,6,8,9},i,ch;
	char s[10];
	printf("\n Enter your choice:");
	scanf("%d",&ch);
	int f=0;
	for(i=0;i<7;i++)
		if(ch==a[i])
		{
			f=0;
			break;
		}
		else
			f=1;
	if(f)
	{
		printf("\n Wrong Option,retry");
		down(c);
	}
	printf("\n Enter the word:");
	scanf("%*c%[^\n]s",s);
	strupr(s);
	int s1;
	char f1='d';
	if(ch==1)
		s1=one(s,c,ch,f1);
	else
		s1=wordcheck(s,c,ch);
	if(s1==1)
		return 1;
	else if(s1==2)
		across(c);
	else
		return 0;
}
int across(char c[7][7])
{
	int a[4]={1,5,7,10},i,ch;
	char s[10];
	printf("\n Enter your choice:");
	scanf("%d",&ch);
	int f;
	for(i=0;i<4;i++)
		if(ch==a[i])
		{
			f=0;
			break;
		}
		else
			f=1;
	if(f)
	{
		printf("\n Wrong Option,retry");
		across(c);
	}
	printf("\n Enter the word:");
	scanf("%*c%[^\n]s",s);
	strupr(s);
	int s1;
	char f1='a';
	if(ch==1)
		s1=one(s,c,ch,f1);
	else
		s1=wordcheck(s,c,ch);
	if(s1==1)
		return 1;
	else if(s1==2)
		across(c);
	else
		return 0;
}
int one(char s[10],char c[7][7],int ch,char f)
{
	int i;
	if(f=='a')
		if(strcmp(s,"CORPSE")==0)
			{
				for(i=0;s[i];i++)
				{
					c[0][i]=s[i];
				}
				printf("\n Correct Answer");
			}
			else
			{
				char t;
				printf("\n Do you want to redo?(y/n):");
				scanf("%*c%c",&t);
				if(t=='y')
					return 2;
				else
					return 0;
			}
	else if(f=='d')
		if(strcmp(s,"COMPLY")==0)
			{
				for(i=0;s[i];i++)
				{
					c[i][0]=s[i];
				}
				printf("\n Correct Answer");
				return 1;
			}
			else
			{
				char t;
				printf("\n Do you want to redo?(y/n):");
				scanf("%*c%c",&t);
				if(t=='y')
					return 2;
				else
					return 0;
			}
}
int wordcheck(char s[10],char c[7][7],int ch)
{
	int i,j;
	switch(ch)
	{
		case 2:
			if(strcmp(s,"RAM")==0)
			{
				for(i=0;s[i];i++)
				{
					c[0][i]=s[i];
				}
				printf("\n Correct Answer");
			}
			else
			{
				char t;
				printf("\n Do you want to redo?(y/n):");
				scanf("%*c%c",&t);
				if(t=='y')
					return 2;
				else
					return 0;
			}
			break;
		case 3:
			if(strcmp(s,"SIN")==0)
			{
				for(i=0;s[i];i++)
				{
					c[0][i]=s[i];
				}
				printf("\n Correct Answer");
			}
			else
			{
				char t;
				printf("\n Do you want to redo?(y/n):");
				scanf("%*c%c",&t);
				if(t=='y')
					return 2;
				else
					return 0;
			}
			break;
		case 4:
			if(strcmp(s,"POURED")==0)
			{
				for(i=0;s[i];i++)
				{
					c[0][i]=s[i];
				}
				printf("\n Correct Answer");
			}
			else
			{
				char t;
				printf("\n Do you want to redo?(y/n):");
				scanf("%*c%c",&t);
				if(t=='y')
					return 2;
				else
					return 0;
			}
			break;
		case 5:
			if(strcmp(s,"MEMENTO")==0)
			{
				for(i=0;s[i];i++)
				{
					c[0][i]=s[i];
				}
				printf("\n Correct Answer");
			}
			else
			{
				char t;
				printf("\n Do you want to redo?(y/n):");
				scanf("%*c%c",&t);
				if(t=='y')
					return 2;
				else
					return 0;
			}
			break;
		case 6:
			if(strcmp(s,"MEATY")==0)
			{
				for(i=0;s[i];i++)
				{
					c[0][i]=s[i];
				}
				printf("\n Correct Answer");
			}
			else
			{
				char t;
				printf("\n Do you want to redo?(y/n):");
				scanf("%*c%c",&t);
				if(t=='y')
					return 2;
				else
					return 0;
			}
			break;
		case 7:
			if(strcmp(s,"LEATHER")==0)
			{
				for(i=0;s[i];i++)
				{
					c[0][i]=s[i];
				}
				printf("\n Correct Answer");
			}
			else
			{
				char t;
				printf("\n Do you want to redo?(y/n):");
				scanf("%*c%c",&t);
				if(t=='y')
					return 2;
				else
					return 0;
			}
			break;
		case 8:
			if(strcmp(s,"AIR")==0)
			{
				for(i=0;s[i];i++)
				{
					c[0][i]=s[i];
				}
				printf("\n Correct Answer");
			}
			else
			{
				char t;
				printf("\n Do you want to redo?(y/n):");
				scanf("%*c%c",&t);
				if(t=='y')
					return 2;
				else
					return 0;
			}
			break;
		case 9:
			if(strcmp(s,"HUG")==0)
			{
				for(i=0;s[i];i++)
				{
					c[0][i]=s[i];
				}
				printf("\n Correct Answer");
			}
			else
			{
				char t;
				printf("\n Do you want to redo?(y/n):");
				scanf("%*c%c",&t);
				if(t=='y')
					return 2;
				else
					return 0;
			}
			break;
		case 10:
			if(strcmp(s,"FRIGID")==0)
			{
				for(i=0;s[i];i++)
				{
					c[0][i]=s[i];
				}
				printf("\n Correct Answer");
			}
			else
			{
				char t;
				printf("\n Do you want to redo?(y/n):");
				scanf("%*c%c",&t);
				if(t=='y')
					return 2;
				else
					return 0;
			}
			break;
	}
	return 1;
}
void crossgamestart(char c[7][7])
{
	char ch,choice[6];
	int i;
	printf("\n Enter the choice to solve:");
	gets(choice);
	strupr(choice);
	i=0;
	do
	{
		if(strcmp(choice,"ACROSS")==0)
		{
			i=i+across(c);
		}
		if(strcmp(choice,"DOWN")==0)
		{
			i=i+down(c);
		}
		printf("\n Do you want to exit:(y/n):");
		scanf("%*c%c",&ch);
		if(ch=='y')
			break;
	}while(i<10);
}

