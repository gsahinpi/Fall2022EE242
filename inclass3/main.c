#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ar[]={1,2,3};
    int i;
    int dummy;
    for (i=0;i<3;i++)
    {
      dummy=ar[i] ;
      printf( "%d\n",dummy  ) ;


    }
    for (i=0;i<3;i++)
    {
      dummy=*(ar+i) ;
      printf( "%d\n",dummy  ) ;


    }
    printf("Hello world!\n");
    return 0;
}
