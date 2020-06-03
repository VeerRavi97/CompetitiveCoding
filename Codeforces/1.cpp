#include<bits/stdc++.h>
using namespace std;
#define all(c) c.begin(),c.end()
#define IOS ios::sync_with_stdio(0);cin.tie(0)
typedef long long ll;
typedef vector<int>v;
int solve(int a,int b){
if(a==b) return 0;
if(a>b){
 int diff=a-b;
 if(!(diff&1)) return 1;
 else return 2;
}
else{
    int diff=b-a;
    if(diff&1) return 1;
    else return 2;
}

}
int main(){
IOS;
int tc;
cin >> tc;
while(tc--){
int a,b;
cin >> a >> b;
int ans=solve(a,b);
cout << ans << "\n";




}




	
}