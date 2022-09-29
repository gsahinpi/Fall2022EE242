#include <stdio.h>
#include <stdlib.h>
void swap1(int,int);
void swap(int *,int *);
void globalswap();
int c,d;//global variables
int main()
{
/*    int a=5;
int b=7;
printf("before func call a=%d b=%d\n",a,b);
printf(" adress of a in main%p\n",&a);
   swap1(a,b);
   printf("after func call a=%d b=%d\n",a,b);
   swap(&a,&b);
     printf("in func after pointer swap a=%d b=%d\n",a,b);
    return 0;
    */
    c=5;
    d=7;
  printf("in main before globalswab a=%d b=%d\n",c,d);
  globalswap() ;

  printf("in main after globalswab a=%d b=%d\n",c,d);
}
void swap1(int a,int b)
{
    int temp;
    printf("in func before swap a=%d b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("in func after swap a=%d b=%d\n",a,b);
    printf(" adress of a in main%p\n",&a);

}
void swap(int * aptr,int *bptr)
{
  int temp;
  temp=*aptr  ;
  *aptr=*bptr;
   *bptr=temp;
}
void globalswap()
{
    int temp;
    temp=c;
    c=d;
    d=temp;
}
