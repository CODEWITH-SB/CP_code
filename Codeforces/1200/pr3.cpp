#include <bits/stdc++.h>
using namespace std;

#define DEC2BIN(x, bits) (bitset<bits>(x).to_string())
#define vi vector<int>
#define vt(type) vector<type>
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
#define mann INT_MIN
#define inttos(x) std::to_string(x)
#define stoint(s) std::stoi(s)
#define teni(x) (int)(1e##x)
#define tenll(x) (1LL * (1e##x))

void solve()
{
    int n;
    cin >> n;

    vector<pair<int,int>> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }

    int c = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            long long prod = 1LL * v[i].first * v[j].first;

            if(prod > 2 * n) break;

            if(prod == v[i].second + v[j].second)
                c++;
        }
    }

    cout << c;
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