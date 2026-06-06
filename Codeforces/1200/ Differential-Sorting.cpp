#include <bits/stdc++.h>
using namespace std;

#define DEC2BIN(x, bits) (bitset<bits>(x).to_string())
#define vi vector<int>
#define pb push_back
#define pob pop_back
#define ll long long int
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define test cout << "THIS POSITION IS OK" << endl
#define sp cout << " "
#define eps 1e-10
#define sz(x) x.size()
#define gcd __gcd
#define vec2d(ve, r, c) vector<vector<int>> ve(r, vector<int>(c, 0))
#define dsort(x) sort(x.begin(), x.end(), greater<int>())
#define maxx INT_MAX
#define inttos(x) std::to_string(x)
#define stoint(s) std::stoi(s)

void solve()
{
    int n;
    cin >> n;

    vi v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (v[n - 2] > v[n - 1])
    {
        cout << -1 << endl;
        return;
    }

    if (v[n - 1] < 0)
    {
        if (is_sorted(all(v)))
            cout << 0 << endl;
        else
            cout << -1 << endl;

        return;
    }

    cout << n - 2 << endl;

    for (int i = n - 3; i >= 0; i--)
    {
        cout << i + 1 << " " << n - 1 << " " << n << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {

        solve();
       
    }

    return 0;
}