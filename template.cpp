#include <bits/stdc++.h>
using namespace std;

typedef long long int INT;

#define VERY_HUGE_NUMBER 1000000000

void fix_the_problem()
{
    INT n;
    cin >> n;
    INT a[n+1];
    a[0] = 0;
    for (INT i=1;i<=n;i++)
    {
        cin >> a[i];
    }
}

int main (void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    INT testcases;
    cin >> testcases;
    for (INT z=1;z<=testcases;z++)
    {
        fix_the_problem();
        // ... //
        cout<<'\n';
    }
    return 0;
}