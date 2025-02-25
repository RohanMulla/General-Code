// Date: 24-02-2025 at 20:52 BST
// Link: https://www.codechef.com/problems/COOLSUB
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n), ans;
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    map<ll, ll> mp;
    bool flag = true;
    for (ll i = 0; i < n; i++)
    {
        mp[v[i]]++;
        if (mp[v[i]] > 1)
        {
            cout << 1 << nl << v[i] << nl;
            flag = !flag;
            break;
        }
    }
    if (flag)
        cout << -1 << nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}