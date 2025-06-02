#include<iostream>

using namespace std;

int main() {

    int n , k;
    cin>>n>>k;

    int value = 240 - k ;
    int i = 1, count = 0;
    while(1) {

        value = value - (i * 5);
        if(value >= 0){
            count++;
            i++;
            if(count == n)
                break;

        }
            
        else 
            break;
    }

    cout<<count<<'\n';
}