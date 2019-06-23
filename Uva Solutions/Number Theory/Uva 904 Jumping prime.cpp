#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll>pi;
typedef vector<ll>vi;

#define fast ios::sync_with_stdio(0);cin.tie(0);
#define all(v) v.begin(),v.end()
#define endl "\n"
#define del cout << "\n"
#define pb push_back()

const ll MOD=1e9+7;
const ll INF=0x3f3f3f3f;
const ll MINF=-INF;
const double EPS=1e-9;
vi primes;

void sieve(ll MAX_N)
{
    vi marked(MAX_N+1,1);
    marked[0] = marked[1] = 0;
    marked[2] = 1;
    primes.push_back(2); // 2 is only even prime number
    for (ll i = 4; i <= MAX_N; i += 2)
    { // eliminate all even numbers
        marked[i] = 0;
    }
    for (ll i = 3; i <= MAX_N; i += 2)
    {
        if (marked[i])
        {
             primes.push_back(i);
            for (ll j = i * i; j <= MAX_N; j += i)
            {
                marked[j] = 0;
            }
           
        }
    }
}
void segmented_sieve(ll l,ll r,vector<ll>&output){
ll diff=r-l+1;
 ll lowi=lower_bound(all(primes),l)-primes.begin();
 ll upi=upper_bound(all(primes),r)-primes.begin();
 
//  cout << lowi << " " << upi << "\n";
   for(ll i=lowi;i<upi;i++)
      output.push_back(primes[i]);

}

int main(){
   
    ll tc;
    sieve(1000000);
    cin >> tc;
    while(tc--){
     ll l,r;
     cin >> l >> r;
     vector<ll>output;
     output.clear();
     segmented_sieve(l,r,output);
//      for(auto x:output){
//        cout << x << " ";
//      }
// cout << "\n";
if(output.size()<2){
       cout << "No jumping champion" << "\n";
}
else{
unordered_map<ll,ll>mp;
for(ll i=1;i<output.size();i++){
  ll diff=output[i]-output[i-1];
  // cout << diff << " ";
  mp[diff]++;
}

ll maxm=-1;
ll ans;
bool flag=false;
ll cnt=0;
for(auto x:mp){
    //    cout << x.first << " " << x.second;
       if(maxm<x.second){
         ans=x.first;
        maxm=x.second;
        cnt=0;
       }
       else if(maxm==x.second){
         cnt++;
       }
        
    //    cout << "\n";
     }
     if (cnt)
       cout << "No jumping champion" << "\n";
     else
       cout << "The jumping champion is " <<  ans << "\n";
}
    }
    
    
    
    
}

