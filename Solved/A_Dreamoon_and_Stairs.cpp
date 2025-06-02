#include<iostream>

using namespace std;

int main() {

    int n, m;

    cin>>n>>m;

    if(n < m){
        cout<<"-1\n";
    }
    else{
        int steps = n / 2;

    int rem = n % 2;

    if(rem == 0 ){

        while(steps % m != 0){

            steps += 1;
        }
    }
    else{
        steps +=1;
        while(steps % m != 0){

            steps += 1;
        }
    }
    

    cout<<steps<<'\n';
    }



}