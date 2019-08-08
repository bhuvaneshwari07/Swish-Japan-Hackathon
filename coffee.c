#include<stdio.h>
int main()
{
  int x,p,dis,amt;
  scanf("%d%d\n",&x,&p);
  amt=x;
  while(x>1)
  {
     dis=(p/100)*x;
     x=x-dis;
     amt=amt+x;
     }
     printf("%d\n",amt);
     
     }
     
