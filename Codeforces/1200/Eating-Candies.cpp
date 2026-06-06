#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pb push_back
#define all(x) x.begin(), x.end()
#define dsort(x) sort(x.begin(), x.end(), greater<int>())

void solve()
{
    int n, k;
    cin >> n >> k;

    vi v(k);

    for (int i = 0; i < k; i++)
        cin >> v[i];

    sort(all(v));

    vi dif;

    for (int i = 0; i < k; i++)
    {
        if (i == 0)
            dif.pb(v[0] + n - v[k - 1] - 1);
        else
            dif.pb(v[i] - v[i - 1] - 1);
    }

    dsort(dif);

    int saved = 0;

    for (int i = 0; i < dif.size(); i++)
    {
        int rem = dif[i] - (4 * i);

        if (rem <= 0)
            continue;

        if (rem == 1)
            saved += 1;
        else
            saved += rem - 1;
    }

    cout << n - saved;
}

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