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

    int n,k; 
    cin >> n >> k;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int value = vec[k-1];

    int height_MAX = *max_element(vec.begin(), vec.end());

    if (value == height_MAX) {
        yes;
        return;
    }

    vector<int> temp = vec;

    sort(temp.begin(), temp.end());

    temp.erase(unique(temp.begin(), temp.end()), temp.end());

    int position = lower_bound(temp.begin(), temp.end(), value) - temp.begin();



    for(int i = position; i+1 < temp.size(); i++) {

        if (temp[i+1] - temp[i] > value) {
            no;
            return;
        }
    }

    yes;
  
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
