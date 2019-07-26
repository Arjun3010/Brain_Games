#include<stdio.h>
#include<stdlib.h>
#include<time.h>
char g[3][3]={'\0','\0','\0','\0','\0','\0','\0','\0','\0'};
int choice;
int i,j,k,x,y,F=0,l,a,i1=0,f1=0;
void main()
{
	    printf("\n\t\t\tWelcome to the Tic Tac Toe");
        printf("\nEnter '1.' for single player mode.\nEnter '2.' for multiplayer mode. :  ");
        scanf("%d",&choice);

        if(choice==1)
        {
        		printf("\nYou are going to play on 'X' side the computer will take 'O'\n");
        	for(i=0;;i++)
        	{
        		F=0;
        	if(i%2==1)
			{
				printf("\n'O' Turn\n");
				for(i1=0,f1=0;i1<3&&f1==0;i1++)
        {
        	if(g[i1][0]==g[i1][1]&&g[i1][2]=='\0')
        	{
        		g[i1][2]='O';
        		f1=1;
        		F=1;
			}
			else if(g[i1][0]==g[i1][2]&&g[i1][1]=='\0')
			{
				g[i1][1]='O';
        		f1=1;
        		F=1;
			}
			else if(g[i1][1]==g[i1][2]&&g[i1][0]=='\0')
			{
				g[i1][0]='O';
        		f1=1;
        		F=1;
			}
			else if(g[0][i1]==g[1][i1]&&g[2][i1]=='\0')
			{
				g[2][i1]='O';
				f1=1;
				F=1;
			}
			else if(g[0][i1]==g[2][i1]&&g[1][i1]=='\0')
			{
				g[1][i1]='O';
				f1=1;
				F=1;
			}
			else if(g[1][i1]==g[2][i1]&&g[0][i1]=='\0')
			{
				g[2][i1]='O';
				f1=1;
				F=1;
			}
			else if((g[0][0]==g[2][2]||g[0][2]==g[0][2])&&g[1][1]=='\0')
			{
				g[1][1]='O';
				f1=1;
				F=1;

			}
			else if(g[0][0]==g[1][1]&&g[2][2]=='\0')
			{
				g[2][2]='O';
				f1=1;
				F=1;
			}
			else if(g[2][2]==g[1][1]&&g[0][0]=='\0')
			{
				g[1][1]='O';
				f1=1;
				F=1;
			}
			else if(g[0][2]==g[1][1]&&g[2][0]=='\0')
			{
				g[2][0]='O';
				f1=1;
				F=1;
			}
			else if(g[2][0]==g[1][1]&&g[0][2]=='\0')
			{
				g[0][2]='O';
				f1=1;
				F=1;
			}
		}
				for(;F!=1;)
                	{
						srand(time(0));
						a=rand()%9;
						if(a>=0&&a<=2&&g[0][a]=='\0')
						{
							g[0][a]='O';
							F=1;
						}
						if(a>=3&&a<=5&&g[1][a-3]=='\0')
						{
							g[1][a-3]='O';
							F=1;
						}
						if(a>=6&&a<=8&&g[2][a-6]=='\0')
						{
							g[2][a-6]='O';
							F=1;
						}

					}
			}
			F=0;
        	    if(i%2==0)
                {
                	do
                	{
						printf("\nX turn : \n");
                    	printf("\nEnter the X and Y cordinates : ");
                    	scanf("%d%d",&x,&y);
                    	x-=1;
                    	y-=1;
                    	if(x>=0&&x<4&&y>=0&&y<4&&g[x][y]=='\0')
                   		{
                    	    g[x][y]='X';
                    	    F=1;
                    	}
                    	else
                    		printf("\nInvalid Input");
					}while(F!=1);
				}
				disp();
                check();

        }
    }
        if(choice==2)
        {
        	 disp();
            for(i=0;;i++)
            {
				F=0;
                if(i%2==0)
                {
                	do
                	{
                    printf("\nX turn :\n");
                    printf("\nEnter the X and Y cordinates : ");
                    scanf("%d%d",&x,&y);
                    x-=1;
                    y-=1;
                    if(x>=0&&x<4&&y>=0&&y<4&&g[x][y]=='\0')
                    {
                        g[x][y]='X';
                        F=1;
                    }
                    else
                    	printf("\nInvalid Input");

					}while(F!=1);
				}
                if(i%2==1)
                {
                	do
                	{
					printf("\nO turn : \n");
                    printf("\nEnter the X and Y cordinates : ");
                    scanf("%d%d",&x,&y);
                    x-=1;
                    y-=1;
                    if(x>=0&&x<4&&y>=0&&y<4&&g[x][y]=='\0')
                    {
                        g[x][y]='O';
                        F=1;
                    }
                    else
                    	printf("\nInvalid Input");
					}while(F!=1);
				}
 				disp();
                check();

        }
}
		while(choice!=1&&choice!=2);

}
int check()
{
	               for(j=0;j<3;j++)
                 {
                     if((g[j][0]==g[j][1]&&g[j][0]==g[j][2])&&g[j][0]!='\0')
                     {
                         printf("\n%c is the winner winner chicken dinner\n",g[j][0]);
                        exit(0);
                     }
                     if((g[0][j]==g[1][j]&&g[0][j]==g[2][j])&&g[0][j]!='\0')
                     {
                       printf("\n%c is the winner winner chicken dinner\n",g[0][j]);
                        exit(0);
                     }
                 }
                 if(g[1][1]!='\0'&&((g[0][0]==g[1][1]&&g[0][0]==g[2][2])||(g[0][2]==g[1][1]&&g[1][1]==g[2][0])))
                 {
                     printf("\n%c is the winner winner chicken dinner\n");
                        exit(0);
                 }
                 for(j=0;j<3;j++)
                 {
                     for(k=0;k<3;k++)
                     {
                         if(g[j][k]!='\0')
                         {
                             l++;
                         }
                     }
                 }
                     if(l==9)
                     {
                         printf("\nMatch has been drawn\n");
                         exit(0);
                     }
                     else
                     	l=0;

			return 0;
}
int disp()
{
				printf("\t  1  2  3");
                 for(j=0;j<3;j++)
                 {
                     printf("\n\n\t%d ",j+1);
                     for(k=0;k<3;k++)
                     {
                        if(g[j][k]!='\0')
                            printf("%c  ",g[j][k]);
                        else
                            printf("   ");
                     }
                 }
                 return 0;
}

