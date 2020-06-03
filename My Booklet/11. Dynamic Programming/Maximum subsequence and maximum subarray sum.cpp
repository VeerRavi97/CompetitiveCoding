#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <ll> vi;
#define MINF -0x3f3f3f3f
#define INF 0x3f3f3f3f

#define N 100005
#define clr(x) memset(x,0,sizeof(x))
#define clrv(x) fill(x.begin(),x.end(),0)
vi v(N);
vi sum(N,0);
ll maxrange(ll n)
{
   ll ans=MINF;
   sum[0]=v[0];
   for(ll i=0;i<n;i++)
   {
       if(i>0)
       sum[i]=sum[i-1]+v[i];
       ans=max(sum[i],ans);
       if(sum[i]<0)
        sum[i]=0;
   }
    ll pos=find(v.begin(),v.end(),ans)-v.begin();
  //  for(ll i=0;i<n;i++)
      //  cout << sum[i] << " ";
   // cout << "\n";
    return ans;





}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        clrv(v);
        ll n;
        scanf("%lld",&n);
        ll sum1=0;
        ll cont=0;
        for(ll i=0;i<n;i++)
        {
            ll in;
            scanf("%lld",&in);
            v[i]=in;
            if(in>0)
            sum1+=in;
           if(in<0)
            cont++;
        }
        ll sum2=maxrange(n);
     //  cout << "count" << cont << "\n";
       ll ma=0;
        if(cont==n)
        {
           // for(ll i=0;i<n;i++)
           //     cout << v[i] << " ";
          //  cout << "\n";
             ma=*max_element(v.begin(),v.begin()+n);
          //  cout << "max " << ma << "\n";
            sum1=ma;
        }
        cout << sum2 << " " << sum1 << "\n";











    }

return 0;



}
