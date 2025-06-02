#include<iostream>

using namespace std;

int main() {


    int n,sum = 0 , count = 0;
    cin>>n;

    int arr[n][3];

    for(int i = 0 ; i < n ; i++) {

        for(int j = 0 ; j < 3 ; j++) {

            cin>>arr[i][j];   
        }
    }

    for(int i = 0 ; i < 3 ; i++) {

        for(int j = 0 ; j < n ; j++) {

            sum = sum + arr[j][i];

        }
        if(sum == 0)
            count++;
    }
    if(count == 3)
        cout<<"YES\n";

    else
        cout<<"NO\n";

}

