#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort(vec.begin(), vec.end())
#define asort sort(arra, arra + size)
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for (int i = a; i < b; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, f, k;
        cin >> n >> f >> k;

        
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        int value = vec[f - 1];

        sort(vec.begin(), vec.end(), greater<int>());

        bool flag = false;
        for (int i = 0; i < k; i++)
        {
            if (vec[i] == value)
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                if (vec[i] == value)
                {
                    count++;
                }
            }
            if (count >= 2)
            {
                cout << "MAYBE" << endl;
            }
            else
            {
                yes;
            }
        }
        else
        {
            no;
        }
    }
    return 0;
}
