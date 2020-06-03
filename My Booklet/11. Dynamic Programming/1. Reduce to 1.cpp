#include<bits/stdc++.h>
using namespace std;
const int inf=(int)1e9;
const int max_n=1e5+5;
vector<int>memo(max_n);
vector<int>dp(max_n);
class Solution{
  public:
  int solveMemo(int n){
      if(n==1) return 0;
      if(memo[n]!=-1)return memo[n];
      int q1=inf, q2=inf,q3=inf;
if(n%3==0)q1=1+solveMemo(n/3);
if(n%2==0)q2=1+solveMemo(n/2);
q3=1+solveMemo(n-1);
memo[n]=min(q1,min(q2,q3));
return memo[n];

  }
   int solveDP(int n){
       dp[0]=0;dp[1]=0;dp[2]=1;dp[3]=1;
       for(int i=4;i<=n;i++){

        int q1=inf, q2=inf,q3=inf;
if(i%3==0)q1=1+dp[i/3];
if(i%2==0)q2=1+dp[i/2];
q3=1+dp[i-1];
dp[i]=min(q1,min(q2,q3));

       }
     
return dp[n];

  }



};
int main(){
    Solution A;
  int n=0;
  while(cin>>n,n>0){
      memo.assign(max_n,-1);
       dp.assign(max_n,-1);
    int ans1=A.solveMemo(n);
    int ans2=A.solveDP(n);
   cout << ans1 <<  " " << ans2 << "\n";


  }



return 0;

}


