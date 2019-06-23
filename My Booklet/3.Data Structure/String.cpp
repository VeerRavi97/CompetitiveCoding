#include <bits/stdc++.h>
using namespace std;

#define all(c) c.begin(), c.end()

int main()
{

    // Creating Strings
    string s = "stiches good song";
    string s1("hello");
    s.push_back('r');
    s+='a';
    s.pop_back();
    //    getline(cin,s);

    // Manipulating Objects
    s.insert(8, "is a very ");
    cout << s << "\n";
    s.erase(11, 1);
    cout << s << "\n";
    s.erase(12); // from 12 to end
    cout << s << "\n";
    s1.erase();
    s.replace(2, 2, "blood");
    cout << s << "\n";

    if (isalpha(s[3]) && islower(s[3]))
    { // isalpha,isdigit,islower, isupper, tolower,toupper,
        s[3] = toupper(s[3]);
     }
     

     // algorithms
     int n = count(all(s), 'o');
     cout << n << "\n";
     reverse(all(s));
      cout << s << "\n";
     sort(all(s));
      cout << s << "\n";
     random_shuffle(all(s));
      cout << s << "\n";
     replace(all(s), ',', ' ');
     cout << s << "\n";
     auto pend = remove(all(s), ' ');
     s.erase(pend, s.end()); // erase remove idiom c++
      cout << s << "\n";
     
     // relational operators
       string s3="abcDE";
       string s4="abCDE";
       if(s3>s4){
           cout << "greater " << "\n";
       }

     // int n=s.find_first_of('s');
     // s.insert(n,"castaway");
     // cout << s << "\n";s
     // string s1="bat";
     // string s2="batsman";
     //     // cout << s2.compare(s1);
     //     int n=s1<s2;
     //     cout << n;

     //     string s1="batsman";
     // string s2="ats";
     //     // cout << s2.compare(s1);
     // //    comp(s1,s2);
     // if(s1.find(s2)!=string::npos){
     //     int x=s1.find(s2);
     // cout << x << "\n";
     // }
}