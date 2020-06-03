
#include <algorithm>
#include <cstdio>
#include <stack>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll>ii;
#define MAX_N 1000001
#define clr(x) memset(x, 0, sizeof(x))
#define all(c) (c).begin(),(c).end()
vector<int> sub(MAX_N);
vector<int>arr(MAX_N);
vector<int>sub_id(MAX_N);
vector<int>parent(MAX_N,-1);

void findlcs(ll end,ll k1) {
  ll lis[end];
 cout << "parent" << "\n";
 for(int k=0;k<11;k++)
      cout << parent[k] << " ";
      cout << "\n";


  for(ll i=end-1;i>=0;i--)
  {
      lis[i]=arr[k1];
      k1=parent[k1];
  }
 for(int i=0;i<end;i++)
cout << lis[i] << " ";
cout << "\n";

}

int main() {
    ll t;
    //scanf("%d",&t);
    //while(t--)
       // {

     ll n;
  scanf("%lld",&n);
  for(ll i=0;i<n;i++)
  {
      ll in;
      scanf("%lld",&in);
      arr[i]=in;

  }

      ll len= 0;
     for (ll i = 0; i < n; ++i)
    {
      ll pos =upper_bound(sub.begin(),sub.begin()+len ,arr[i]) - sub.begin();

    sub_id[pos] = i;
    sub[pos]=arr[i];
    if(pos>0)
    parent[i] =  sub_id[pos - 1];
    if (pos + 1 > len) {
      len = len+ 1;
    }
     }
  ll k=sub_id[len-1];
  cout << "sub\n";
 for(int k=0;k<n;k++)
       cout << sub_id[k] << " ";
       cout << "\n";

  cout << len << "\n";
  findlcs(len,k);


//}
return 0;
}


// 9
// 2 5 3 7 11 8 10 13 6
// sub
// 0 2 8 5 6 7 0 0 0
// 6
// parent
// -1 0 0 2 3 3 5 6 2 -1 -1
// 2 3 7 8 10 13



// 16
//0 8 4 12 2 10 6 14 1 9 5 13 3 11 7 15


