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

        ll p = 0, n = 0;
        ll sum = 0;
        ll pro = 1;

        for ( int i = 0 ; i < size ; i++ ) {

            int a;
            cin >> a;

            if ( a == -1 ) n++;
            else p++;
        }
        if(p>=n){
            if(n%2==0){
                cout<<0<<endl;
            }
            else cout<<1<<endl;
        }
        else{
            int x = n- (size/2);
            if ( (n-x) % 2 == 0 ){
                cout<<x<<endl;
            }
            else
                cout<<x+1<<endl;
        }
    }
    return 0;
}
