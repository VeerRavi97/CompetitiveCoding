#include<bits/stdc++.h>
using namespace std;
#define all(c) c.begin(),c.end()
int main(){
int n;
cin >> n;
vector<int>v;
for(int i=0;i<2*n;i++){
    int in;
    cin >> in;
    v.push_back(in);
}
sort(all(v));
int med=v[n-1];
cout << med << "\n";
}