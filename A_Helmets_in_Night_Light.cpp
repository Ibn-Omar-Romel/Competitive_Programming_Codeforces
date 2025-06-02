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

        int n, p;
        cin >> n >> p;

        vector<pair<int, int>> vec;

        vector<int> v1(n);

        for (int i = 0; i < n; i++)
            cin >> v1[i];

        int a;

        for (int i = 0; i < n; i++)
        {
            cin >> a;
            vec.push_back(make_pair(min(a, p), v1[i]));
        }

        sort(vec.begin(), vec.end());

        int np = n - 1; // he needs to give new to at least one person.
        ll cost = p;    // cost for that one person.

        for (int i = 0; i < vec.size(); i++)
        {

            cost += (ll)min(vec[i].second, np) * vec[i].first; // between number of person this neighbour can send news or the number of messages need to send.

            np -= min(vec[i].second, np); // after sending messages , number of messages left.

            if (np == 0)
                break;
        }

        cout << cost << endl;
    }
    return 0;
}
