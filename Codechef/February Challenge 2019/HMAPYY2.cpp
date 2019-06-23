#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	// your code goes here
	ll tc;
	scanf("%lld",&tc);
	while(tc--){
	    
	    ll n,a,b,k;
	    scanf("%lld%lld%lld%lld",&n,&a,&b,&k);
	    ll count=0;
	    
	     ll p=n/a;
	     ll q=n/b;
	     ll hcf=__gcd(a,b);
	     ll mul=(a*b);
	     ll lcm=mul/hcf;
	     //cout << "lcm is " << lcm << "\n";
	     ll r=n/lcm;
	     count=p+q-(2*r);
	   
	   
	     //cout << "count " << " " << count << endl;
	    if(count>=k) printf("Win\n");
	    else
	    printf("Lose\n");
	    
	    
	}
	
	return 0;
}