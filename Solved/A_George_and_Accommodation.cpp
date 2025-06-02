#include<iostream>

using namespace std;

int main() {

    int n, count = 0;
    cin>>n;

    int array [n][2];
    for(int i = 0 ; i < n ; i++) {

        for(int j = 0 ; j < 2 ; j++) {

            cin>>array[i][j];
        }
    }

    for(int i = 0 ; i < n ; i++) {

        for(int j = 0 ; j < 1 ; j++) {

            if(array[i][j+1] - array[i][j] >= 2)
                count++;
        }
    }

    cout<<count<<'\n';


}