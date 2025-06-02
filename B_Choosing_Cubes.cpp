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

        int n , f , k;
        cin >> n >> f >> k;

        map<int,int>mp;
        vector <int>vec(n);
        for ( int i = 0 ; i < n ; i++ ) {
            cin >> vec[i];
            mp[vec[i]]++;
        }

        int value = vec[f-1];

        sort( vec.begin(), vec.end(), greater<int>());

        int flag = 0;
        for ( int i = 0 ; i < k ; i++ ) {
            if ( vec[i] == value ) {
                flag = 1;
                break;
            }
        }

        int flag1 = 0;
        for ( int i = k ; i < n ; i++ ) {
            if ( vec[i] == value ) {
                flag1 = 1;
                break;
            }
        }




        
        if ( flag == 1 and flag1 == 1 ) {

            cout << "MAYBE" << endl;
        }
        else if ( flag1 == 1 and flag == 0 ) {
            no;
        }
        else   
            yes;
    }
    return 0;
}
