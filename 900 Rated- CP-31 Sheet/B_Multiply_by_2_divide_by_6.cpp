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

    int t;
    cin >> t;

    while( t-- ) {
        
        int number;
        cin >> number;
        int count = 0 ;
 
        if(number == 1){
            cout<<"0\n";
        }
        else {
 
            while( true ) {
 
                if( number == 1) {
                    cout << count << '\n';
                    break;
                }
                else if( number % 6 == 0) {
                    number = number / 6;
                    count++;
                }
 
                else if( number % 6 == 3 ){
 
                    number = number * 2;
                    count++;
                }
                else {
                    count = 0;
                    break;
                }
            }
 
            if(count == 0) {
                cout<< "-1\n";
            }
            
        }
        
    }
    return 0;
}
