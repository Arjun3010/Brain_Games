#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#define n 9
#define ua 0
void show(int a[9][9])
{
	int i,j;
		for(i=0;i<n;i++)
		{
			if(i%3==0)
				printf("\n\t\t ");
			for(j=0;j<n;j++)
			{
				if(j%3==0 && j!=0)
					printf("   ");
				if(a[i][j]==ua)
					printf("  ");
				else
					printf("%d ",a[i][j]);
			}
			printf("\n\t\t ");
		}
}
void main()
{
	int a[9][9];
	int i,j,id2,r;
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
			a[i][j]=0;
		printf("\n Difficulty:\n 1) Easy \n 2) Normal \n 3) Hard \n Enter the difficulty: ");
		scanf("%d",&id2);
		if(id2==1)
		{
			srand(time(0));
			r=rand()%3+1;
			if(r==1)
			{

					a[0][0]=1;
					a[0][2]=7;
					a[1][1]=2;
					a[1][3]=7;
					a[1][4]=9;
					a[1][5]=6;
					a[1][8]=8;
					a[2][1]=4;
					a[2][3]=1;
					a[2][4]=2;
					a[2][8]=9;
					a[3][3]=9;
					a[3][4]=1;
					a[3][8]=3;
					a[4][1]=3;
					a[4][3]=6;
					a[4][5]=2;
					a[4][7]=9;
					a[5][0]=6;
					a[5][4]=5;
					a[5][5]=3;
					a[6][0]=5;
					a[6][4]=7;
					a[6][5]=9;
					a[6][7]=4;
					a[7][0]=9;
					a[7][3]=8;
					a[7][4]=6;
					a[7][5]=4;
					a[7][7]=5;
					a[8][6]=9;
					a[8][8]=2;
			}
			else if(r==2)
			{
					a[0][1]=5;
					a[0][2]=4;
					a[0][5]=9;
					a[0][6]=2;
					a[1][0]=6;
					a[1][1]=9;
					a[1][8]=4;
					a[2][4]=3;
					a[2][7]=5;
					a[3][0]=3;
					a[3][1]=4;
					a[3][3]=7;
					a[3][8]=2;
					a[4][1]=8;
					a[4][3]=2;
					a[4][4]=4;
					a[4][5]=1;
					a[4][7]=7;
					a[5][0]=2;
					a[5][5]=3;
					a[5][7]=8;
					a[5][8]=1;
					a[6][1]=7;
					a[6][4]=2;
					a[7][0]=4;
					a[7][7]=6;
					a[7][8]=9;
					a[8][2]=5;
					a[8][3]=9;
					a[8][6]=1;
					a[8][7]=2;
			}
			else if(r==3)
			{
					a[0][4]=3;
					a[0][6]=9;
					a[0][7]=5;
					a[0][8]=8;
					a[1][2]=1;
					a[1][3]=9;
					a[1][7]=6;
					a[2][1]=6;
					a[2][3]=2;
					a[2][4]=7;
					a[2][7]=3;
					a[3][2]=5;
					a[3][5]=9;
					a[3][8]=6;
					a[4][2]=6;
					a[4][6]=1;
					a[5][0]=7;
					a[5][3]=3;
					a[5][6]=5;
					a[6][1]=5;
					a[6][4]=9;
					a[6][5]=2;
					a[6][7]=8;
					a[7][1]=2;
					a[7][5]=4;
					a[7][6]=6;
					a[8][0]=6;
					a[8][1]=4;
					a[8][2]=9;
					a[8][4]=1;
			}

		}
		else if(id2==2)
		{
			srand(time(0));
			r=rand()%3+1;
			if(r==1)
			{
				a[0][3]=4;
				a[1][0]=2;
				a[1][1]=7;
				a[1][2]=6;
				a[1][3]=9;
				a[1][6]=4;
				a[1][8]=3;
				a[2][0]=8;
				a[2][3]=2;
				a[2][7]=7;
				a[3][2]=4;
				a[3][6]=8;
				a[3][7]=2;
				a[3][8]=7;
				a[4][4]=7;
				a[5][0]=7;
				a[5][1]=6;
				a[5][2]=8;
				a[5][6]=9;
				a[6][1]=1;
				a[6][5]=9;
				a[6][8]=5;
				a[7][0]=3;
				a[7][2]=7;
				a[7][5]=4;
				a[7][6]=1;
				a[7][7]=8;
				a[7][8]=6;
				a[8][5]=1;
			}
			else if(r==2)
			{
				a[0][0]=9;
				a[0][4]=1;
				a[0][8]=6;
				a[1][1]=7;
				a[1][8]=1;
				a[2][3]=2;
				a[2][4]=8;
				a[2][5]=3;
				a[3][4]=2;
				a[3][5]=1;
				a[3][7]=5;
				a[3][8]=7;
				a[4][1]=3;
				a[4][7]=9;
				a[5][0]=1;
				a[5][1]=4;
				a[5][3]=9;
				a[5][4]=5;
				a[6][3]=6;
				a[6][4]=9;
				a[6][5]=5;
				a[7][0]=4;
				a[7][7]=6;
				a[8][0]=2;
				a[8][4]=4;
				a[8][8]=9;
			}
			else if(r==3)
			{
				a[0][2]=6;
				a[0][5]=1;
				a[0][6]=2;
				a[0][8]=9;
				a[1][5]=7;
				a[1][7]=6;
				a[1][8]=3;
				a[2][0]=3;
				a[2][3]=5;
				a[2][6]=7;
				a[3][1]=1;
				a[3][3]=7;
				a[3][7]=9;
				a[4][3]=1;
				a[4][5]=3;
				a[5][1]=3;
				a[5][5]=8;
				a[5][7]=2;
				a[6][2]=3;
				a[6][5]=6;
				a[6][8]=4;
				a[7][0]=4;
				a[7][1]=2;
				a[7][3]=8;
				a[8][0]=7;
				a[8][2]=1;
				a[8][3]=9;
				a[8][6]=8;
			}
		}
		else if(id2==3)
		{
			srand(time(0));
			r=rand()%3+1;
			if(r==1)
			{
				a[0][1]=9;
				a[0][6]=2;
				a[0][8]=8;
				a[1][2]=6;
				a[1][3]=9;
				a[1][5]=4;
				a[1][6]=3;
				a[2][5]=5;
				a[2][6]=4;
				a[3][1]=1;
				a[3][3]=7;
				a[3][6]=9;
				a[4][2]=9;
				a[4][3]=4;
				a[4][5]=1;
				a[4][6]=8;
				a[5][2]=8;
				a[5][5]=3;
				a[5][7]=2;
				a[6][2]=7;
				a[6][3]=5;
				a[7][2]=2;
				a[7][3]=1;
				a[7][5]=9;
				a[7][6]=5;
				a[8][0]=5;
				a[8][2]=1;
				a[8][7]=3;
			}
			else if(r==2)
			{
				a[0][0]=4;
				a[0][2]=1;
				a[0][4]=5;
				a[1][2]=5;
				a[1][5]=6;
				a[1][6]=4;
				a[2][2]=7;
				a[2][5]=3;
				a[2][7]=9;
				a[3][0]=3;
				a[3][1]=5;
				a[3][3]=7;
				a[3][7]=2;
				a[5][1]=1;
				a[5][5]=2;
				a[5][7]=6;
				a[5][8]=7;
				a[6][1]=8;
				a[6][3]=6;
				a[6][6]=7;
				a[7][2]=9;
				a[7][3]=3;
				a[7][6]=5;
				a[8][4]=8;
				a[8][6]=6;
				a[8][8]=1;
			}
			else if(r==3)
			{
				a[0][3]=9;
				a[0][7]=2;
				a[0][8]=4;
				a[1][4]=3;
				a[2][0]=7;
				a[2][2]=6;
				a[2][3]=4;
				a[2][6]=5;
				a[3][2]=9;
				a[3][3]=5;
				a[3][6]=7;
				a[4][1]=5;
				a[4][4]=9;
				a[4][7]=3;
				a[5][2]=2;
				a[5][5]=3;
				a[5][6]=8;
				a[6][2]=3;
				a[6][5]=7;
				a[6][6]=1;
				a[6][8]=6;
				a[7][4]=8;
				a[8][0]=5;
				a[8][1]=6;
				a[8][5]=1;
			}
		}
	show(a);
	int m=inputcheck(a);
		if(!m)
			printf("\n Wrong answer");
			return;
		if(grid(a))
			printf("\n Completed successfully");
		else
			printf("\n Incomplete");
}
int checkrow(int w, int a[9][9],int row)
{
	int j;
		for(j=0;j<n;j++)
			if(w==a[row][j])
				return 0;
	return 1;
}
int checkcolumn(int w, int a[9][9],int col)
{
	int j;
		for(j=0;j<n;j++)
			if(w==a[j][col])
				return 0;
	return 1;
}
int checkgrid(int w,int a[9][9],int row,int col)
{
	int i,j;
	row = row / 3;
	col = col / 3;
	row = row * 3;
	col = col * 3;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			if(w==a[row+i][col+j])
				return 0;
	return 1;
}
int unassigned(int a[9][9],int row,int col)
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(a[row][col]==0)
				return 1;
	return 0;
}
int grid(int a[9][9])
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(a[i][j]==0)
				return 0;
	return 1;
}
int inputcheck(int a[9][9])
{
	char ch;
	do
	{
		int s,t,w;
		printf("\n Enter the position where to type(Rows,Columns):");
		scanf("%d%d",&s,&t);
		printf("\n Enter the number:");
		scanf("%d",&w);
		s=s-1;
		t=t-1;
		if(w>9&&w<1)
			return 0;
		if(!unassigned(a,s,t))
			return 0;
		if(!checkrow(w,a,s))
			return 0;
		if(!checkcolumn(w,a,t))
			return 0;
		if(!checkgrid(w,a,s,t))
			return 0;
		a[s][t]=w;
		show(a);
		printf("\n Enter your choice:");
		scanf("%*c%c",&ch);
	}while(ch!='n');
}

