#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    int n, m, value = 0, sum = 0;
    cin>>n>>m;

    int array[m];

    for(int i = 0 ; i < m ; i++) {

        cin>>array[i];
    }
    sort(array, array + m);

    for(int i = 0 ; i < m-n+1 ; i++) {

        sum = array[i+n-1] - array[i];
        if( i == 0)
            value = sum;
        else if( sum < value )
            value = sum;
    }
    cout<<value<<'\n';

}