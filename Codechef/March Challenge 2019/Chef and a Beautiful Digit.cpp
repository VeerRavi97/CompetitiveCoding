#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fast ios::sync_with_stdio(0);cin.tie(0);
#define loop(i,a,b) for(int i=a;i<=b;i++)

const ll MOD=1e9+7;
const ll INF=0x3f3f3f3f;
const ll MINF=-INF;

int main(){
    fast;
    ll tc;
    cin >> tc;
    while(tc--){
        
        string n;
        char d;
        cin >> n >> d;
        ll i=1;
        ll len=n.length();
    
            if(n[len-1]>d) 
            {
               n[len-1]=d;
            }
              
            //   cout << n << "\n";
        
       
        while(true){
            ll j=i-1;
            // cout << digit << " " << i << "\n";
            while(j>=0 && n[j]>n[i]){
                n.erase(j,1);
                
                n+=d;
                
                j--;
            }
            i=j+1;
            
            
            i++;
            // cout << n << "\n";
            if(i==len)
            break;
            
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    
        
        
        cout << n  <<  "\n";
        
    }
    
    
    
    
    
    
}