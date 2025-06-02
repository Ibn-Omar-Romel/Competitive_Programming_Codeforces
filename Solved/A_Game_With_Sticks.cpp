#include<iostream>

using namespace std;

int main() {

    int n , m;

    cin>>n>>m;

    int count = 0;

    while(n != 0 and  m != 0) {

        count++;

        n = n - 1 ;
        m = m - 1 ;

    }

    if(count % 2 == 0)
        cout<<"Malvika\n";
    else
        cout<<"Akshat\n";
}