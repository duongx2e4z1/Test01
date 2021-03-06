#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e5 + 10;

long long Mul(int a, int n, int m)
{
    if (n == 0)
        return 1;
    int t = Mul(a, n/2, m);
    if (n % 2 == 0)
        return t * t % m;
    else
        return (t * t % m) * a % m;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long a, n, m;
    cin >> a >> n >> m;
    cout << Mul(a, n, m);
}
