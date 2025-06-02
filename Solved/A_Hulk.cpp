#include<iostream>
#include<string>

using namespace std;

int main() {

    int n;
    cin>>n;

    int count = 1;

    while(count <= n) {

        if(count > 1)
            cout<<"that ";

        if(count % 2 != 0){
            cout<<"I hate ";
        }
        else{
            cout<<"I love ";
        }
        count++;
    }

    if(count > n)
        cout<<"it\n";


}