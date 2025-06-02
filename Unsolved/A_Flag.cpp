#include<iostream>

using namespace std;

int main() {

    int n, m,count = 0;
    cin>>n>>m;

    int array[3][3];

    for(int i = 0; i < n; i++){
        cin >> array[i];

        for(int j = 0; j < n - 1; j++){
            if(array[i][j] != array[i][j+1]){
                cout << "NO" << '\n';
                return 0;
            }
        }

    }

    for(int i = 0; i < n; i++){
        if(array[i][0] == array[i+1][0]){
            cout << "NO" << '\n';
            return 0;
        }
    }

    cout << "YES" << '\n';



    return 0;
}






// #include <iostream>
// using namespace std;
// #define int long long

// int32_t main(){

//     int row, col; cin >> row >> col;
//     char a[100][100];

//     for(int i = 0; i < row; i++){
//         cin >> a[i];

//         for(int j = 0; j < col - 1; j++){
//             if(a[i][j] != a[i][j+1]){
//                 cout << "NO" << '\n';
//                 return 0;
//             }
//         }

//     }

//     for(int i = 0; i < row; i++){
//         if(a[i][0] == a[i+1][0]){
//             cout << "NO" << '\n';
//             return 0;
//         }
//     }

//     cout << "YES" << '\n';



//     return 0;
// }