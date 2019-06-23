#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unordered_map<char,ll> umap;
typedef vector<ll>vi;
int main(){
    ios:: sync_with_stdio();
    cin.tie(0);
    ll tc;
    cin >> tc;
    while(tc--){
        
        string s;
        cin >> s;
        ll len=s.length();
        umap mp;
        for(int i=0;i<len;i++)
          mp[s[i]]++;
          vi v(26,0);
          ll dfr=0;
      for(auto x:mp)
    {
        ll in=x.second;
        v[dfr]=in;
        dfr++;
        
    }
          
      sort(v.begin(),v.end());
       reverse(v.begin(),v.end());
      
      
    //   for(ll i=0;i<v.size();i++)
    //   cout << v[i] <<" ";
       
    //   cout << "\n";
       ll m=sqrt(len);
       ll ans=99999999999999;
       
       for(ll i=1;i<=m;i++){
           
           if(len%i==0){
               ll sum=0;
               
               ll f=i;
               ll c=len/i;
               
            //   cout << "Freq " << " " << f << " " << "no of characters " << " " <<  c << "\n";
               if(c<=26){
                   for(ll j=0;j<=c-1;j++){
                       ll num=v[j]-f;
                        // cout  << num << " ";
                       if(num<0)
                        sum+=abs(num);
                   }
                //   cout << "\n";
                //   cout << "sum " << "  " << sum << "\n";
                   
                  ans=min(ans,sum);  
                    // cout << "ans" << " " << ans << "\n";
                   
               }
                     
                sum=0;
                f=len/i;
                c=i;
                //  cout << "Freq " << " " << f << " " <<    "no of characters " << " " <<  c << "\n";
               
              if(c<=26){
                   for(ll j=0;j<=c-1;j++){
                       ll num=v[j]-f;
                        // cout  << num << " ";
                       if(num<0)
                        sum+=abs(num);
                   }
                //   cout << "\n";
                //   cout << "sum " << "  " << sum << "\n";
                   
                  ans=min(ans,sum);  
                    // cout << "ans" << " " << ans << "\n\n\n";
                   
               }
               
           }
           
           
       }
       
       
         
        //   cout << "final ans" << " " << ans << "\n";
         
         cout << ans << "\n";
        
        
        
        
    }
    
    
    
    
    
    
    
    
}