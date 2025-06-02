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

    int size;
    cin >> size;
    string s;
    cin >> s;

    int flag = 0;
    for (int i = 0 ; i < s.size()-1 ; i++ ) {

        if ( s[i] - 'a' > s[i+1] - 'a' ) {
            yes;
            cout << i+1 << " " << i+2 << endl;
            flag = 1;
            break;
        }
    }
    if( flag == 0 ) no;
    
    return 0;
}
