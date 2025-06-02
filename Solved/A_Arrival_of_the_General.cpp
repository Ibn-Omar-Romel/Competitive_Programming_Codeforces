#include<iostream>

using namespace std;

int main() {

    int n, max = 0 , min = 101, maxi, mini;
    cin>>n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
        if(max < array[i]) {

            max = array [i];
            maxi = i ; 
        }

        if(min >= array[i]) {

            min = array[i];
            mini = i;
        }

    }

    if(maxi > mini)
        mini++;

    cout<< maxi + (n - 1 - mini) <<'\n';
    return 0;
}
