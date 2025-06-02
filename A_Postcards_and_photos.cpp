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

    string s;
    cin >> s;
    s = s + "D";
    int t = 0, count = 0;

    for ( int i = 0; i < s.length() - 1 ; i++ ) {

        if ( s[i] == s[i+1] ) {
            count++;
            if ( count == 5 ) {
                t++;
                count = 0;
            }
        }
        else{
            t++;
            count = 0;
        } 
    }
    cout << t << endl;

    return 0;
}
