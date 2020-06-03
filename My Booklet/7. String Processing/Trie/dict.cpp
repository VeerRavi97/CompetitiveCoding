#include <bits/stdc++.h>
using namespace std;
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define endl '\n'
#define all(c) c.begin(), c.end()
#define MAXN 1111111
#define ALPHABET_SIZE 26

typedef vector<int> vi;
const int MOD = 1e9 + 7;
bitset<111111> bs;
int trie[MAXN][ALPHABET_SIZE];
int visited[MAXN];
int nodes = 0;
void insert(string s)
{
    int node = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int idx = s[i] - 'a';
        if (!trie[node][idx])
        {
            trie[node][idx] = ++nodes;
        }
        node = trie[node][idx];
    }
    visited[node] = 1;
}

void dfs(int src, string s, vector<string> &ans)
{
    // cout << "standing at " << src << " " << s << "\n";
    bs[src] = 1;
    for (int i = 0; i < ALPHABET_SIZE; i++)
    {
        int node = trie[src][i];
        char c;
        // cout << src << " " << s << " " << node << " " << bs[node] << "\n";
        if (bs[node] == 0 && trie[src][i] > 0)
        {

            c = i + 'a';
            string temp = s + c;
            if (visited[node])
            {
                // cout << "matched " << temp << "\n";
                ans.push_back(temp);
            }
            // cout << "Node visited " << node << " " << s << "\n";
            dfs(node, temp, ans);
            // s.pop_back();
        }
        // if (visited[node])
        //     ans.push_back(s);
    }
    // cout << src << " Exit " << s
    //      << "\n";
    // return;
}

void search(string s, vector<string> &ans)
{
    int node = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int idx = s[i] - 'a';
        if (!trie[node][idx])
            return;
        node = trie[node][idx];
    }
    // cout << "\nI am at " << node << "\n";
    bs.reset();
    dfs(node, s, ans);
}

void fn(string s, vector<string> &ans)
{
    int node = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int idx = s[i] - 'a';
        if (!trie[node][idx])
            return;
        node = trie[node][idx];
    }
    // cout << "\nI am at " << node << "\n";
    bs.reset();
    queue<pair<int, string>> q;
    q.push({node, s});
    while (!q.empty())
    {
        pair<int, string> curr = q.front();
        q.pop();
        for (int i = 0; i < ALPHABET_SIZE; i++)
        {
            int node = trie[curr.first][i];
            char c;
            // cout << curr.first << " " << curr.second << " " << node << " " << bs[node] << "\n";
            if (bs[node] == 0 && trie[curr.first][i] > 0)
            {

                c = i + 'a';
                bs[node] = 1;
                string temp = curr.second + c;
                if (visited[node])
                {
                    // cout << "matched " << temp << "\n";
                    ans.push_back(temp);
                }
                // cout << "Node visited " << node << " " << s << "\n";
                q.push(make_pair(node, temp));
            }
            // if (visited[node])
            //     ans.push_back(s);
        }
    }
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // IOS;
    int n;
    memset(trie, 0, sizeof(trie));
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        insert(s);
    }
    // for (int i = 0; i < nodes; i++)
    // {
    //     for (int j = 0; j < ALPHABET_SIZE; j++)
    //         cout << trie[i][j] << " ";
    //     cout << "\n";
    // }
    // for (int i = 0; i <= nodes; i++)
    // {

    //     cout << visited[i] << " ";
    // }

    int k;
    cin >> k;
    int index = 0;

    while (k--)
    {
        cout << "Case #" << index + 1 << ":"
             << "\n";
        index++;
        vector<string> ans;
        string s;
        cin >> s;
        fn(s, ans);
        if (ans.size() == 0)
            cout << "No match."
                 << "\n";
        else
        {
            for (int i = 0; i < ans.size(); i++)
                cout << ans[i] << "\n";
        }
    }
}