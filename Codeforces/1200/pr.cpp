#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> s(n),v;

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            sum += s[i];
            if(s[i])
            v.push_back(i+1);
        }

        if (sum < k)
        {
            cout << -1 << endl;
            continue;
        }

        if (sum == k)
        {
            cout << 0 << endl;
            continue;
        }

        int l = 0;
        int f=0,ss=n-1;
        int mx =v.size()-1;

        for (int r = 0; r < n; r++)
        {
            if(v[l]<(n+1-v[r]))
            {
                f=v[l];
                sum--;
                l++;
            }
            else
            {
                ss=v[r];
                sum--;
                r--;
            }
            if(sum==k)
            break;
        }

       cout<<f+(n+1-ss);
    }

    return 0;
}