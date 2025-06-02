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



int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

                                                  // LCM : 
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        string s1, s2;
        cin >> s1 >> s2;

        int a = s1.size(), b = s2.size();
        int value = lcm(a,b);
        int c1 = value / a, c2 = value / b;
        
        string st1 = s1;
        while( --c1 ) {
            st1 += s1 ;
        }

        string st2 = s2;
        while( --c2 ) {
            st2 += s2 ;
        }

        if ( st1 == st2 ) {
            cout << st1 << endl;
        }
        else {
            cout << -1 << endl;
        }

    }
    return 0;
}
