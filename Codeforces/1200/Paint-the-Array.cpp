#include <bits/stdc++.h>
using namespace std;

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

void solve()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    vector<char> ss;

    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
        if (mp[s[i]] == 1)
            ss.push_back(s[i]);
    }
    int mn = INT_MAX;
    for (auto i = 0; i < sz(ss); i++)
    {
        int l = 0, r = n - 1, c = 0;
        while (l < r)
        {
            if (s[l] == ss[i] && s[l] != s[r])
            {
                
                    r--;
                c++;
            }

            else if (s[r] == ss[i] && s[l] != s[r])
            {
                l++;
                c++;
            }

            else if (s[l] != s[r])
            {
                break;
                c = maxx;
            }

            else
            {
                l++;
                r--;
            }
        }
        mn = min(c, mn);
    }
    cout << mn << endl;
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