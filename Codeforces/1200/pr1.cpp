#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    ll sum = 0;
    ll mn = LLONG_MAX;

    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;

        sum += x;
        mn = min(mn, sum / i);

        cout << mn << " ";
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}