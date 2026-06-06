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
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    int ok = 0;
    string mex = "";
    for (auto i = 97; i < 123; i++)
    {
        char ch = (char)i;
        if (!mp[ch])
        {

            mex = ch;
            ok=1;
            break;
        }
    }
    for (auto i = 'a'; i <= 'z'; i++)
    {
        for (auto j = 'a'; j <= 'z'; j++)
        {
            string temp;
            temp.pb(i);
            temp.pb(j);
            if (!ok&&mex == "" && s.find(temp) == string::npos)
            {
                mex = temp;
                ok=1;
                break;
            }
        }
    }
    for (auto i = 'a'; i <= 'z'; i++)
    {
        for (auto k = 'a'; k <= 'z'; k++)
        {
            for (auto j = 'a'; j <= 'z'; j++)
            {
                string temp;
                temp.pb(i);
                temp.pb(k);
                temp.pb(j);
                if (!ok&&mex == "" && s.find(temp) == string::npos)
                {
                    mex = temp;
                    ok=1;
                    break;
                }
            }
        }
    }
    cout << mex << endl;
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