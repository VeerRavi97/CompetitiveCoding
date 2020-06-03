#include <bits/stdc++.h>
using namespace std;
#define all(c) c.begin(), c.end()
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
typedef long long ll;
typedef vector<ll> vi;
int main()
{
    // priority_queue<int>pq; // by default, max-heap, higher number has higher priority
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 1; i <= 5; i++)
    {
        int in;
        cin >> in;
        pq.push(in);
    }
    // Traverse
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}