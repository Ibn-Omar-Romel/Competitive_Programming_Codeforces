#include<iostream>

using namespace std;

int main() {

    int n , count = 0 , min = 0, value = 0;
    cin>>n;

    int array[n];
    for(int i = 0 ; i < n ; i++) {

        cin>>array[i];
        if( i == 0) {
            min = array[i];
            value = array[i];
        }

        if(array[i] > min and i != 0){
            count++;
            min = array[i];
        }
        else if(array[i] < value) {
            count++;
            value = array[i];
        }
    }
    cout<<count<<'\n';
}