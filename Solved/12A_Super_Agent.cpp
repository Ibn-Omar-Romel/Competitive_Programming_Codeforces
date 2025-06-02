#include<iostream>

using namespace std;

int main() {

    int count = 0;

    char arr[3][3];
    char temp[9];

    for(int i = 0 ; i < 3 ; i++) {

        for(int j = 0 ; j < 3 ; j++) {

            cin>>arr[i][j];

            temp[count] = arr[i][j];
            count++;
        }
    }

    count = 0;

    for(int i = 0, j = 8 ; i < 4 ; i++, j--) {

        if(temp[i] != temp[j] ){

            cout<<"NO\n";
            count++;
            break;
        }
    }

    if(count == 0)
        cout<<"YES\n";
}