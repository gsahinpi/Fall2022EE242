#include <stdio.h>
#include <stdlib.h>


int main()
{
 int **p2d;
 int i,j;
 //int *ptr
 //ptr = (int*) malloc(100 * sizeof(int));
 //
   p2d=(int **)malloc(4* sizeof(int [5]));
    printf ("sizeof %d\n",sizeof(int [5]));
   *(p2d+(1*5)+0)=5;

 for (i=0;i<4;i++)
 {
     *(p2d+i)=(int *) malloc(5* sizeof(int));
 }
 for (i=0;i<4 ;i++)
{
for (j=0;j<5 ;j++)
printf("[%d][%d] [%p][%d]\n",i,j,p2d[j],*(p2d+(i*5)+j));

}
/*
int arr[][4]={
{12,23,34,45},
{56,67,78,89},
{1,2,3,4},
{56,67,78,89},
{56,67,78,89},
{12,23,34,45},
};
int i, j;
int **ptr=&arr;
printf("just printing the elemnts of arr [2]");
for (i=0;i<4;i++)
{
   printf("!%d\n", arr[2][i]);
}




for (i=0;i<5 ;i++)
{
for (j=0;j<4 ;j++)
printf("[%d][%d] [%p][%d]\n",i,j,arr[i],*(ptr+(i*4)+j));

}
*/
}
