#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    int array[5];
    int a,b,c;
    cin>>a>>b>>c;
    
    

    array [0] = a + b * c;
    array [1] = a * (b + c);
    array [2] = a * b * c;
    array [3] = (a + b) * c;
    array [4] = a + b + c;

    int max = array[0];

    for(int i = 1 ; i < 5 ; i++) {

        if(max < array[i])
            max = array[i];
    }
    cout<<max<<'\n';
    
}