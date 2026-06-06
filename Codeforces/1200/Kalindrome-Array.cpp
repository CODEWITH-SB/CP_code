///////////////////////////////////////////////  HELLO  ///////////////////////////////////////////////
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
//////////////IMPORTANT COMAND->> primechek, primerangecheck, cmd, bsearch//////////////

void solve()
{

    int n;
    cin >> n;
    vi v(n);
    for (auto i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int l = 0, r = n - 1, x = -1, ok = 0;
    while (l < r)
    {
        if (v[l] == v[r])
        {
            l++;
            r--;
        }
        else if (v[l] != v[r] && x == -1)
        {
            x = v[r];
            r--;
        }
        else if (v[l] != v[r] && x == v[r])
        {
            r--;
        }
        else if (v[l] != v[r] && x == v[l])
        {
            l++;
        }
        else if (v[l] != v[r] && x != v[r])
        {
            ok = 1;
            break;
        }
    }
    int ok1 = 0; l = 0, r = n - 1,x=-1;
    while (l < r)
    {
        if (v[l] == v[r])
        {
            l++;
            r--;
        }
        else if (v[l] != v[r] && x == -1)
        {
            x = v[l];
            l++;
        }
        else if (v[l] != v[r] && x == v[l])
        {
            l++;
        }
        else if (v[l] != v[r] && x == v[r])
        {
            r--;
        }
        else if (v[l] != v[r] && x != v[l])
        {
            ok1 = 1;
            break;
        }
    }
    if (ok && ok1)
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
    }

    return 0;
}