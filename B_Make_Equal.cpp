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

        int size;
        cin >> size;

        vector<int> vec(size);

        ll sum = 0;
        for (int i = 0; i < size; i++)
        {

            cin >> vec[i];
            sum += vec[i];
        }

        sum /= size;
        int flag = 1;
        ll extra = 0;

        for (int i = 0; i < size; i++)
        {

            if (vec[i] > sum)
                extra += (vec[i] - sum);

            else if (vec[i] < sum)
            {

                if (extra < (sum - vec[i]))
                {
                    flag = 0;
                    break;
                }
                else
                {
                    extra = extra - (sum - vec[i]);
                }
            }
        }

        flag ? yes : no;
    }
    return 0;
}
