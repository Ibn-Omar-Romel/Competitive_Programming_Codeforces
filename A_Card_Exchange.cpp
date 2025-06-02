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

        int n, k;
        cin >> n >> k;

        map<int,int>mp;
        for ( int i = 0 ; i < n ; i++ ) {
            int x;
            cin >> x;
            mp[x]++;
        }

        bool flag = false;
        for (auto it : mp) {

            if ( it.second >= k ) {
                flag = true;
                break;
            }
        }

        if ( k > n or flag == false )
            cout << n << endl;
        else {        
            cout << k-1 << endl; 
        }
        
    }
    return 0;
}
