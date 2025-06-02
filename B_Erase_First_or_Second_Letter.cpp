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

        string s;
        cin >> s;

        map<string ,int > m;
        map<char, int> md;
        
        m[s]++;
        string ns = s;

        string fs = s;
        string ss = s;
        int count = 0 ;

        while( count < 3 ) {

            if ( fs.length() > 1 ){
                fs = fs.substr(0,0) + fs.substr(0+1);
                m[fs]++;
                cout << fs << endl;
            }
            if(ss.length() > 1 ) {
                ss = ss.substr(0,1) + ss.substr(1+1);
                m[ss]++;
                cout << ss << endl;
            }
            count++;
        }
        cout << m.size() << endl;  
    }
    return 0;
}
