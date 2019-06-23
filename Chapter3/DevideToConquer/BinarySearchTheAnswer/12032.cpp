#include <bits/stdc++.h>

using namespace std;

bool check(vector<int> a, int jump)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > jump)
            return false;
        if (a[i] == jump)
            jump--;
    }
    return true;
}

int main()
{
    //freopen("in.txt","r",stdin);
    int t, n;
    vector<int> a;
    vector<int> sub;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        cout << "Case " << k + 1 << ": ";
        a.clear(), sub.clear();
        cin >> n;
        a.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sub.resize(n);
        sub[0] = a[0];
        for (int i = 1; i < n; i++)
            sub[i] = a[i] - a[i - 1];
        int l = 0, r = a[n - 1];
        int res;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if(check(sub, mid))
            {
                res = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        cout << res << endl;
    }
    return 0;
}