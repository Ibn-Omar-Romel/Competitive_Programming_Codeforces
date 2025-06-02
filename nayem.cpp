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

        int n, q;
        cin >> n >> q;

        int arra[n];
        for( int i = 0 ; i < n ; i++ ) {
            arra[0] = -1;
        }

        int count = 0;
        while(q--){
            
            string s;
            cin >> s;

            if ( s[1] == '>' ) {

                if ( arra[s[0]-'A'] == -1 )
                    arra[s[0]-'A'] += 2;
                else
                    arra[s[0]-'A']++;
                
                if ( arra[s[2]-'A'] == -1 ) {
                    arra[s[2]-'A'] = 0; 
                }
            }
            else if ( s[1] == '<' ) {

                if ( arra[s[2]-'A'] == -1 )
                    arra[s[2]-'A'] += 2;
                else
                    arra[s[2]-'A']++;
                
                if ( arra[s[0]-'A'] == -1 ) {
                    arra[s[0]-'A'] = 0; 
                }
            }

            
        }
    }

    return 0;
}




