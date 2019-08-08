/* Read n value into array Sort array using function */
#include<stdio.h>
void swap(int *x, int *y)
{
  int t;
  t = *x;
  *x = *y;
  *y = t;
}
 
void read(int *p,int t)
{
  int *i;
  for(i=p;i<p+t;i++)
     scanf("%d",i);
}
void display(int *p,int t)
{
  int *i;
  for(i=p;i<p+t;i++)
     printf("%5d",*i);
  printf("\n");
}
 
void sort(int *p, int t)
{
   int *i,j;
   for(j=1;j<t;j++)
     for(i=p;i<p+t-j;i++)
if(*i >= *(i+1))
 swap(i,i+1);
}

int main()
{
  int n,a[100];
  printf("Enter Total value of array :-");
  scanf("%d",&n);
  printf("enter %d value\n",n);
  read(a,n);
  printf("\nbefore sort List:\n");
  display(a,n);
  sort(a,n);
  printf("\nAfter Sorted list:\n");
  display(a,n);
  return 0;
}
