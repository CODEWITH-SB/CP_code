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

    ll n, k;
    cin >> n >> k;
    vector<ll> v(n), ps(k), psum(n);
    ll mx = 0, ans = 0;
    for (auto i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mx = max(mx, x);
        v[i] = mx;
        ans += x;
        psum[i] = ans;
    }
    for (auto i = 0; i < k; i++)
    {
        cin >> ps[i];
    }
    ll an = 0;
   vector<ll> ant;
    for (auto i = 0; i < k; i++)
    {
        int l = 0, r = n - 1;
        ll ans = -1;

        while (l <= r)
        {
            int m = (l + r) / 2;

            if (v[m] <= ps[i])
            {
                ans = m;
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }

        ant.pb(ans);
    }
    for (auto i = 0; i < sz(ant); i++)
    {
        if(ant[i]==-1)
        cout<<0<<" ";
        else
        cout << psum[ant[i]] << " ";
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