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

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int l = 0, r = n - 1;

    int mn = 1, mx = n;

    while (l < r)
    {
        if (v[l] == mn)
        {
            mn++;
            l++;
        }
        else if (v[l] == mx)
        {
            mx--;
            l++;
        }
        else if (v[r] == mx)
        {
            mx--;
            r--;
        }
        else if (v[r] == mn)
        {
            mn++;
            r--;
        }
        else
            break;
    }

    if (l >= r)
        cout << -1<<endl;
    else
        cout << l + 1 << " " << r + 1 << '\n';
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