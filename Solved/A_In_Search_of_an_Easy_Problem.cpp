#include<iostream>

using namespace std;

int main() {

    int n, count = 0;
    cin>>n;

    int array[n];
    for( int i = 0 ; i < n ; i++) {

        cin>>array[i];
        if( array[i] == 1) {
            count++;
        }
    }

    if( count > 0) 
        cout<<"HARD\n";
    else
        cout<<"EASY\n";

    return 0;
}