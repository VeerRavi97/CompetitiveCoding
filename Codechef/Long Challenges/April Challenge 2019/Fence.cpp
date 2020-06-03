#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll>pi;
typedef vector<pi>vi;

#define fast ios::sync_with_stdio(0);cin.tie(0);
#define all(v) v.begin(),v.end()
#define endl "\n"

const ll MOD=1e9+7;
const ll INF=0x3f3f3f3f;
const ll MINF=-INF;
const double EPS=1e-9;
ll dx[4]={0,1,0,-1};
ll dy[4]={1,0,-1,0};

int main(){
    fast;
    ll tc;
    cin >> tc;
    while(tc--){
      
      ll n,m,k;
      cin >> n >> m >>k;
      if(n<1000 && m<1000){
          ll ans1=0;
          int mat[n+2][m+2];
      
       memset(mat,0,sizeof(mat));
       for(int i=0;i<k;i++){
           int x,y;
           cin >> x >> y;
           mat[x][y]=1;
           
       }
    //     for(int i=0;i<=n;i++){
    //       for(int j=0;j<=m;j++){
    //           cout << mat[i][j] << " ";
    //       }
    //       cout << endl;
    //   }
       
       for(int i=1;i<=n;i++){
           for(int j=1;j<=m;j++){
               if(mat[i][j]){
                   
               for(int ind=0;ind<4;ind++){
                   if(mat[i+dx[ind]][j+dy[ind]]==0)
                   ans1++;
               }
            //   cout << i << " " << j << " " << cnt << "\n";
               }
               
           }
       }
       
       
        cout << ans1 << "\n";
        
          
          
          
          
      }
      else{
      multimap<ll,ll>mp;
      vector<pi>v;
      for(int i=0;i<k;i++){
          ll x,y;
          cin >> x >> y;
          mp.insert(make_pair(x,y));
          v.push_back(make_pair(x,y));
      }
       
       ll ans=0;
    
       for(int i=0;i<k;i++){
           ll x=v[i].first;
           ll y=v[i].second;
      
           ll cnt=0;
           for(int k=0;k<4;k++){
               ll x1=x+dx[k];
               ll y1=y+dy[k];
           
               ll countx=mp.count(x1);
               auto it=mp.find(x1);
               
               if(it!=mp.end()){
                    auto last=next(it,countx);
                
                    
                   for(auto itr=it;itr!=last;itr++){
                    
                    if(itr->second==y1 && itr->first==x1)
                          cnt++;
                   }
               }
               
           }
           
           ans+=(4-cnt);
       
       }
       cout << ans << "\n" ;
      }
    }
    
    
    
    
}

