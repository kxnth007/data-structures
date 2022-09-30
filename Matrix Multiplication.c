#include<stdio.h>    
#include<stdlib.h>  
int main()
{
	int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
	system("cls");  
	printf("enter the number of row=");    
	scanf("%d",&r);    
	printf("enter the number of column=");    
	scanf("%d",&c);    
	printf("enter the first matrix element=\n");    
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)    
		{    
			scanf("%d",&a[i][j]);    
        }    
	}    
printf("enter the second matrix element=\n");    
for(i=0;i<r;i++)   
{
	for(j=0;j<c;j++)    
	{    
		scanf("%d",&b[i][j]);    
	}    
}    
printf("multiply of the matrix=\n");    
for(i=0;i<r;i++)    
{    
	for(j=0;j<c;j++)    
{    
	mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
	mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
//for printing result    
for(i=0;i<r;i++)    
{    
	for(j=0;j<c;j++)    
	{    
		printf("%d\t",mul[i][j]);    
	}    
	printf("\n");    
}    
return 0;  
}


sample output:

enter the number of row=3
enter the number of column=2
enter the first matrix element=
1
4
5
4
1
4
enter the second matrix element=
2
5
1
4
1
2
multiply of the matrix=
6       21
14      41
6       21

