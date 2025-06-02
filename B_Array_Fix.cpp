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

        vector<int>a(n);

        fr(0,n) cin >> a[i];

        vector<int>b;
        b.push_back(a[n-1]);

        for ( int i = n - 2 ; i >= 0 ; i-- ) {
            
            if(a[i] > b.back()) {

                b.push_back(a[i]%10);
                b.push_back(a[i]/10);
            }
            else {
                b.push_back(a[i]);
            }
        }

        cout << (is_sorted(b.rbegin(), b.rend())? "YES" : "NO") << endl;
    }
    return 0;
}
