#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    st.push(4);
    st.push(5);
    st.push(34);
    st.push(23);
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << "\n";
    queue<int>q;
     q.push(4); // 4
    q.push(5); // 4 5
    q.push(34); // 4 5 34
    q.push(23);// 4 5 34 23
     while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";
    deque<int>dq;
    dq.push_front(4); // 4
    dq.push_back(5); // 4 5
    dq.push_front(34); // 34 4 5
    dq.push_back(23); // 34 4 5 23
    while(!dq.empty()){
        cout << dq.front() << " " <<  dq.back() << "\n";
        dq.pop_back();
        dq.pop_front();
    }
    
    
    
}