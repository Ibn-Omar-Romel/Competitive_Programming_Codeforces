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

    int t;
    cin >> t;

    while( t-- ) {
        
        int size;
        cin >> size;
        string s;
        cin >> s;

        int count = 0;

        for ( int i = 0 ; i < size - 2 ;) {

            if ( (s[i] == 'm' and s[i+1] == 'a' and s[i+2] == 'p') or (s[i] == 'p' and s[i+1] == 'i' and s[i+2] == 'e') ){

                // cout << i << endl;
                count++;
                i += 3;
            }
            else i++;
        }

        cout << count << endl;
        
    }
    return 0;
}
