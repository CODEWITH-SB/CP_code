#include <bits/stdc++.h>
#include<iostream>
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
        string s;
        cin >> s;
        int sum = 0, c = 0;
        sort(s.begin() + 1, s.end(), greater<char>());
        for (auto i = 0; i < sz(s); i++)
            sum += s[i] - '0';
        int sum1 = sum;
        for (auto i = 1; i < sz(s); i++)
        {
            if (sum < 10)
                break;
            sum -= s[i] - '0';
            c++;
        }
        int ans = c;
        c = 0;
        for (auto i = 0; i < sz(s); i++)
        {

            if (sum1 < 10)
                break;
            if (i == 0)
            {
                sum1 -= s[i] - '0';
                sum1++;
            }
            else
                sum1 -= s[i] - '0';
            c++;
        }

        c = min(c, ans);
        cout << c << "\n";
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
