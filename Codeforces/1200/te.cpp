#include <bits/stdc++.h>
using namespace std;

#define DEC2BIN(x, bits) (bitset<bits>(x).to_string())
#define vi vector<int>
#define vt(type) vector<type>
#define pb push_back
#define pob pop_back
#define ll long long int
#define all(x) x.begin(), x.end()
#define dsort(x) sort((x).rbegin(), (x).rend())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define test cout << "THIS POSITION IS OK" << endl
#define sp cout << " "
#define eps 1e-10
#define sz(x) x.size()
#define gcd __gcd
#define vec2d(ve, r, c) vector<vector<int>> ve(r, vector<int>(c, 0))
#define maxx INT_MAX
#define mann INT_MIN
#define inttos(x) std::to_string(x)
#define stoint(s) std::stoi(s)
#define teni(x) (int)(1e##x)
#define tenll(x) (1LL * (1e##x))
auto cmd = [](const auto &a, const auto &b)
{
    // double index (pair / map style)
    // if (a.first == b.first)
    //     return a.second > b.second;
    // return a.first < b.first;

    // single index version:
    return a > b;
};

void solve()
{

    int n;
    cin >> n;
   vi v(n);
   for (auto i = 0; i < n; i++)
   {
       cin >>v[i];
   }
   sort(all(v),cmd);
   for (auto &p : v)
   {
       cout << p;
       sp;
   }
   bainaryser
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