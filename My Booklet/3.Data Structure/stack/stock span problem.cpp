#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie();
 int tc;
 cin >> tc;
 while(tc--){
     int n;
     cin >> n;
     vector<int>v;
     for(int i=0;i<n;i++){
         int in;
         cin >> in;
         v.push_back(in);
     }
    stack<int>s;
    vector<int>ans(n,1);
    for(int i=0;i<n;i++){
        // cout << v[i] << "\n";
    while(!s.empty()&&v[s.top()]<=v[i])
        s.pop();

    if(!s.empty()) 
    ans[i]=i-s.top();
    else
    {
        ans[i]=i+1;
    }
    

    s.push(i);

    }
    for(int i=0;i<n;i++){
        cout  << ans[i] << " ";
    }
cout << "\n";
 }




}