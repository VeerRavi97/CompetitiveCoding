#include<bits/stdc++.h>
using namespace std;
int max_N=1000001;
#define all(c) (c).begin(),(c).end()
int main(){
    string s="hellohello";
    set<char>st(all(s));
    cout << st.size();
}