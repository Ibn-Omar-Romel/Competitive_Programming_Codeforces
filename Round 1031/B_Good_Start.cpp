#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 

void solve() {

    int w, h, a, b;
    cin >> w >> h >> a >> b;

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;


    int value1 = abs(x1-x2), value2 = abs(y1-y2); // new
    
    if(value1 % a == 0 and value2 % b == 0)
        yes;
    else if (value1 % a == 0 and value1 != 0)
        yes;
    else if (value2 % b == 0 and value2 != 0)
        yes;
    else
        no;
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
