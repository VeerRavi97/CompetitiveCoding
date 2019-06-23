#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll>pi;
typedef vector<pi>vi;

#define fast ios::sync_with_stdio(0);cin.tie(0);
#define loop(i,a,b) for(int i=a;i<=b;i++)
#define all(v) v.begin(),v.end()

const ll MOD=1e9+7;
const ll INF=0x3f3f3f3f;
const ll MINF=-INF;
const double EPS=1e-9;
int mat[8][8];
int sqre(int x)
{
    return x*x;
}
int r,c,k;
int solve(int x,int y){
    
       int cal= sqre(r-x)+sqre(c-y);
    return cal;
        
    
    
    
}

int main(){
    fast;
    ll tc;
    cin >> tc;
    while(tc--){
      
      memset(mat,0,sizeof(mat));
       
       
       cin  >> r >> c >> k;
       r=r-1;
       c=c-1;
       int ans=0;
       for(int i=r-k;i<=r+k;i++){
           for(int j=c-k;j<=c+k;j++){
               int x=i;
               int y=j;
            
               if(x>=0&&y>=0 &&x<8 &&y<8)
               {
                   int cal=solve(x,y);
                   
                   
                // cout << x << " " << y << " " << cal << " ";
                if(cal<=2)
                   ans++;
                //   cout << ans << " ";
               }
            //   cout << "\n";
           }
       }
       
       
       
      cout << ans << "\n";  
        
    }
    
    
    
    
}

