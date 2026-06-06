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
    vi v(n), v1(n);
    ll sum1 = 0, sum2 = 0;
    for (auto i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (auto i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (auto i = 0; i < n; i++)
    {
        if (v[i] > v1[i])
            swap(v[i], v1[i]);
        sum1 += v1[i];
        sum2 = max(sum2, (ll)v[i]);
    }
    cout<<sum1+sum2;
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    solve();

    return 0;
}