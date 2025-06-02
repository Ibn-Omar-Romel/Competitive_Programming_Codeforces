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
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int count = 1;

    while( t-- ) {

        int size;
        cin >> size;

        int arra1[size];
        int arra2[size];

        int same = 0;

        for ( int i = 0 ; i < size ; i++ ) {

            cin >> arra1[i];
        }
        for ( int i = 0 ; i < size ; i++ ) {

            cin >> arra2[i];
            if ( arra1[i] ==  arra2[i] ) same++;
        }

        int ans = 0;
        int flag = 0;

        for ( int i = 0 ; i < size ; i++ ) {

            for ( int j = 0 ; j < size ; j++ ) {

                if ( arra1[i] == arra2[j] ) {
                    
                    for ( int k = j+1 ; k < size ; k++ ) {

                        if ( arra1[i+1] == arra2[k] ) {

                            ans = j+ans;
                            flag = 1;
                            break; 
     
                        }
                        else ans++;
                    }
                }

                if ( flag == 1 ) break;
                else ans = 0;
            }
            if ( flag == 1 ) break;
            else ans = 0;
        }

        cout << "Case " << count << ": " ;

        if ( same == size ) cout << 0 << endl;
        else if ( ans == 0 ) cout << size << endl;
        else cout << ans << endl;

        count++;

    }


    return 0;
}
