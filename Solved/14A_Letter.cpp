#include<iostream>

using namespace std;

int main() {

    int n, m;
    cin>>n>>m;

    char array[n][m];


    int min_i = n , min_j = m;
    int max_i = -1 , max_j = -1;



    for(int i = 0 ; i < n ; i++) {

        for(int j = 0 ; j < m ; j++) {

            cin >> array[i][j];
        }
    }

    for(int i = 0 ; i < n ; i++) {

        for(int j = 0 ; j < m ; j++) {

            if(array[i][j] == '*') {
                
                if(i < min_i)
                    min_i = i;

                if(j < min_j)
                    min_j = j;

                if(i > max_i)
                    max_i = i;
                if(j > max_j)
                    max_j = j;
            }

        }
    }

    for(int i = min_i ; i <= max_i ; i++) {

        for(int j = min_j ; j <= max_j ; j++) {

            cout<<array[i][j];
        }
        cout<<'\n';
    }


}