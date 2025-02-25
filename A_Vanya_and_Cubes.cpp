// Date: 25-02-2025 at 19:05 BST
// Link: https://codeforces.com/problemset/problem/492/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
/* author @MullaRohan */
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, ans, f = 0;
    cin >> n;
    while (ans <= n)
    {
        f++;
        ans += (f * (f + 1)) / 2;
    }
    cout << f - 1 << nl;
    return 0;
}
