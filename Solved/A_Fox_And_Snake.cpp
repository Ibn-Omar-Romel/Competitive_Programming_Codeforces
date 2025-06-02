#include<iostream>
#include<string>
// #include<bits/stdc++.h>

using namespace std;

int main() {

    int n , m, count = 0 ;
    cin>>n>>m;

    for(int i = 0 ; i < n ; i++) {

        for(int j = 0 ; j < m ; j++) {

            if(i % 2 == 0)
                cout<<"#";
            else if(i % 2 != 0 and count % 2 == 0) {
                if(j == m-1){
                    cout<<"#";
                    count++;
                }
                else
                    cout<<".";
            }
            else if(i % 2 != 0 and count % 2 != 0) {
                if(j == 0)
                    cout<<"#";
                else
                    cout<<".";

                if(j == m - 1)
                    count++;
            }
        }
        cout<<'\n';
        
    }
}