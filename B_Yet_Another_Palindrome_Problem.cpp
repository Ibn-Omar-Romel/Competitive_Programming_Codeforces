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

    int t;
    cin >> t;

    while( t-- ) {

        int size;
        cin >> size;

        vector < pair < int , int >> vec(5000);
        map<int,int> fre;

        int flag = 0;
        int value = 0;

        for ( int i = 0 ; i < size ; i++ ) {

            int a;
            cin >> a;

            fre[a]++;

            auto it = fre.find(a);
            

            if ( vec[a].first == 0  ) {
                vec[a].first = i+1;              
            }
            else {
                 value = i+1 - vec[a].first;
                 vec[a].second = i+1;
            }

            if ( it->second >= 3 || value > 1 ) flag = 1;
            value = 0;

        }

        if ( flag == 1 ) yes;
        else no;

    }
    return 0;
}
