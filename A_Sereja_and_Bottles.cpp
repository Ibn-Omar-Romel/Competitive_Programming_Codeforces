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

    vector<pair<int,int> >vec;
    vector<bool> canBeOpened(n, false);
    
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        vec.push_back(make_pair(a,b));
    }

    int count = n;
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n; j++) {

            if (i != j and vec[i].first == vec[j].second and canBeOpened[i] == false){
                count--;
                canBeOpened[i] = true;
            }
        }
    }

    cout << count << endl;
    
    return 0;
}