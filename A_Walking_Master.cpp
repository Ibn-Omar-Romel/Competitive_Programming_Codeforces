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

        int x1,y1,x2,y2;
        cin >> x1 >> y1 >>  x2 >> y2;

        if ( x1 == x2 and y1 == y2 ) cout << 0 << endl;
        else if ( y1 > y2 ) cout << -1 << endl;
        else {

            int count = 0;

            count = (y2-y1);

            if ( x1+count < x2 ) cout << -1 << endl;
            else {
                count += (x1+count) - x2;
                cout << count << endl;
            }
                
        }
    }
    return 0;
}
