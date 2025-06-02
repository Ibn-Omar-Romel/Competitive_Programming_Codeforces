#include<iostream>

using namespace std;

int main() {

    int n,a,b,value = 0,sum = 0;
    cin>>n;

    if(2 <= n and n <= 100) 
    {
        int year[n-1];
        for(int i = 0 ; i < n-1 ; i++) {
            cin>> year[i];
        }
        cin>>a>>b;

        value = b - a;

        for(int i = a-1 ; i < b-1 ; i++)
            sum = sum + year[i];

        cout<<sum<<'\n';
        
    }

    
}