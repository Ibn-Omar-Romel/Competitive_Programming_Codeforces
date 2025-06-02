#include<iostream>

using namespace std;

int main() {

    int n ;
    cin>>n;
    int array[n][2];

    for(int i = 0 ; i < n ; i++) {

        for(int j = 0 ; j < 2 ; j++) {

            cin >> array [i][j];
        }
    }

    int value = 0 ;
    int minimum = 0;

    for(int i = 0 ; i < n ; i++) {

        for(int j = 0 ; j < 2-1 ; j++) {

            value = value + array[i][j+1] - array[i][j];
            if(value > minimum)
                minimum = value;
        }
    }

    cout<<minimum<<'\n';
}