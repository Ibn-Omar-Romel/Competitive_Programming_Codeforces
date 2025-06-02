#include<iostream>
#include<algorithm>
//#include<bits/stdc++.h>

using namespace std;

int main() {

    int s,n, sum = 0, count = 0, value = 0;

    cin>>s>>n;

    int array[n][2];

    for(int i = 0 ; i < n ; i++) {

        cin>>array[i][0];
        cin>>array[i][1];
    }
    for(int i = 0 ; i < n ; i++) {

        if(i == 0) {

            sum = s - array[i][0];
            if(sum < 0){
                count = 0;
                cout<<"NO\n";
                break;
            }
            else{
                sum = s + array[i][1];
                count++;
            }
        }
        else {

            value = sum;
            sum = sum - array[i][0];
            if(sum < 0){
                count = 0;
                cout<<"NO\n";
                break;
            }
            else{
                sum = value + array[i][0];
                count++;
            }
            
        }
    }

    if(count != 0)
        cout<<"YES\n";
}