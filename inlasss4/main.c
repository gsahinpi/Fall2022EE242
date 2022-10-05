#include <stdio.h>
#include <stdlib.h>
int nlength(char *);
char * mycat(char * , char *);

int main()
{ int * ptr;
int i,size;
    //printf("enter size of the array\n");
    //scanf("%d",&size);
 printf("%s\n",mycat("hello","world"));

  /*  ptr = (int*) malloc(size * sizeof(int));
       printf("after malloc %d\n", sizeof(ptr));

  for (i=0;i<size;i++)
  {
      ptr[i]=i;
  }
for (i=0;i<size;i++)
  {
      printf("%d\n", ptr[i]);
  }*/

    return 0;
}
int nlength(char * str)
{
  int i=0;
  while (str[i]!='\0')//*(str+i)!='\0'
  {
      i++;
  }
  return i;
}
char * mycat(char *s1 , char *s2)
{
int size1,size2,i;
char * cptr;

size1=nlength(s1);
size2=nlength(s2);
//printf("size %d,%d",size1,size2);
cptr=(char *) malloc((size1+size2+1)* sizeof(char));
for (i=0;i<size1;i++)
{
    cptr[i]=s1[i];

}
for (i=0;i<size2;i++)
{
    cptr[i+size1]=s2[i];

}
cptr[size1+size2]='\0';
return cptr;

}
