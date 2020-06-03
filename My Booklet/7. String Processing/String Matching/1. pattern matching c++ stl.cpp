#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll>vi;
typedef pair<ll,ll>ii;
typedef vector<ii>vii;
 
#define all(c) (c).begin(),(c).end()
#define fast ios::sync_with_stdio(0);cin.tie(0);
 
const ll MOD=1e9+7;
const ll INF=0x3f3f3f3f;
const double EPS=1e-9;
const ll MAX_N=1e5+5;
 
int main(){
 string txt,pattern;
 while(cin >> txt >> pattern){
    if(txt.find(pattern)!=string::npos){
        int pos=txt.find(pattern);
        while(pos!=string::npos){
           cout << "pattern found at " << pos << "\n";
             cout << txt.substr(pos+1) << "\n"; // remaining text
           pos=txt.find(pattern,pos+1);
         
        }
    }


 }
 
return 0;
}