#include<iostream>

using namespace std;

int main() {

    int n , k ;
    cin>> n >> k ;

    int rem , count = 0;
    int value = n ; 

    while( count< k) {

        rem = value % 10;
        if( rem != 0) {

            value = value - 1;
        }
        else {

            value = value / 10;
        }

        count++;
    }

    cout<<value<<'\n';
}