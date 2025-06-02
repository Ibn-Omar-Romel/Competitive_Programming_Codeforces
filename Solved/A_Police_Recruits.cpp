#include<iostream>

using namespace std;

int main() {

    int n , sum = 0 ;
    cin>>n;

    int count = 0;
    
    int array[n];
    for(int i = 0 ; i < n ; i++) {

        cin>>array[i];

        if(i == 0  and array[i] < 0){
            count++;
            sum = sum + array[i];
        } 
        
        else if(array[i] > 0 and sum < 0){
          sum = 0;
          sum = sum + array[i];
          
          }
        else{
            sum = sum + array[i] ;
            if(sum < 0){
                count++;
            }
        }

    }
    cout<<count<<'\n';
}