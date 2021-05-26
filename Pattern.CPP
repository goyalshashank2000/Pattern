#include<iostream.h>
#include<conio.h>
void show(char a[][4],int n,char x,char y,char z)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if((j==0 || j==n-1) && (i>0 && i<n-1)) //(i==j && (i+j)==4-1)
				a[i][j]='?';
			else if((i==0 || i==n-1) && (j>0 && j<n-1))
				a[i][j]='*';
			else //
				a[i][j]='#';

			gotoxy((j+3)*4,i+12);
			cout<<a[i][j];
		}
	}
}
void main()
{
	char a[4][4];
	char x='@',y='*',z='#';
	clrscr();
	show(a,4,x,y,z);
	getch();
}
