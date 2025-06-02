#include<iostream>
#include<cmath>

using namespace std;

int main() {

    long long int n ;
    cin>>n;

    long long int sum = 0;
    int count = 0;

    if(n%2 != 0)
        sum = sum - (n/2) -1;
    else 
        sum = sum + (n/2);
    

    cout<<sum<<'\n';
}