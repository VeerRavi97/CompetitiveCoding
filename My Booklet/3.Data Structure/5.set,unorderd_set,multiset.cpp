#include<bits/stdc++.h>
using namespace std;
#define all(c) c.begin(),c.end()
int main(){
    
    set<int>s; // ordered and unique
    cout << s.size() << "\n";
    s.insert(20);
    s.insert(10);
    s.insert(10);
    s.insert(10);
    s.insert(30);
    cout << s.size() << "\n";
    for(auto x:s){
        cout << x << " ";
    }
    cout << endl;
    auto it=s.find(10);
    auto low=*s.lower_bound(10); // can't use operator -
    if(it!=s.end())
    {
        cout << "found " << low << "\n" ;
    }
     
     cout << s.count(10) << " " << s.count(40) << "\n";
    
    unordered_set<int>u; // unoredered and Unique
    u.insert(20);
    u.insert(10);
    u.insert(10);
    u.insert(10);
    u.insert(30);
    cout << u.size() << "\n";
    for(auto x:u){
        cout << x << " ";
    }
    
    multiset<int>ms; // ordered and Multiple
    ms.insert(20);
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);
    ms.insert(30);
    cout << ms.size() << "\n";
    for(auto x:ms){
        cout << x << " ";
    }
    cout << endl;
    cout << ms.count(10) << " " << ms.count(30) << " " << ms.count(40) << "\n";
    ms.erase(ms.find(10));
    for(auto x:ms){
        cout << x << " ";
    }
    cout << "\n";
    ms.erase(10);
     for(auto x:ms){
        cout << x << " ";
    }
    
    ms.clear();
    s.clear();
    u.clear();
      for(auto x:ms){
        cout << x << " ";
    }
}