#include <bits/stdc++.h>

using namespace std;

vector<int> a;
int n, m;

bool canbe(long long size)
{
    long long container = 1, nowSize = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > size)
            return false;
        else if (a[i] + nowSize > size)
        {
            nowSize = a[i];
            container++;
        }
        else
        {
            nowSize += a[i];
        }
    }
    if (container > m)
        return false;
    else
        return true;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while (cin >> n >> m)
    {
        long long res = 0;
        a.clear();
        a.resize(n);
        long long l = 0, r = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            r += a[i];
        }
        while (l <= r)
        {
            long long mid = (l + r) / 2;
            if (canbe(mid))
            {
                res = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << res << endl;
    }
    return 0;
}
