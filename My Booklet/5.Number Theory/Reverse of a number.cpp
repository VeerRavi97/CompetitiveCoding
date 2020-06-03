#include <bits/stdc++.h>
using namespace std;
int reverse(int n)
{

    int reversed = 0;
    while (n)
    {
        int lastdigit = n % 10;
        reversed = reversed * 10 + lastdigit;
        cout << reversed << " ";
        n /= 10;
    }
    return reversed;
}

int main()
{

    cout << reverse(1156469);
}