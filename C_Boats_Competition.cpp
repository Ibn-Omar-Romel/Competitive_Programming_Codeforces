#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int n;
        cin >> n;

        map<int,int>mp;
        int range = 0;
        for (int i = 0 ; i < n ; i++) {
            int x;
            cin >> x;
            mp[x]++;
            range = max(range , x);
        }

        int teams = 0;
        for ( int i = 2; i <= (2*range); i++ ) {

            int total = 0;
            for( auto it : mp ) {

                int value = i - it.first;
                if( value >= 1 and mp.count(value) ) {
                    total += min( mp[value], it.second);
                }
            }
            teams = max(teams, total/2);
        }

        cout << teams << endl;

    }

    return 0;
}
