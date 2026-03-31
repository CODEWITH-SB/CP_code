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

    int in = 0;
    for (auto i = 1; i < sz(s) - 1; i++)
    {
        if (s[i] == 'a')
        {
            in = i;
            break;
        }
    }

    if (in)
    {
        cout << s.substr(0, in) << " " << 'a' << " " << s.substr(in + 1);
    }
    else
    {
        cout << s[0] << " " << s.substr(1, sz(s) - 2) << " " << s[sz(s) - 1];
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}
