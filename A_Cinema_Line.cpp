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

    int value = 0;
    int twentyfive = 0, fifty = 0;

    int flag = 0;

    for ( int i = 0 ; i < size ; i++ ) {

        int a;
        cin >> a;

        if ( a == 25 )
            twentyfive++;

        else if ( a == 50 ) {

            if ( twentyfive >= 1 ) {
                twentyfive--;
                fifty++;
            }
            else{
                flag++;
            }
        
        }
        else if ( a == 100 ) {
            
            if ( twentyfive >= 1 and fifty >= 1 ) {

                twentyfive--;
                fifty--;
            }
            else if ( twentyfive >= 3 ) {
                twentyfive -= 3;
            }
            else{
                flag++;
            }
        }   
    }
    if ( flag > 0 ) no;
    else yes;

    return 0;
}
