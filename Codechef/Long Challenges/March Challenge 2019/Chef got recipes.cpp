#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll>vi;

#define fast ios::sync_with_stdio(0);cin.tie(0);
#define loop(i,a,b) for(int i=a;i<=b;i++)
#define all(v) v.begin(),v.end()

const ll MOD=1e9+7;
const ll INF=0x3f3f3f3f;
const ll MINF=-INF;

int main(){
    fast;
    ll tc;
    cin >> tc;
    while(tc--){
        fast;
        ll n;
        cin >> n;
        string s[n];
        unordered_map<char,ll>umap1;
        for(ll i=0;i<n;i++){
            string in;
            cin  >> in;
            unordered_map<char,ll>umap;
            for(ll j=0;j<in.length();j++){
                umap[in[j]]++;
        
            }
            
            for(auto itr:umap){
            s[i].push_back(itr.first);
            umap1[itr.first]++;
            }
            sort(s[i].begin(),s[i].end());
        }
         
        for(auto itr:umap1)
         cout << itr.first << " " << itr.second << "\n";
        
        ll ans=0;
       
        for(ll i=0;i<n;i++){
         string s1=s[i];
         for(ll j=0;j<s1.length();j++){
        
             umap1[s1[j]]--;
            
         }
          string vowel="aeiou";
          string s2;
         for(ll k=0;k<5;k++){
             ll found = s1.find(vowel[k]);
             if(found<0)
             {
                 char ch=vowel[k];
                 s2.push_back(ch);
             }
                
         }
         cout << s2 << "\n";
         ll ans1=INF;
         if(s2.length()==0){
             ans+=n-i-1;
         }
         else{
         for(ll l=0;l<s2.length();l++){
             ll f=umap1[s2[l]];
             
             ans1=min(ans1,f);
         }
         
         cout << ans1 << "\n";
         ans+=ans1;
         }
            
            
        }
        
        
        
        cout << ans << "\n";
        
    }
    
    
    
    
}

