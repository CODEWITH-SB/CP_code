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
    map<int, int> v;
    vi vv;
    for (auto i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        v[x]++;
        if (v[x] == 1)
            vv.pb(x);
    }
    sort(all(vv));

    int c = 0, mx = 0;
    for (auto i = 1; i < sz(vv); i++)
    {
        if (vv[i] - vv[i - 1] > 1)
            c++;
    }

    for (auto x : vv)
        mx = max(mx, v[x]);
    cout << mx + c;
};
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
        cout << "\n";
    }

    return 0;
}