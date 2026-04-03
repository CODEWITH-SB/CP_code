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
    int n,c=0;
    cin >> n;
    vi v(n);
    vector<int> arr(n+2,0);
    for (auto i=0;i<n;i++)
        cin >> v[i];
    for (auto i=0;i<n;i++)
    {
        if(arr[i+1]==1)
            break;
        c++;
        arr[v[i]]=1;
    }
    cout << c;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}