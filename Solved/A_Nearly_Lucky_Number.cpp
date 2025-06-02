#include<iostream>

using namespace std;

int main() {

    long long int n ;
     cin>> n ;
    int count = 0 ;

    int rem;

    while(n!= 0) {

        rem = n % 10 ;
        if(rem == 4 or rem == 7) {

            count++;
            
        }
        n = n / 10 ;
    }

    //cout<<count<<'\n';

    if(count == 4 or count == 7 )
        cout<<"YES\n";
    else 
        cout<<"NO\n";

}