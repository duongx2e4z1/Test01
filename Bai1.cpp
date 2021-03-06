#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e4 + 10;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    bool chkRow[maxN], chkCol[maxN], chkDiagonal1[maxN * 2], chkDiagonal2[maxN * 2];
    fill_n(chkRow, maxN, 0);
    fill_n(chkCol, maxN, 0);
    fill_n(chkDiagonal1, maxN * 2, 0);
    fill_n(chkDiagonal2, maxN * 2, 0);
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (chkRow[x] == 1)
        {
            cout << "yes";
            return 0;
        }
        else
            chkRow[x] = 1;

        if (chkCol[y] == 1)
        {
            cout << "yes";
            return 0;
        }
        else
            chkCol[y] = 1;

        if (chkDiagonal1[x - y + maxN] == 1)
        {
            cout << "yes";
            return 0;
        }
        else
            chkDiagonal1[x - y + maxN] = 1;


        if (chkDiagonal2[x + y] == 1)
        {
            cout << "yes";
            return 0;
        }
        else
            chkDiagonal2[x + y] = 1;
    }

    cout << "no";
}
