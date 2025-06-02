#include<iostream>

using namespace std;

int main() {

    int a, b, fas = 0 , normal = 0 ,value = 0;

    cin>>a>>b;
    
    if(a>=b){
        fas = b;
        value = a;
    }

    else{
        fas = a;
        value = b;
    }
    value = value - fas;
    
    normal = (value / 2);

    cout<<fas<<" "<<normal<<'\n';

    

    
}