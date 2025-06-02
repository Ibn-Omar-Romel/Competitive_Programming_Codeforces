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

    int a, b, n;
    cin >> a >> b >> n;

    int temp = a;
    int value = a;

    for (int i = 0; i <= 9; i++) {

        temp = (temp * 10) + i;
        if (temp % b == 0)  
            value = temp;
        temp = a;
    }
    n--;
    string s = to_string(value);

    if (value == a)
        cout << -1 << endl;
    else {
            while( n-- ) {
            s += "0";
        }
        cout << s << endl;
    }
    return 0;
}
