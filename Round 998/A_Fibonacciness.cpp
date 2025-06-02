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

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int count = 1, maxCount = 1;

    int value = a + b;
    if (value + b == c) {
        count++;
    }
    maxCount = max(count, maxCount);

    if (value + c == d) {
        count++;
    }
    maxCount = max(count, maxCount);

    count = 1;
    value = c - b;
    if (value - b == a) {
        count++;
    }
    maxCount = max(count, maxCount);
    if (value + c == d) {
        count++;
    }
    maxCount = max(count, maxCount);


    count = 1;
    value = d - c;
    if (a + b == value)
        count++;
    maxCount = max(count, maxCount);

    if (value + b == c)
        count++;
    maxCount = max(count, maxCount);
    

    cout << maxCount << endl;


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
