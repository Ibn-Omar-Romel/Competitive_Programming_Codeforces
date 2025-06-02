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
    
    for (int i = 0; i < n; i++) {
      cin >> vec[i];
      
    }
    int mn = 1, mx = n;
    int i = 0, j = n-1;

    bool flag = false;
    while(i < j) {

        if (vec[i] != mn and vec[i] != mx and vec[j] != mn and vec[j] != mx) {
            flag = true;
            break;
        }
        else if (vec[i] == mn) {
            i++;
            mn++;
        }
        else if (vec[i] == mx) {
            i++;
            mx--;
        }
        else if (vec[j] == mn) {
            mn++;
            j--;
        }
        else if (vec[j] == mx) {
            mx--;
            j--;
        }
    } 

    if (!flag) {
        cout << -1 << endl;
    }
    else {
        cout << i+1 << " " << j+1 << endl;
    }


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
