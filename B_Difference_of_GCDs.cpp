#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl;



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;
    
    while (t--) {

        int n , l , r;
        cin >> n >> l >> r;

        vector <int> vec;

        int flag = 0;

        for ( int i = 1 ; i <= n ; i++ ) {

            int lower = ceil ( (double ) l / (double) i );
            int higher = floor ( ( double) r / (double) i);

            if ( lower * i > r ) {
                flag = 1;
                break;
            }
            else vec.push_back(lower * i);    
        }

        if ( flag >= 1 ) no;
        else {
            yes;
            for ( int i = 0 ; i < vec.size() ; i++ ) {

                cout << vec[i] << " ";
            }
            nl;
        }
        
    }
    return 0;
}
