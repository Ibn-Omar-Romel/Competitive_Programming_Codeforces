#include<iostream>
#include<algorithm>
//#include<bits/stdc++.h>

using namespace std;

int main() {

    int n,a;
    cin>>n;

    for(int p = 0 ; p < n ; p++) {

        cin>>a;
        int array[a];
        for(int i = 0 ; i < a ; i++) {

            cin>>array[i];
        }
        int count = 0;
        int maxDif = *max_element(array,array+a) - *min_element(array,array+a);

        for(int i = 0 ; i < a ; i++) {

            for(int j = i + 1 ; j < a ; j++) {

                if(abs(array[i]- array[j]) == maxDif)
                    count++;
            }
        }

        cout<<count*2<<'\n';
    }
    
}