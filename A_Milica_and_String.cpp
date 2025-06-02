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

        int size, n;
        cin >> size >> n;

        string s;
        cin >> s;

        int cnt = count ( s.begin(), s.end(), 'B');
        
        if ( n == cnt ) cout << 0 << endl;
        else if ( n > cnt ) {

            int ans = 0 ;
            for ( int i = 0 ; i < size ; i++ ) {
                ans++;
                if ( s[i] == 'A' ) {
                    cnt++;
                }
                if ( cnt == n ) break;
            }
            cout << 1 << endl;
            cout << ans << " " << "B" << endl;
        }
        else {
            
            int ans = 0 ;
            for ( int i = 0 ; i < size ; i++ ) {
                ans++;
                if ( s[i] == 'B' ) {
                    cnt--;
                }
                if ( cnt == n ) break;
            }
            cout << 1 << endl;
            cout << ans << " A\n";
        }
    }

    return 0;
}
