#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int size;
    cin >> size;

    int odd = 0 , even = 0;

    vector < int > veco;
    vector < int > vece;
    int a;
    for ( int i = 0 ; i < size ; i++ ) {

        cin >> a;
        if( a% 2 == 0 ) {
            even++;
            vece.push_back(a);
        }
        else {
            odd++;
            veco.push_back(a);
        }
    } 
    // cout << odd << " " << even << endl;
    if (abs(odd-even) == 1 or odd == even ) cout << 0 << endl;
    else {

        ll sum = 0;
        sort( vece.begin(), vece.end());
        sort( veco.begin(), veco.end());
        
        if (even > odd) {
            for (int i = 0; i < even - odd - 1; i++) {
                sum += vece[i];
            }
        } else {
            for (int i = 0; i < odd - even - 1; i++) {
                sum += veco[i];
            }
        }

        cout << sum << endl;
    }   

    return 0;
}
