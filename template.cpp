#include <bits/stdc++.h>
using namespace std;

typedef long long int INT;

#define VERY_HUGE_NUMBER 1000000000

INT minimum_of  (INT first_number, INT second_number)
{
    if  (first_number<second_number)
    {
        return first_number;
    }
    else
    {
        return second_number;
    }
}

INT maximum_of  (INT first_number, INT second_number)
{
    if  (first_number>second_number)
    {
        return first_number;
    }
    else
    {
        return second_number;
    }
}

INT highest_common_factor_of    (INT a, INT b)
{
    if  (b==0)
    {
        return a;
    }
    else
    {
        return highest_common_factor_of (b, a % b);
    }
}

INT least_common_multiple_of    (INT a, INT b)
{
    return (a*b) / highest_common_factor_of (a, b);
}




int main (void)
{
    INT testcases;
    cin >> testcases;
    for (INT z=1;z<=testcases;z++)
    {
        INT n;
        cin >> n;
        INT a[n+1];
        a[0] = 0;
        for (INT i=1;i<=n;i++)
        {
            cin >> a[i];
        }






        cout<<endl;
    }
    return 0;
}