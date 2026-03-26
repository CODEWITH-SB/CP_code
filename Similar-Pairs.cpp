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

    int n, e = 0, o = 0, ok = 0;
    cin >> n;
    vi v(n);
    for (auto i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    for (auto i = 0; i < n; i++)
    {
        if ( i > 0&&v[i] - v[i - 1] == 1 )
        {
            ok = 1;
            if (i == 1)
            {
                o = 0;
                e = 0;
            }
        }
        else if (v[i] % 2)
            o++;
        else
            e++;
    }
    if (o % 2 && ok==0)
        no;
    else
        yes;
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
        // cout << "\n";
    }

    return 0;
}