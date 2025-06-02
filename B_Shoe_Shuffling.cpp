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

        int n;
        cin >> n;

        vector<int>vec(n);
        map<int,int>mp;

        for ( int i = 0 ; i < n ; i++ ) {
            cin >> vec[i];
            mp[vec[i]]++;
        }


        // if ( count(vec.begin(), vec.end(), vec[0]) == n ) {


        // }
        if ( n % 2 != 0  ) {

            int flag = 0;
            for( auto it : mp ) {
                
                if ( it.second == 1 ) {
                    flag = 1;
                    break;
                }      
            }
            if ( flag == 1 )
                cout << -1 << endl;
            

            cout << n << " ";
            for ( int i = 1 ; i < n ; i++ ){
                cout << i << " ";
            }
            nl;
        }




        else {
            
            int flag = 0;
            for( auto it : mp ) {
                
                if ( it.second % 2 != 0 ) {
                    flag = 1;
                    break;
                }      
            }
            if ( flag == 1 )
                cout << -1 << endl;
            else {
                
                for ( int i = 1 ; i <= n ; i+=2 ) {
                    
                    cout << i+1 << " " << i << " ";
                }
                nl;
            }
        }
        else {
            cout << -1 << endl;
        }
    }
    return 0;
}
