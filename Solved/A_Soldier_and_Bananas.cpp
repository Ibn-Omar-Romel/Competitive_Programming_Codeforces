#include<iostream>

using namespace std;

int main() {

    int k,n,w;
    cin>>k>>n>>w;

    int sum = 0,count = 0 ;
    int i = 1 ;

    while(i<=w){

        sum = sum + (i*k);
        i++;
    }
    if(sum<=n)
        cout<<"0\n";
    else
        cout<<sum - n<<"\n";
}