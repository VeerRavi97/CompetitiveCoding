#include<bits/stdc++.h>
using namespace std;
#define all(c) c.begin(),c.end()
#define IOS ios::sync_with_stdio(0);cin.tie(0)
typedef long long ll;
typedef vector<int>v;
int main(){
IOS;
int tc;
cin >> tc;
while(tc--){
ll ans=19;
int r,c;
cin >> r >> c;
if(r>c){
int diff=r-c;
diff/=2;
int x=r-diff;
int y=x;
 ans+=2;
cout << ans << "\n";
cout  << x << " " << y << "\n";
cout << 1 << " " << 1 << "\n";
r=1;
c=1;
}
else if(r-c<0){
int diff=c-r;
diff/=2;
    int x=r+diff;
    int y=x;
    ans+=2;
    cout << ans << "\n";
cout  << x << " " << y << "\n";
cout << 1 << " " << 1 << "\n";
r=1;
c=1;
}
else{
      ans+=1;
    cout << ans << "\n";
cout << 1 << " " << 1 << "\n";
r=1;
c=1;

}

if(r==1 && c==1){
//cout << ans << "\n";
 cout << 8 << " " << 8 << "\n";
 cout << 7 << " " << 7 << "\n";
 cout << 8 << " " << 6 << "\n";
 cout << 3 << " " << 1 << "\n";
cout << 4 << " " << 2 << "\n";
cout << 5 << " " << 1 << "\n";
cout << 8 << " " << 4 << "\n";
 cout << 7 << " " << 3 << "\n";

 cout << 8 << " " << 2 << "\n";

 cout << 7 << " " << 1 << "\n";
 cout << 3 << " " << 5 << "\n";
 cout << 6 << " " << 8 << "\n";
 cout << 1 << " " << 3 << "\n";
 cout << 2 << " " << 4 << "\n";
 cout << 1 << " " << 5 << "\n";
 cout << 4 << " " << 8 << "\n";
 cout << 3 << " " << 7 << "\n";
  cout << 2 << " " << 8 << "\n";

 cout << 1 << " " << 7 << "\n";









}
}
}