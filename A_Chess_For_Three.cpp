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

        int a, b, c;
        cin >> a >> b >> c;

        if ( a == 0 and b == 0 ) {
            cout << -1 << endl;
        }
        else if ( a == b and b == c ) {

            if ( a == 0 )
                cout << 0 << endl;
            else 
                cout << -1 << endl;
        }
            
        else {
        
            int ans1 = 0 , ans2 = 0, ans3 = 0, ans4 = 0 ;

            //ans4:
            if ( a+b < c ) {
                ans4 = a+b;
            }


            //ans1;
            if ( a + b == c )
                ans1 = c;


            //ans3:
            if ( a + b > c ) {

                if ( b == c ) {
                    ans3 = b;
                }
                else {
                    ans3 += c;
                    ans3 += ( (a+b) - c ) / 2;
                } 
            }

            //ans2;
            ans2 += a;
            b -= a;
            ans2 += b;

            cout << max(ans1,max(ans2,max(ans3,ans4))) << endl;
        }
            
    }
    return 0;
}
