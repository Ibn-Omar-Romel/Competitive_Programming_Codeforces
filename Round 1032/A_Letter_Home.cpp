#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 


void solve() {

    int n, s;
    cin >> n >> s;

    vector<int>vec(n);
    fr(0,n)
        cin >> vec[i];

    sort(vec.begin(), vec.end());

    int a = vec[0];
    int b = vec[n - 1];

    int st = 0;
    if (s <= a) {
        st = b - s;
    } 
    
    else if (s >= b) {
        st = s - a;
    } 
    else {
        st = (b - a) + min(abs(s - a), abs(s - b));
    }

    cout << st << endl;
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {
        solve();
    }
    return 0;
}
