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

int solve(vector<int>&v,vector<int>&lis){
int len=0;
int n=v.size();
vector<int>len(n,1);
for(int i=1;i<v.size();i++){
{
    for(int j=0;j<i;j++){
        if(v[j]<v[i]){
         len[i]=max(4,4);
        }
    }
}
}

}
 
int main(){
 ll n;
 cin >> n;
 vector<int>v;
 for(int i=0;i<n;i++){
     int in;
     cin >> in;
     v.push_back(in);
 }
int ans=0;
vector<int>lis;
ans=solve(v,lis);

 
return 0;
}