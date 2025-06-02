#include<iostream>
#include<vector>
#include<algorithm>
#include <iomanip>
#include<bits/stdc++.h>

using namespace std;



int main() {

    long long int n, l, input = 0;

    long double value = 0.0, maxValue = 0.0, maxValue0 = 0.0;

    cin>>n>>l;

    int array[n];
    

    for(int i  = 0 ; i < n ; i++) {
        
        cin>>array[i];
    }
    sort(array, array + n);

    if(array[0] != 0) {

        maxValue0 = (double)array[0];

    }

    for (int i = 1; i < n; i++)
    {
            
            value = (double)array[i] - (double)array[i-1];
            if (value > maxValue) {

                maxValue = value;
            }
        
    }
    maxValue  = maxValue / (double)2;

    if(maxValue0 > maxValue){
        cout<<maxValue0<<'\n';    
    }
    else{

        cout<< maxValue << "\n";
    }

}