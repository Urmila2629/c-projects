#include<stio.h>
void fact();
main()
{
  fact();
}
void fact()
{
  int n,i,f=1;
  printf("\n enter n=");
  scanf("%d",&n);
  for(i=0;i<=n;i++);
  {
    f=f*i;
  }
  printf("\n factorial=%d",f);
  
}
