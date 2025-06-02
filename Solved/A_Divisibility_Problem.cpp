#include<iostream>

using namespace std;

int main() {

    long long int n,a,b,rem = 0;
    
    cin>>n;

    

    for(int i = 0 ; i < n ; i++) {
        
        cin>>a>>b;

        if( a < b)
            cout<<b-a<<'\n';

        else if((a == b) or (a % b == 0))
            cout<<"0\n";

        else{
            rem = a % b;
            cout<<b - rem<<'\n';
        }
    }

}