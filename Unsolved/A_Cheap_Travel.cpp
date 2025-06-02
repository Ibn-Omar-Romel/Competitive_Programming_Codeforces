#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

int main() {

    int n,m,a,b;
    cin>>n>>m>>a>>b;

    int array[3]={0};

    int LT = n / m;
    array[0] = LT * b;
    int rem = n % m;
    array[0] = array[0] + (rem * a);
    
    //cout<<array[0]<<'\n';
    int count = 0;
    for(int i = 1 ; count <= n ; i++) {

        array[1] = array[1] + b;
        count+=m;
    }

    //cout<<array[1]<<'\n';
    //cout<<"Count: "<<count<<'\n';


    array[2] = n * a;
    //cout<<array[2]<<'\n';

    if(count>= n)
        cout<<*min_element(array, array+3)<<'\n';
}