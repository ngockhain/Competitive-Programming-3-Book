#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> a;

double compute(double irr)
{
    double res = 0;
    for (int i = 0; i < a.size(); i++)
        res += a[i] / powl(1 + irr, i);
    return res;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    while (cin >> n && n)
    {
        n++;
        a.clear(), a.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        double l = -0.99,
               r = 1e4, mid, res;
        while (r - l >= 1e-6)
        {
            mid = (l + r) / 2;
            if (compute(mid) > 0)
            {
                l = mid;
            }
            else
                r = mid;
        }
        cout << setprecision(2) << fixed << mid << endl;
    }
    return 0;
}