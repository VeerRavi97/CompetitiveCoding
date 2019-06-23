#include<bits/stdc++.h>
using namespace std;

int solve(string s){
int cnt1=count(s.begin(),s.end(),'(');
int cnt2=count(s.begin(),s.end(),')');
// cout << abs(cnt1-cnt2);
return abs(cnt1-cnt2);

}

int main(){
string s;
 while(cin >> s){

     int  ans=solve(s);
    cout << ans << "\n";

 }


}