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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        char y;
        int t = 0, m = 0, ok = 0;
        cin >> s;

        for (auto i = 0; i < sz(s); i++)
        {

            if (s[i] == 'T')
                t++;
            else
                m++;
        }
        if (t == (m * 2))
        {

            int f_c = 0, s_c = 0;
            for (auto i = 0; i < n; i++)
            {
                if (s[i] == 'M')
                    s_c++;
                else
                    f_c++;
                if (s_c > f_c)
                {
                    ok = 1;
                    break;
                }
            }
            f_c=0;
            s_c=0;
            for (auto i = n - 1; i >= 0; i--)
            {
                if (s[i] == 'M')
                    s_c++;
                else
                    f_c++;
                if (s_c > f_c)
                {
                    ok = 1;
                    break;
                }
            }
        }
        else
            ok = 1;
        if (ok)
            no;
        else
            yes;
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

    solve();

    return 0;
}