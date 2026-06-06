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
    ll k, x;
    cin >> n >> k >> x;

    vt(ll) v(n);

    for (auto i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(all(v));

    vt(ll) an;
    int c = 1;

    for (auto i = 1; i < n; i++)
    {
        ll ans = v[i] - v[i - 1];

        if (ans > x)
        {
            an.pb((ans - 1) / x);
            c++;
        }
    }

    sort(all(an));

    for (auto i = 0; i < sz(an); i++)
    {
        if (k >= an[i])
        {
            k -= an[i];
            c--;
        }
        else
            break;
    }

    cout << c << endl;
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
       cout << "\n";
   }

    return 0;
}