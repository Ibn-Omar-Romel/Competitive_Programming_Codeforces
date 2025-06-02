#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "Yes\n"
#define no cout << "No\n"

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

        int size;
        cin >> size;

        int a;
        map < int , int > mp;

        for ( int i = 0 ; i < size ; i++ ) {

            cin >> a;
            mp[a]++;
        }
        // cout << mp.size() << endl;

        if ( mp.size() == 1 ) yes;
        else if ( mp.size() == 2 ) {

            auto it = mp.begin();

            int a = it->second;
            
            it++;

            int b = it->second;
            


            if ( a == b or abs(a-b) == 1 ) yes;
            else no;
        }
        else no;
        
    }
    return 0;
}
