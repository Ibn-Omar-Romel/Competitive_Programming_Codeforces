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

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    
    vector<pair<int,int>>vec(2*n);
    for (int i = 0; i < 2*n; i += 2) {
        cin >> vec[i].first;
        vec[i].second = i;
        cin >> vec[i + 1].first;
        vec[i + 1].second = i + 1;
    }

    sort(vec.begin(), vec.end());

    bool flag = true;
    for (int i = 0; i < 2*n; i += 2){
        if (vec[i].first != vec[i+1].first) {
            flag = false;
            break;
        }
    }

    if (flag) {
        for (int i = 0; i < 2*n; i += 2) {
            cout << vec[i].second+1 << " " << vec[i+1].second+1 << endl;
        }
    }
    else {
        cout << -1 << endl;
    }

    return 0;
}
