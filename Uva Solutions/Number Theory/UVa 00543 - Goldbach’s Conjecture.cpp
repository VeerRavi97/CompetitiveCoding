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

set<ll>s;
void sieve(ll n){
    vi marked(n+1,1);
    marked[0]=0;
    marked[1]=0;
    marked[2]=1;
    for(ll i=2;i<=n;i++){
        if(marked[i]){
            for(ll j=i*i;j<=n;j+=i)
            marked[j]=0;
            s.insert(i);
        }
        
    }
}

int main(){
    sieve(1000000);
    ll n;
    while(cin >> n,n>0){
        ll a=0;
        for(auto x:s){
            if(s.count(n-x)){
                a=x;
                break;
            }
        }
        if(a!=0){
            ll b=n-a;
            cout << n << " " << "=" <<  " " << a << " " << "+" << " " <<  b << "\n";
        }
        else
        {
            cout << "Goldbach's conjecture is wrong." << "\n";
        }
        

    }
    
    
    
}

