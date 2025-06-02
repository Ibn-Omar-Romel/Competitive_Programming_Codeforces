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

        int size;
        cin >> size;

        map<char,int>mp;

        int a;
        char ch = 'a';
        string s = "";
        for ( int i = 0 ; i < size ; i++ ) {

            cin >> a;

            if ( a == 0 ){
                s += ch;
                mp[ch]++;
                ch++;
            }
            else{
                for( auto &it : mp ) {

                    if ( it.second == a ){
                        s += it.first;
                        it.second++;
                        break;
                    }
                }
            }
        }
        cout << s << endl;
        
    }
    return 0;
}
