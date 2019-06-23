#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 while(cin >> n,n>0){
     vector<int>v;
     for(int i=0;i<n;i++){
         int in;
         cin >> in;
         v.push_back(in);
     }
    stack<int>s;
    vector<int>ans(n,0);
    for(int i=0;i<n;i++){
        cout << v[i] << "\n";
    while(!s.empty()&&v[s.top()]<v[i]){
        int a=s.top();
        ans[a]=v[i];
        cout << a << " " << ans[a] << "\n";
        s.pop();
    }
    s.push(i);

    }
    for(auto x:ans){
        cout << x << " ";
    }

 }




}