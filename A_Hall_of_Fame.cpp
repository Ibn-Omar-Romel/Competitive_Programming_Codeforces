#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define vec vector
#define st string

#define yes cout << "YES\n"
#define no cout << "NO\n"

#define ain cin >> arra[i]
#define aout cout << arra[i]
#define vin cin >> vec[i]
#define vout cout << vec[i]


#define ccount cout << count << '\n'
#define cp count++


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
        
        int rl = 0 , lr = 0;

        for ( int i = 0 ; i < size - 1 ; i++ ) {

            if ( s[i] == 'R' and s[i+1] == 'L' ) {
                rl = 1;
                break;
            }
            else if ( s[i] == 'L' and s[i+1] == 'R' ) {
                lr = i+1;
                break;
            }
        } 

        if ( rl == 1 ) cout << 0 << endl;
        else if ( lr != 0 ) cout << lr << endl;
        else cout << -1 << endl;  
    }
    return 0;
}
