#include<iostream>
#include<string>

using namespace std;

int main() {

    int n;
    cin>>n;

    string s;
    cin>>s;

    int D = 0 , A = 0 ;

    for(int i = 0 ; i < n ; i++) {

        if(s[i] == 'A')
            A++;
        else 
            D++;
    }
    if(A>D)
        cout<<"Anton\n";
    else if(A<D)
        cout<<"Danik\n";
    else
        cout<<"Friendship\n";

    return 0;
}