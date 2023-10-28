#include <stdio.h>
#include <stdlib.h>

int main()
{
//int ar[5][7]={{0,1,2,3,4,5,6},{7,8,9,10,11,12,13},{14,15,16,17,18,19,20},{21,22,23,24,25,26,27},{28,29,30,31,32,33,34}};
int n=5;
int m=7;
int ar[n][m];
/*int row=0, col=0;
for (int i=0; i<n*m; )
{
ar[row][col]=i++;
col+=1;
if (col==m)
{
col=0;
row+=1;
}
}*/

int temp=0;
for (int i=0;i<n;i++)
{
for (int j=0;j<m;j++)
{
ar[i][j]=temp;
temp++;
}
}

for (int i=0; i<5; i++)
{
for (int j=0; j<7; j++)
{
printf(" %d ",ar[i][j]);
}
printf("\n");
}
return 0;
}
