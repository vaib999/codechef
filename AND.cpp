#include<stdio.h>
#define ll long long int
int main()
{
  int n,i,j;
  ll b[33]={0};
  ll ans=0,x;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%lld",&x);
    j=0;
    while(x)
    {
      if(x&1)
      b[j]++;
      j++;
      x>>=1;
    }
  }
  x=1;
  for(i=0;i<32;i++)
  {
    ans=(ans+((b[i]*(b[i]-1))/2)*x);
    x*=2;
  }
  printf("%lld\n",ans);
  return 0;
}
