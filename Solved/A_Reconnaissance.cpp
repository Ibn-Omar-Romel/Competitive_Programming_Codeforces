#include<iostream>

using namespace std;

int main() {

    long long int n,d;
    int count = 0;
    cin>>n>>d;
    if(1<=n and n<=1000 and 1<=d and d<=1000000000) {

        long long int array[n];

        for(int i = 0 ; i < n ; i++) {

            cin>>array[i];
        }


        long long int key;

        for(int i = 1 ; i < n ; i++) {

        key = array [i];
        int j = i - 1;

        while( j >= 0 and array[j] > key) {

            array[j+1] = array [j];
            j-- ;     
        }
        array[j+1] = key;
    }


    // for(int i = 0 ; i < n ; i++)
    //     cout<<array[i]<<'\t';

    // cout<<endl;
    

        for(int i = 0 ; i<n-1 ; i++) {          

                for(int j = i+1 ; j< n ; j++){

                    if(array[j]-array[i]<=d )
                    count++;
                }
            
        }
        cout<<count*2<<"\n";


    }

    return 0;
}