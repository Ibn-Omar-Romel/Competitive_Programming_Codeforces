#include<bits/stdc++.h>

using namespace std;

#define ll long long int

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ain cin >> arra[i]
#define aout cout << arra[i]
#define vin cin >> vec[i]
#define vout cout << vec[i]
#define ccount cout << count << '\n'
#define cp count++
#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size );
#define ok cout << "ok" << endl


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size;
    cin >> size;

    int chest = 0, biceps = 0, back = 0;

    for ( int i = 0 ; i < size ; i++ ) {

        int a;
        cin >> a;

        if ( i % 3 == 0 ) chest += a;
        else if ( i % 3 == 1 ) biceps += a;
        else back += a;
    }

    int maxi = max(chest, max(biceps,back));

    if (maxi == chest) cout << "chest" << endl;
    else if (maxi == biceps) cout << "biceps" << endl;
    else  cout << "back" << endl;

    return 0;
}
