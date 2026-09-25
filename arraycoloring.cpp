#include <iostream>
using namespace std;
void solve(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            count1 = count1 + a[i];
        }
        else
        {
            count2 = count2 + a[i];
        }
    }

    if ((count1 % 2 == 0 && count2 % 2 == 0) || (count1 % 2 != 0 && count2 % 2 != 0))

    {
        cout << "YES" << endl;
        return;
    }
    else if (count1 == 1 && count2 == 1)
    {
        cout << "NO" << endl;
    }

    cout << "NO" << endl;
}

int main()
{
    int t;

    if (cin >> t)
    {

        while (t--)
        {

            int n;
            cin >> n;
            int a[n];

            solve(a, n);
        }
    }
    return 0;
}