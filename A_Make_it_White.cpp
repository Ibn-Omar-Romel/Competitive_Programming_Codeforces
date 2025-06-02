#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int n;
        cin >> n;

        string s;
        cin >> s;

        int flag = 0;
        int st = 0 , ed = 0;

        for ( int i = 0 ; i < n ; i++ ) {

            if ( s[i] == 'B' and flag == 0 ) {
                st = i;
                flag = 1;
            }
            else if ( s[i] == 'B' ) {
                ed = i;
            }
        }
        
        if ( ed == 0 ) cout << 1 << endl;
        else cout << ed - st + 1 << endl;
    }

    return 0;
}
