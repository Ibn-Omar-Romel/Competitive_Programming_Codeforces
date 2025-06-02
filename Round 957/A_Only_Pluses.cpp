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
        
        vector<int>vec(3);
        cin >>vec[0] >> vec[1] >> vec[2];

        sort( vec.begin(), vec.end());

        int count = 5;

        for (int i = 0; i < 5; i++) {

            if (vec[0] + 1 <= vec[1]) {
                vec[0]++;
            } 
            else if (vec[1] + 1 <= vec[2]) {
                vec[1]++;
            } 
            else {
                vec[2]++;
            }
        }

        cout << vec[0] * vec[1] * vec[2] << endl;

    }
    return 0;
}
