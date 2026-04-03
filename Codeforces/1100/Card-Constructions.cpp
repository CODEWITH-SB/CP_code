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

    string s;
    cin >> s;
    int ok = 0, c = 0, ans = 0, in;
    for (auto i = 0; i < sz(s); i++)
    {
        if (s[i] == '1')
            ok = 1;
        if (i == 0 && s[i] == '1' && s[i] == s[sz(s) - 1])
        {

            c++;
            continue;
        }

        if (s[i - 1] == '1' && s[i] == s[i - 1])
        {
            c++;
            ans = max(c, ans);
        }

        else
        {
            ans = max(c, ans);
            c = 0;
        }
    }

    if (ok)
        ans++;

    // cout << ans << endl;
    if (ans == sz(s))
        cout << ans;
    else if (ans % 2)
    {
        if (ans == 1)
            ans = 2;
        ll i = (ans +1/ 2) * (ans+1f / 2);
        cout << i;
    }
    else
    {
        
        ll i = (ans / 2) * (ans + 2) / 2;
        cout << i;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}