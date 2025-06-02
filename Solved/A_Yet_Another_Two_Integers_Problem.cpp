#include<iostream>
//#include<bits/stdc++.h>

using namespace std;

int main() {

    int n,a,b, value = 0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;

        if(a >= b)
            value = a - b ;
        else
            value = b - a ;


        if(value == 0)
            cout<<"0\n";

        else if(value % 10 == 0)
            cout<<value / 10 <<'\n';

        else
            cout<<(value/10) + 1<<'\n';


        value = 0;
    }
    
}