#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main() {

    int a , b, count = 0 ;
    double value = 0 ;
    cin>>a>>b;

    int array[a] ;

    for(int i = 0 ; i < a ; i++) {

        cin>>array[i];
    }

    for(int i = 0 ; i < a ; i++) {

        if(array[i] > b){

            value = array[i]/(double)b;
            
            count = count + ceil(value);
            
        }
        else
            count = count + 1;
    }
    cout<<count<<'\n';
}