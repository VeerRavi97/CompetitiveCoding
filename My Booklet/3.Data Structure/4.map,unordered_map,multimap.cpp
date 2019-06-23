#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // map<string,int>mp;
    // mp.insert(make_pair("banana",2));
    // mp.insert(make_pair("apple",12));
    // mp.insert(make_pair("carrot",22));
    // mp["donkey"]=5;
    //  mp.insert(make_pair("donkey",22));
    // cout << mp.size() << "\n";
    
    // for(auto x:mp){
    //     cout << x.first << " " << x.second <<"\n";
    // }
    // cout << "\n";
    // for(auto it=mp.begin();it!=mp.end();it++){
    //     cout << it->first << " " << it->second <<"\n";
    // }
    // cout << mp.count("donkey") << "\n";
    
    // if(mp.find("donkey")!=mp.end())
    // {
    //     cout << mp["donkey"] << "\n";
    // }
    
    // multimap<string,int>mmp;
    //  mmp.insert(make_pair("banana",2));
    // mmp.insert(make_pair("apple",12));
    // mmp.insert(make_pair("carrot",22));
    // mmp.insert(make_pair("carrot",24));
    //  mmp.insert(make_pair("donkey",22));
    // cout << mmp.size() << "\n";
    
    // for(auto x:mmp){
    //     cout << x.first << " " << x.second <<"\n";
    // }
    // cout << "\n";
    // for(auto it=mmp.begin();it!=mmp.end();it++){
    //     cout << it->first << " " << it->second <<"\n";
    // }
    // cout << mmp.count("donkey") << "\n";
    
    
    unordered_map<string,int>umap;
    cout << umap.empty() << "\n";
     umap.insert(make_pair("banana",2));
    umap.insert(make_pair("apple",12));
    umap.insert(make_pair("carrot",22));
    umap.insert(make_pair("carrot",24));
    umap.insert(make_pair("donkey",22));
    cout << umap.empty() << "\n";
     cout << umap.size() << "\n";
    
    for(auto x:umap){
        cout << x.first << " " << x.second <<"\n";
    }
    cout << "\n";
    for(auto it=umap.begin();it!=umap.end();it++){
        cout << it->first << " " << it->second <<"\n";
    }
    cout << umap.count("donkey") << "\n";
     umap.erase("donkey");
    if(umap.find("donkey")!=umap.end())
    {
        cout << umap["donkey"] << "\n";
    }
    
   
    
}