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
    
    vector < pair< int , int > > m;
    int ini = 1;
    for ( int i = 0 ; i < size ; i++ ) {

        int a;
        cin >> a;

        ll end = ini + a  - 1;
        for (  int j = ini ; j <= end ; j++ ) {

            m.push_back(make_pair(j,i+1));
        }
        ini = end+1;
        
    }

    int n;
    cin >> n;

    while(n--){

        int a;
        cin >> a;
       cout << m[a-1].second << endl; // a-1 cause vector starts from 0 index
    }

    return 0;
}










// #include<bits/stdc++.h>

// using namespace std;

// #define ll long long int

// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define ain cin >> arra[i]
// #define aout cout << arra[i]
// #define vin cin >> vec[i]
// #define vout cout << vec[i]
// #define ccount cout << count << '\n'
// #define cp count++
// #define vsort sort( vec.begin(), vec.end())
// #define asort sort( arra, arra+size );
// #define ok cout << "ok" << endl


// int main() {

//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int size;
//     cin >> size;
    
//     map<ll,int> m;
//     int ini = 1;
//     for ( int i = 0 ; i < size ; i++ ) {

//         int a;
//         cin >> a;

//         ll end = ini + a  - 1;
//         for (  int j = ini ; j <= end ; j++ ) {

//             m[j] = i+1 ;
//         }
//         ini = end+1;
        
//     }

//     int n;
//     cin >> n;

//     for ( int j = 0 ; j < n ; j++ ) {

//         int a;
//         cin >> a;

//         map<ll,int> :: iterator it = m.find(a);
//         cout << it->second << endl;
//     }

//     return 0;
// }
