// Refering to particular question ->  https://codeforces.com/contest/2094/problem/D

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t > 0)
    {
        string p, s;
        cin >> p >> s;
        int n = p.length(), m = s.length();
        int i = 0, j = 0, f = 1;
        while (i < n && j < m)
        {
            int a=p[i];
            int k = 0, c = 0;
            while (i < n && a == p[i])
            {
                k++;
                i++;
            }
            while (j < m && a== s[j])
            {
                c++;
                j++;
            }
            if (c < k || c > 2 * k)
            {
                f = 0;
                break;
            }
        }
        if (i < n || j < m)
        {
            f = 0;
        }
        if (f)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }
    return 0;
}
