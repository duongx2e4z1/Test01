#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e5 + 10;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    bool ngto[maxN];
    fill_n(ngto, maxN, 0);
    for (int i=2; i<=n; ++i)
        if (ngto[i] == 0)
        {
            cout << i << " ";
            for (long long j=i*i; j<=n; j+=i)
                ngto[j] = 1;
        }
}
