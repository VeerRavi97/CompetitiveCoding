#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll>vi;

#define all(c) c.begin(),c.end()

#define endl "\n"
#define fast ios::sync_with_stdio(0);cin.tie(0);

const ll MAXN=1e5+5;
int main(){
fast;
 ll n=6;
 //    cin >> n;
 // for(int i=0;i<n;i++){
 //     int in;
 //     cin >> in;
 //     v[i]=in;
 // }
 
 vector<ll>v;
 v.push_back(4);
 v.push_back(14);
 v.push_back(5);
 v.push_back(18);
 v.push_back(7);
 v.push_back(1);
 
    sort(all(v)); // algo
    reverse(all(v)); //algo
   for(auto x:v)
   cout << x << " ";
     cout << endl;
    
    random_shuffle(all(v)); //algo
    for(auto x:v)
   cout << x << " ";
     cout << endl;
   
    v.erase(v.begin()+2);
     v.insert(v.begin()+2,5);
      for(auto x:v)
   cout << x << " ";
     cout << endl;
     
     
     sort(all(v));
     int cnt=count(all(v),5); //algo
    int cnt2=count(all(v),100);
     cout << cnt << " " << cnt2 << "\n";
     
     
     v.erase(unique(all(v)),v.end());
     for(auto x:v)
   cout << x << " ";
     cout << endl;
     
     int mini=min_element(all(v))-v.begin();
     int mine=*min_element(all(v));
     cout << mini << " " << mine << "\n";
     
     random_shuffle(all(v));
     auto it=find(all(v),5);
      for(auto x:v)
   cout << x << " ";
     cout << endl;
     if(it!=v.end()){
      cout << "found at " << it-v.begin() << "\n";
     }
     
     
     random_shuffle(all(v));
    
      for(auto x:v)
   cout << x << " ";
     cout << endl;
     cout << "Permutation " << "\n";
     next_permutation(all(v));
     sort(all(v));
     do{
      
       for(auto x:v)
   cout << x << " ";
     cout << endl;
     }while(next_permutation(all(v)));
      for(auto x:v)
   cout << x << " ";
     cout << endl;
     
     sort(all(v));
       for(auto x:v)
   cout << x << " ";
     cout << endl;
     int lowi=lower_bound(all(v),18)-v.begin();
     int lowe=*lower_bound(all(v),18);
     cout << lowi << " " <<  lowe << "\n";
     int lowii=lower_bound(all(v),19)-v.begin();
     int lowee=*lower_bound(all(v),19);
     cout << lowii << " " <<  lowee << "\n";

     replace(all(v),4,14); //algo
    
       for(auto x:v)
   cout << x << " ";
     cout << endl;

     auto pend=remove(all(v),14); //algo
     v.erase(pend,v.end());
     for(auto x:v)
   cout << x << " ";
     cout << endl;
     cout << v.size() << "\n";
}