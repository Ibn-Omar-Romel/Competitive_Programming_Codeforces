#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 


int check(char ch) {
    if (ch == '.'){
        return 0;
    }
    else   
        return 1;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char arra[4][4];

    for (int i = 0 ; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arra[i][j];
        }
    }

    int black = 0;
    int white = 0;

    bool ans = false;

    for (int i = 0 ; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            
            if (check(arra[i][j])) {
                black++;
            } else {
                white++;
            }

            if (check(arra[i][j+1])) {
                black++;
            } else {
                white++;
            }
            if (check(arra[i+1][j])) {
                black++;
            } else {
                white++;
            }
            if (check(arra[i+1][j+1])) {
                black++;
            } else {
                white++;
            }


            if (abs(black-white) == 2 || black == 4 || white == 4) {
                ans = true;
                break;
            } else {
                black = 0;
                white = 0;
            }
        }
        if (ans) {
            break;
        }
    }

    ans? yes : no;

    return 0;
}
