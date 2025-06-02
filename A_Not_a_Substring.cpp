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

        int n = s.size();

        string s1 = "";
        string s2 = "";

        for ( int i = 0 ; i < 2*n ; i++ ) {

            if ( i % 2 == 0 ) s1 += "(";
            else s1 += ")";
            
            if ( i < n ) s2 += "(";
            else s2 += ")";
        }

        if ( s1.find(s) == string::npos ) {
            yes;
            cout << s1 << endl;
        }
        else if ( s2.find(s) == string::npos ) {
            yes;
            cout << s2 << endl;
        }
        else{
            no;
        } 
    }
    return 0;
}
