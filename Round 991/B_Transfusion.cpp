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


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {
        
        int n;
        cin >> n;
        
        vector<int>vec(n);
        ll s = 0;
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
            s += vec[i];
        }

        if (s % n != 0) {
            no;
        }
        else {

            s /= n;

            for (int i = 1; i < n-1; i++) {
                if (vec[i-1] > s) {
                    ll value = vec[i-1] - s;
                    vec[i-1] = s;
                    vec[i+1] += value;
                }
                else if (vec[i-1] < s) {
                    ll value = s-vec[i-1];
                    vec[i-1] = s;
                    vec[i+1] -= value;
                }
            }
            
            bool flag = true;
            for (int i = 0; i < n-1; i++) {
                if (vec[i] != vec[i+1]) {
                    flag = false;
                    break;
                } 
            }
            flag ? yes : no;
        }
    }
    return 0;
}
