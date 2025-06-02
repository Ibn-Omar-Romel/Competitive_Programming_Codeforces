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

        vector < int > vec;
        int total = 0;

        for ( int i = 0 ; i < size ;  ) {

             
            if ((s[i] != 'a' && s[i] != 'e')  && (s[i + 1] == 'a' || s[i + 1] == 'e')) {

                vec.push_back(2);
                total +=2;

                if( size - total == 1 ){
                    int vsize = vec.size() - 1;
                    vec[vsize]++;
                    break;
                }
                else{
                    i += 2;
                }

            }
            else if ((s[i] != 'a' && s[i] != 'e')  && (s[i + 1] != 'a' && s[i + 1] != 'e')) {
                
                
                int vsize = vec.size() - 1;
                vec[vsize]++;

                total++;
                i++;
            }
        }

        int last = 0;
        int j = 0;

        for ( int i = 0 ; i < vec.size() ; i++ ) {

            while( vec[i] -- ) {

                cout << s[j];
                j++;
                last++;

            }
            if ( last != size ) cout << ".";
            else cout << endl;
        }
    }
            

    return 0;
}
