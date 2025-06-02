#include<iostream>

using namespace std;

int main() {

    int n,count = 0 ;

    cin>>n;
    
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    int key;

    for(int i = 1 ; i < n ; i++) {

        key = array [i];
        int j = i - 1;

        while( j >= 0 and array[j] > key) {

            array[j+1] = array [j];
            j-- ;     
        }
        array[j+1] = key;
    }

    for (int i = 0; i < n-1; i++)
    {
        if(array[i] < array[i+1]){
            cout<<array[i+1]<<'\n';
            count++;
            break;
        }
    }
    if(count == 0 ){
        cout<<"NO\n";
    }

    
}