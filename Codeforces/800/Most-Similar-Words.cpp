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

    int n, m;
    int mn = INT_MAX;
    cin >> n >> m;
    vector<string> s(n);
    for (auto i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (auto i = 0; i < n; i++)
    {
        for (auto j = i + 1; j < n; j++)
        {
            int dif = 0;
            for (auto k = 0; k < m; k++)
            {
                
                dif += abs((s[i][k] - 'a') - (s[j][k] - 'a'));
            }
            mn = min(mn, dif);
        }
    }
    cout << mn;
   
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