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

        string s;
        cin >> s;

        // string st = "";
        // st = st + s[0];
        // st = st + s[1];

        // int hr = stoi(st);

        // string last = " AM";

        // if ( s[0] == '0' and s[1] == '0') {

        //     cout << "12" << s[2] << s[3] << s[4] << " AM" << endl;
        // }

        // else if ( hr >= 12 )  {

        //     last = " PM";
        //     if ( hr > 12 ) {

        //         hr =  hr - 12;
        //         if ( hr <= 9 ) {

        //             cout << "0" << hr << s[2] << s[3] << s[4] << last << endl;
        //         }
        //     } 

            
        //     else{
        //         cout << hr << s[2] << s[3] << s[4] << last << endl;
        //     }
        // }
        // else {
            
        //     cout << s << " AM"  << endl;
        // }

        int hr = stoi(s.substr(0, 2)); 

        string last = " AM";
        if (hr >= 12) {
            last = " PM";
            if (hr > 12) {
                hr -= 12;
            }
        }
        if (hr == 0) {
            hr = 12; 
        }
        if ( hr < 10 ) cout << "0"; 
        cout << hr << s.substr(2) << last << endl;
        
    }
    return 0;
}
