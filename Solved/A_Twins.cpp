#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    int n ,sum_1 = 0, sum_2 = 0, count = 0;
    cin>>n;

    int array[n];
    for(int i = 0 ; i < n ; i++) {
        cin>>array[i];
        sum_1 = sum_1 + array[i];
    }

    sort(array, array+n);

    for(int i = n-1 ; i >= 0 ; i--){

        if(sum_2 > sum_1){
            break;
        }
        else{
            sum_1 = sum_1 - array[i];
            sum_2 = sum_2 + array[i];
            count++;
        }
    }
    cout<<count<<'\n';


    return 0;
}