#include <bits/stdc++.h>
using namespace std;
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define endl '\n'
#define all(c) c.begin(), c.end()
#define ALPHABET_SIZE 26

typedef vector<int> vi;
const int MOD = 1e9 + 7;
int charactersCount[ALPHABET_SIZE] = {0};
bool isLapindrome(string &str)
{
    // cout << str << endl;
    int len = str.length();
    // int mid = len / 2;
    int start = 0;
    int end = len - 1;
    while (start < end)
    {
        char charA = str[start];
        char charB = str[end];
        charactersCount[charA - 'a']++;
        charactersCount[charB - 'a']--;
        start++;
        end--;
    }
    for (int i = 0; i < ALPHABET_SIZE; i++)
    {
        // cout << charactersCount[i];
        if (charactersCount[i])
            return 0;
    }
    return 1;
}
int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    int tc;
    cin >> tc;
    while (tc--)
    {
        string str;
        cin >> str;
        memset(charactersCount, 0, sizeof(charactersCount));
        bool ans = isLapindrome(str);
        if (ans)
            cout << "YES" << endl;
        else
            cout << "N0" << endl;
    }
}