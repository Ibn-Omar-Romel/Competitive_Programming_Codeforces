#include<iostream>

using namespace std;

int main() {

    int n  ;
    cin>>n;

    int array[n] ;
    int temp = 0, count = 0;
    

    for(int i = 0 ; i < n ; i++) {

        cin>>array[i];
    }

    int times = array[0];

    for(int i=0; i<n; i++){
        
        temp = array[0];
        if(i == n-1)
            array[i] = temp;
        else
            array[i] = array[i+1];
        count++;
        if(count == times)
            break;
    }
    for(int i = 0 ; i < n ; i++) {

        cout<<array[i];
    }
    cout<<'\n';

}