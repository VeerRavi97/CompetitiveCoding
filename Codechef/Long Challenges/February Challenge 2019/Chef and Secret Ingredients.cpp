#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans=0;
string removeDuplicates(string str){
    ll x=0;
    int n=str.length();
    ll len=0;
     
    for(int i=0;i<n;i++){
        
        ll index=str[i]-'a';
        if((x&(1<<index))==0){
            str[len]=index+'a';
            x = x | (1 << index);
            
            len++;
        }
        
    }
    
    
   str=str.substr(0,len);
   
   
   return str;
    
    
}


int main(){
    
    ll tc;
    scanf("%lld",&tc);
    while(tc--){
        unordered_map<char,ll>umap;
        
        string str;
        ll n=0;
        scanf("%lld",&n);
        for(int i=0;i<n;i++){
        cin >> str;
      
        str=removeDuplicates(str);
        for(int i=0;i<str.length();i++)
           umap[str[i]]++;
        
        
        }
        for(auto itr=umap.begin();itr!=umap.end();itr++)
          {
              if(itr->second>=n) ans++;
          }
        
        printf("%lld",ans);
    }
    
    
    
    
}