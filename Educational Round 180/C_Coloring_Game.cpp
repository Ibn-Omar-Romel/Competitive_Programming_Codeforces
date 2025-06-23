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
    vector<int>vec(n);
    fr(0,n)
        cin >> vec[i];

    vsort;

    int ma = vec[n-1], mi = vec[0];
    int ways = 0;

    for (int i = 2; i < n; i++) {

       int value2;
       if (i == n-1) {
            value2 = mi;
       }
       else {
            value2 = ma;
       }

       int value = max(2 * vec[i], value2) - vec[i];

       int left = 0, right =  i - 1;
       while(left <= right) {

            int sum = vec[left] + vec[right];
            if (sum > value) {

                ways += (right - left);
                right--;
            } 
            else {
                left++;
            }
        }

    }
    cout << ways<< endl;

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
