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

        string s;
        cin >> s;

        map<char,int>mp;

        for ( int i = 0 ; i < size ; i++ ) {

            mp[s[i]]++;
        }

        char arra[mp.size()];

        int i = 0;
        for ( auto& it : mp ) {

            arra[i] = it.first;
            i++;
        }

        string st = "";
        int n = mp.size();

        for ( int i = 0 ; i < size ; i++ ) {

            auto it = find(arra, arra + size, s[i]);
            int index = it - arra;
            
            cout << arra[n - index-1];

        }
        cout << endl;

        // write an if else condition   

    }
    return 0;
}

