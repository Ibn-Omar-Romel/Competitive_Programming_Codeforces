#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    int array[3];
    int value = 0 , ans = 0;
    for(int i = 0 ; i < 3 ; i++) {

        cin>>array[i];
    }
    sort(array, array + 3);

    ans = (array[2] - array[1]) + (array[1] - array[0]);
    cout<<ans<<'\n';

}