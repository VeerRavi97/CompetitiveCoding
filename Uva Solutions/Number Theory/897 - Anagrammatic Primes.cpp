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

const ll MAX_N=2000;
vi primes;
vi marked(MAX_N+1,1);

void sieve(){
marked[0]=marked[1]=0;
marked[0]=1;
primes.push_back(2);
for(ll i=4;i<=MAX_N;i+=2)
marked[i]=0;
for(ll i=3;i<=MAX_N;i++){
    if(marked[i]){
        primes.push_back(i);
        for(ll j=i*i;j<=MAX_N;j+=i)
        marked[j]=0;
    }
}
}

int main(){
   sieve();
//    for(auto x:primes)
//    std::cout << x << " ";
//    std::cout << "\n";
   ll n;
    ll ans=0;
   while(cin >> n,n>0){
       ans=0;
   ll pf_index=upper_bound(all(primes),n)-primes.begin();
//    std::cout << "pose " << " " << pf_index << "\n";
  if(n>991)
      {
          cout << "0" << "\n";
          break;
      }
   for(ll k=pf_index;k<primes.size();k++){
   ll num=primes[k];
//  std:: cout << "num " << " " << num << "\n";
   ll num1=num;
   vi v;
   while(num>0){
       v.push_back(num%10);
       num=num/10;
   }
//    cout << "vector inside permutation" << "\n";
//    cout << "\n";
   sort(all(v)); 
   bool flag=false;
    do{
       ll cal = 0;
//        for(auto x:v){
    
//        cout << x << " ";
//    }
//    cout << endl ;
      for (ll i = 0; i < v.size(); i++)
        cal = 10 * cal + v[i];
    //    std:: cout << "Cal " << " " << cal << "\n";
        if(find(all(primes),cal)==primes.end()){
            flag=true;
         break;
        }

    }while (next_permutation(all(v)));
    if(!flag)
   { ans=num1;
    break;
   }
   }
    std::cout << ans << "\n";
   }
}

