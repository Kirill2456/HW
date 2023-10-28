#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
srand(time(NULL));
int ar[]={6,1,-10,5,2,-7};
int *ptr=ar;
int n=sizeof(ar)/sizeof(ar[0]);

for(int i=0; i<n; i++)
{
printf("do = %d \n",ar[i]);
}


for (int i=0; i<n; i++)
{
for (int j=n-1; j>i; j--)
{
if((*(ptr+j))>(*(ptr+j-1)))
{
int temp = *(ptr+j);
*(ptr+j)=*(ptr+j-1);
*(ptr+j)=temp;
}
}
}

for(int i=0; i<n; i++)
{
printf("posle = %d \n",ar[i]);
}

printf("\t dvumernie din massiv\n");

int size,i;
int **array = (int**)malloc(sizeof(int*) * size);
for (int i=0; i<size; i++)
{
array[i] = (int*)malloc(sizeof(int*) *size);
}

for (i = 0; i<size; i++)
{
free(array[i]);
}
free(array);

printf("massiv na 30-float chisel\n");

float arr[30];
float k=22356.3;
int ind;
for (int i=0; i<30; i++)
arr[i]=(float)rand()/RAND_MAX*(100-10)+10;
for (int i=0; i<29; i++)
{
if (arr[i]>arr[i+1])
ind=i;
}
printf("%d\n",ind);
return 0;
}
