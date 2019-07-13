#include <bits/stdc++.h>

using namespace std;

int solve(vector<long long> a)
{
    int cnt = 0;
    long long sum = 0;
    for (int i = 0; i < a.size() - 1; i++)
    {
        if(sum + a[i] < a[i + 1])
        {
            cnt++;
            sum += a[i];
        }
    }
    return cnt + 1;
}

int main()
{
    //freopen("in.txt","r",stdin);
    int t, n;
    vector<long long> a;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        cin >> n;
        a.clear();
        a.resize(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << solve(a) << endl;
    }
    return 0;
}
