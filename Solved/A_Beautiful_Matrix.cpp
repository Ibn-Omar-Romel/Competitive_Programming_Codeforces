#include<iostream>

using namespace std;

int main() {

    int array[5][5];
    int value = 0 , first = 0 , second = 0 ;

    for(int i = 0 ; i < 5 ; i++) {

        for(int j = 0 ; j < 5 ; j++) {

            cin>>array[i][j];

            if(array[i][j] == 1) {

                first = i ;
                second = j ;
            }
        }
    }

    if(first < 2)
        value = value + (2 - first);
    if(2 < first)
        value = value + (first - 2);
    if(second < 2)
        value = value + (2 - second);
    if(2 < second)
        value = value + (second - 2);

    cout<<value<<"\n";
}