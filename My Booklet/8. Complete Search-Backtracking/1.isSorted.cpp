#include<bits/stdc++.h>
using namespace std;

int isSorted(vector<int>&v,int index){
if(index==v.size()-1) return 1;
if(v[index]<=v[index+1]) return isSorted(v,index+1);
return 0;
}
int main(){
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
int ans=isSorted(v,0);
cout << ans << "\n";

}





}