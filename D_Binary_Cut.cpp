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

        int count = 1;
        int flag = 0; 
        for ( int i = 0 ; i < s.size()-1 ; i++ ) {

            if ( s[i] == '0' and s[i+1] == '1' and flag == 0 )
                flag = 1;

            else if ( s[i] == '0' and s[i+1] == '1' and flag == 1 )
                count++;   
            else if ( s[i] == '1' and s[i+1] == '0' )
                count++;
        }
            
        cout << count << endl;  
    }
    return 0;
}
