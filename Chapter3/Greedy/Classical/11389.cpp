#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int n, d, r;
    vector<int> day, eve;
    while (cin >> n >> d >> r && n && d && r)
    {
        long long sum = 0;
        day.clear(), eve.clear();
        day.resize(n), eve.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> day[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> eve[i];
        }
        sort(day.begin(), day.end(), greater<int>());
        sort(eve.begin(), eve.end(), less<int>());
        for (int i = 0; i < day.size(); i++)
        {
            if (day[i] + eve[i] > d)
                sum += (day[i] + eve[i] - d) * r;
        }
        cout << sum << endl;
    }
    return 0;
}
