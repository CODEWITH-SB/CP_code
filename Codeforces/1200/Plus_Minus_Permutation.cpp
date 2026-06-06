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

    ll n, x, y;
    cin >> n >> x >> y;
    if (x == y)
        cout << 0;
    else
    {
        ll fr = 0, se = 0;
        ll r = x * y;
     
        fr=n/lcm(x,y);
       
        se = fr;
        fr = (n / x) - fr;
        se = (n / y) - se;
        fr = ((n * (n + 1)) / 2) - (((n - fr) * ((n - fr) + 1)) / 2);
        se = ((se * (se + 1)) / 2);
        cout << fr - se;
    }
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