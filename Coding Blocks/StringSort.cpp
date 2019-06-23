#include<bits/stdc++.h>
using namespace std;
#define all(c) c.begin(),c.end()
bool comp(string a,string b){
    
    if (a.find(b) != string::npos ||b.find(a) !=string::npos ) 
    {
        return a.length()>b.length();
    } 
return a<b;
}
int main(){
int n;
cin >> n;
vector<string>v;
for(int i=0;i<n;i++){
    string in;
    cin >> in;
    v.push_back(in);
}
sort(all(v),comp);
for(auto x:v)
cout << x << "\n";



}