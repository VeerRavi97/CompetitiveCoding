#include<bits/stdc++.h>
using namespace std;
#define all(c) c.begin(),c.end()
int main(){
    
    stringstream ss;
    // string s="Oggy and the coakroaches";
    // ss << s;
    // string word;
    // int cnt=0;
    // while(ss>>word){
    //     cout << word << "\n";
    // cnt++;
    // }
    // cout << cnt << "\n";
    
    // string input;
    // getline(cin,input);
    
    // unordered_map<string,int>mp;
    // stringstream ss1;
    // ss1 << input;
    // string temp;
    // while(ss1 >> temp){
    //     mp[temp]++;
    // }
    // for(auto x:mp){
    //     cout << x.first << " " << x.second << "\n";
    // }
//     string snum="12234";
//   ss << snum;
//   int num=0;
//   ss >> num;
//   cout << num << "\n";
   
  string nums="1233,444,3333,442474,4744747";

  replace(all(nums),',',' ');
  vector<int>v;
  ss << nums;
  int num;
  while(ss>>num){
      v.push_back(num);
  }
    
    for(auto x:v){
        cout << x << " ";
    }
    
     string nums="1233,2444,4474,44()2474, 4744747";
     
    // string re=", ()";
    //  for(auto ch:re){
    //      cout << ch << "\n";
    //      nums.erase(remove(all(nums),ch));
    //  }
    
    // cout << nums << "\n";
    
}