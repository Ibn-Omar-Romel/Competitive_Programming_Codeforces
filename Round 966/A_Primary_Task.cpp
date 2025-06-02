#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
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

        string s = to_string(n);

        if ( s.size() < 3) {
            no;
        }
        else if ( s[0] == '1' and s[1] == '0') {
            int a = s[2] - '0';

            if ( s.size() == 3 ){
                if ( a >= 2 )   
                    yes;
                else 
                    no;
            }
            else {
                if ( a != 0 )
                    yes;
                else    
                    no;
            }
        }
        else {
            no;
        } 
    }
    return 0;
}