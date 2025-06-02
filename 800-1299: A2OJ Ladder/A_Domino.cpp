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

    int n;
    cin >> n;
    
    vector<pair<int,int>>vec(n);
    ll uppersum = 0, lowersum = 0;
    for (int i = 0; i < n; i++) {
        cin >> vec[i].first >> vec[i].second;
        uppersum += vec[i].first;
        lowersum += vec[i].second;
    }

    if (uppersum % 2 == 0 and lowersum % 2 == 0) {
        cout << 0 << endl;
    }
    else if (uppersum % 2 != 0 and lowersum % 2 != 0) {
        bool flag = false;
        for (int i = 0; i < n; i++) {
            int value = abs(vec[i].first - vec[i].second);
            if (value %  2 != 0) {
                flag = true;
                break;
            }
        }
        if (flag) {
            cout << 1 << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
    else {
        cout << -1 << endl;
    }



    return 0;
}
