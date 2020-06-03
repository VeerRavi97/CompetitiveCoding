// https://practice.geeksforgeeks.org/problems/subset-sum-problem/0

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <ll> vi;
typedef pair<ll,ll> ii;
#define all(c) c.begin(),c.end()
#define MINF -0x3f3f3f3f
#define INF 0x3f3f3f3f
#define N 100002
vi v(102,0);
vi cnt(N,0);

ll solve( ll sum,ll n)
{
    ll rsum;
    rsum=sum/2;
    cnt[0]=1;
    for( ll k=1;k<=n;k++)
    for (ll x=rsum;x>=v[k];x--){

        if(cnt[x-v[k]])
            cnt[x]+=1;
    }
    return cnt[rsum];

  // for(int i=0;i<=rsum;i++)
   //cout << cnt[i] << " ";

}
int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);
    ll tc;
    cin >> tc;
    while(tc--)
    {
        ll n=0,sum=0;
        fill(v.begin(),v.end(),0);
        fill(all(cnt),0);

        cin >> n;
        v[0]=-1;

        for(ll i=1;i<=n;i++)
        {
            ll in;
            cin >> in;
            v[i]=in;
            sum+=in;
        }

        if(sum%2==0)
        {
            //cout << "sum" << sum << " ";
            ll ans=solve(sum,n); // ll ans=solve() with sum ans n as global variable causes segmentation error
            if(ans>0)
                cout << "YES" << "\n";
            else
                cout << "NO" << "\n";

        }

        else
            cout << "NO" << "\n";



    }




}
