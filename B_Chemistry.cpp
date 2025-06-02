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
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int n , k;
        cin >> n >> k;

        string s;
        cin >> s;

        // int arra[26] = {0};

        // for ( int i = 0 ; i < n ; i++ ) {

        //     arra[ s[i] - 'a' ]++;
        // }

        // int dif = n - k;
        // int temp = dif;

        // int count = 0;

        // for ( int i = 0 ; i < 26 ; i++ ) {

        //     if ( arra[i] % 2 != 0 ) count++;
        // }

        map < char, int > mp;
        
        for ( int i = 0 ; i < n ; i++ ) {

            mp[s[i]]++;
        }

        int count = 0;
        for ( auto &it : mp ) {

            if ( it.second % 2 != 0 ) count++;  
        }

        if ( count > k + 1 ) no;
        else yes;  
    }
    return 0;
}
