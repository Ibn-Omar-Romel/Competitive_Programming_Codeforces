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

        string  s1, s2;
        cin >> s1 >> s2;

        int arra[26] = {0};

        for ( int i = 0 ; i < s2.size() ; i++ ) {
            arra[s2[i]-'A']++;
        }

        string s = "";

        for ( int i = s1.size() - 1 ; i >= 0 ; i-- ) {

            if( arra[s1[i] - 'A'] > 0 ) {

                s += s1[i];
                arra[s1[i] - 'A']--;
            }
        }

        reverse(s.begin(), s.end());

        if ( s == s2 ) yes;
        else no;   
    }
    return 0;
}
