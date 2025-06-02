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
        
        int n, k;
        cin >> n >> k;

        map<int,int>mp;
        while(k--) {
            int a, b;
            cin >> a >> b;

            if (mp.find(a) != mp.end()) {
                mp[a] += b;
            }
            else{
                mp[a] = b;
            }
        }

        vector<int>vec;
        for (auto it : mp) {
            vec.push_back(it.second);
        }

        sort(vec.begin(), vec.end());
        ll total = 0;
        for (int i = vec.size()-1 ; i >= 0; i--) {
            if (n > 0) {
                total += vec[i];
                n--;
            }
            if (n == 0)
                break;
        }
        cout << total << endl;
        
    }
    return 0;
}
