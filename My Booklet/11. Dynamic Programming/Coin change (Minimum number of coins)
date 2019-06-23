
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long INF=0x3f3f3f3f;
const long MINF=-0x3f3f3f3f;
#define N 251
typedef vector <ll> vi;
vector<ll>cont(N);
vector<ll> coin(N);
ll sum,n;
const unsigned int m=1000000007;
ll solve()
{
    fill(cont.begin(),cont.end(),INF);
    cont[0]=0;
    for(ll i=0;i<n;i++)
    {

     for(ll j=1;j<=sum;j++)
     {
         if((j-coin[i])>=0)
         {
          cont[j]=min(1+cont[j-coin[i]],cont[j]);
        // cont[j]%=m;
         }
     }
    }

    return cont[sum];

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0) ;

   scanf("%lld%lld",&sum,&n);
   for(ll i=0;i<n;i++)
   {
       ll in;
       scanf("%lld",&in);
       coin[i]=in;

   }

   ll ans=0;
   ans=solve();
   for(ll i=0;i<=sum;i++)
    cout << cont[i]<< " ";
cout << "\n";

cout << ans << "\n";




}
