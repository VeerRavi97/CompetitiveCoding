#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

#define all(c) c.begin(), c.end()
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);

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

bool isprime(ll n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    // for (ll i = 3; i * i <= n; i += 2)
    // { // only odd numbers
    //     if (n % i == 0)
    //         return false;
    // }
    for(ll i=0;i<primes.size()&& primes[i]*primes[i]<=n;i++){
        if(n%primes[i]==0) return false;
    }

    return true;
}

void segmented_sieve(ll l,ll r){
ll m=sqrt(r);
sieve(m);
ll diff=r-l+1;
vi range(diff,1);
for(ll i=0;i<primes.size();i++){
   for(ll j=l;j<=r;j++){
       if(j==primes[i]) continue;
       if(j%primes[i]==0) range[j-l]=0;

   }

}

for(ll i=0;i<diff;i++){
  if(range[i]){
      cout << i+l << " ";
  }
}


}

void finddivisors(ll n,vector<ll>&divisors){
for (int x = 2; x*x <= n; x++) {
while (n%x == 0) {
divisors.push_back(x);
n /= x;
}
}
if (n > 1) divisors.push_back(n);
}

void prime_factorization( ll n,vector<ll>&primefactors){
   ll p=primes[0];
    ll i=0;
   while(p*p<=n){
       if(n%p==0){
           primefactors.push_back(p);
           while(n%p==0){
               n=n/p;
           }
       }
       i++;
       p=primes[i];
   }
    if(n!=1) primefactors.push_back(n);

}

ll numpf(ll n){
  ll ans=0;
  ll p=primes[0];
  ll pf_index=0;
  while(p*p<=n){
      while(n%p==0){n=n/p;ans++;}
     p=primes[++pf_index];
  }
  if(n!=1) ans++;
  return ans;
}

ll distinctnumpf(int n){
ll ans=0;
ll pf=primes[0];
ll pf_index=0;
while(pf*pf<=n){
   if(n%pf==0){
   ans++;
   while(n%pf==0) n/=pf;
   }
  pf=primes[++pf_index];
}
if(n!=1) ans++;
return ans;

}

ll numDiv(ll n){
 ll pf=primes[0];
 ll pf_index=0;
 ll ans=1;
 while(pf*pf<=n){
     ll power=0;
     while(n%pf==0){
         n=n/pf;
         power++;
     }
     ans*=(power+1);
     pf=primes[++pf_index];
 }

if(n!=1) ans*=2;
return ans;

}

ll sumDiv(ll n){
ll pf_index=0;
ll pf=primes[0];
ll ans=1;
while(pf*pf<=n){
    ll power=0;
    while(n%pf==0){
        n=n/pf;
        power++;
    }
    ans*=((ll)(pow(pf,power +1)+0.5)-1)/(pf-1);
    pf=primes[++pf_index];
}
if(n!=1) {

 ans *= (((ll)(pow(pf, 2.0)+0.5)) - 1) / (n - 1);
}
  

 return ans;
}

ll EulerPhi(ll n){
 ll pf=primes[0];
 ll pf_index=0;
 ll ans=n;
 while(pf*pf<=n){
  if(n%pf==0) ans-=ans/pf;
  while(n%pf==0) n=n/pf;
  pf=primes[++pf_index];
 }
if(n!=1)
ans-=ans/pf;
return ans;

}


int main()
{
    fast;
     sieve(10000);
     ll n;
     cin >> n;
    ll ans=numpf(n);
    ll ans2=distinctnumpf(n);
    vector<ll>divisors;
    finddivisors(n,divisors);
    for(auto x:divisors){
        cout << x << " ";
    }
    cout << "\n";
    ll ans3=numDiv(n);
    ll ans4=sumDiv(n);
    ll ans5=0;
    ans5=EulerPhi(n);
      cout << ans << " " << ans2 << " " << ans3 << " " << ans4 <<" " << ans5 <<  "\n";
    
}