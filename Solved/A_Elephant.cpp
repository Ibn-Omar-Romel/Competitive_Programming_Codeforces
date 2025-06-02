#include<iostream>

using namespace std;

int main() {

    int x;
    cin>>x;

    int steps = 0 , sum = 0;

    for(int i = 5 ; i>= 0 ; ){

        if(sum > x) {
            i--;
        }
        else if( sum == x) {
            break;
        }
        else {
            sum = sum + i;
            steps++;
        }
    }
    cout<<steps<<'\n';
}