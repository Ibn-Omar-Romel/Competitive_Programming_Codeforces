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

    int n;
    cin >> n;
    vector<int> vec(n);

    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int flag1 = 0, flag2 = 0;
    int times = 0;
    for (int i = 0; i < n; i++) {

        if (vec[i] != 0) {
            times++;
            while(vec[i] != 0 and i < n) {
                i++;
            }
            i--;
        }
        else {
            while(vec[i] == 0 and i < n) {
                i++;
            }
            i--;
        }
    }

    if (times > 2)
        cout << 2 << endl;
    else 
        cout << times << endl;
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
