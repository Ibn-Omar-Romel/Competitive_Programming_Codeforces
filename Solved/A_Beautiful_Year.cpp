#include<iostream>

using namespace std;

int main() {

    int n ; 
    cin>>n;

    while(1){

        n++;

        int b = n / 1000;
        int c = ( n / 100) % 10 ;
        int d = ( n / 10) % 10 ;
        int e = ( n / 1) % 10 ;


        if( b != c and b != d and b != e and c != d and c != e and d != e) {
            break;
        }
    }
    cout<<n<<'\n';

}