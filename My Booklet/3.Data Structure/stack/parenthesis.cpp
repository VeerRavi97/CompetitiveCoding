#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isvalid(string s){
stack<char>st;
for(auto ch:s){
    // cout << ch << "\n";
if(ch=='('|| ch=='{' || ch=='[')
st.push(ch);
else{
  if(st.empty())
  return false;
   char c=st.top(); // first check whether stack is empty or not
  if((ch==']'&&c=='[') || (ch==')' &&c=='(') || (ch=='}'&&c=='{' ))
    st.pop();
   else
   {
       return false;
   }
    
}

}
if(st.empty())return true;
return false;
}


int main(){
 string s;
 while(cin >> s){

    bool ans=isvalid(s);
    cout << ans << "\n";

 }



}
