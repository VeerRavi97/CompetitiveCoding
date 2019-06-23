#include<bits/stdc++.h>
using namespace std;
#define del cout << "\n"
int main()
{
  string s1; // string empty object
   string s("hello");
   cout << s;
   del;
   s.push_back('i');
    cout << s; del;
    cout << s.front(); del;
    cout << s.back();
    int pos=0;
    pos=s.find('s');
    // return pos or -1 if not found
    del;
cout << pos; del;
 pos=s.find('l');
cout << pos; del;
int last=s.rfind('m');
cout << last << "\n";
string s2("abcabc");
cout << s2.rfind("abc") << "\n";
cout << s2.find_last_of("abc") << "\n";
int ffn=s.find_first_not_of("hlioe"); //Searches the string for the first character
//that does not match any of the characters specified in its arguments.

cout << ffn << "\n";
string s3="sed    ";
int dsf=s3.find_last_not_of(" \n\t");
cout << dsf << "\n";
s3.erase(0,2); //remember three variants
cout << s3;

s3.swap(s2);
cout << s3;
}
