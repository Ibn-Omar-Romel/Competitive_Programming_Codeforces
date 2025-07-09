#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "yes\n"
#define no cout << "no\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 


void solve() {

    int n;
    cin >> n;

    vector<int>vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int start = -1, end = -1;
    for (int i = 0; i < n-1; i++) {

        if (vec[i] > vec[i+1]) {
            start = i;
            while(i < n-1 and vec[i] > vec[i+1]) {
                i++;
            }
            end = i;
            break;
        }
    }

    if (start == -1 and end == -1) {
        yes;
        cout << 1 << " " << 1 << endl;
    }
    else {
        reverse(vec.begin()+start, vec.begin()+end+1);
        if (is_sorted(vec.begin(), vec.end())) {
            yes;
            cout << start+1 << " " << end+1 << endl;
        }
        else {
            no;
        }
    }
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //int t;
    //cin >> t;

    //while( t-- ) {
        solve();
    //}
    return 0;
}
