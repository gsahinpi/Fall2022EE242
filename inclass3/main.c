#include <stdio.h>
#include <stdlib.h>
float foo(int [],int size);
int main()
{int i;

    printf("Hello world!\n");

    int ar[]={1,2,3};
    int * aptr;
    aptr=ar;

    int mainsize=sizeof(ar)/sizeof(ar[0]);
    printf("the size of aptr %d\n",sizeof(aptr));
    printf("size of array in ?%d, size of an element of array %d \n",sizeof(ar),sizeof(ar[0]));
    printf("size of array in number of elements %d , size of an integer %d \n",sizeof(ar)/sizeof(ar[0]),sizeof(int));
printf("average is %f\n",foo(ar,mainsize));
printf("mainsize in main %d\n",mainsize);
for (i=0;i<mainsize;i++)
   {
printf("average is %d\n",ar[i]);
   }
   printf("!!!!!%d\n",ar[20]);
    printf("?!!!!%d\n",*(aptr+20));
     printf("?!!!!%d\n",aptr[20]);
    return 0;
}
float foo(int a[],int size)
{
   float sum=0;
   int i;

   float result=0;


   for (i=0;i<size;i++)
   {
       sum+=a[i];
   }
   result=sum/i;
   printf(" i%d\n",i);
    for (i=0;i<size;i++)
   {
       a[i]=-1;
   }

   return result;
}
