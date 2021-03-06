#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e5 + 10;



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, a[maxN], x;
    cin >> n >> x;
    for (int i=0; i<n; ++i)
        cin >> a[i];
    a[n] = INT_MAX;
    int low = 0;
    int hig = n - 1;
    while (low <= hig)
    {
        int mid = (low + hig) / 2;
        if (a[mid] < x)
            low = mid + 1;
        else
            hig = mid - 1;
    }
    if (a[low] == x)
        cout << "YES";
    else
        cout << "NO";
}
