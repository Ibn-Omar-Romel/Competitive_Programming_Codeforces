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


void solve() {
    
    int size;
    cin >> size;
    string s;
    cin >> s;

    int state = 0, count = 0 ,check = 0;

    int letter[26];

    for(int i = 0 ; i < 26 ; i++){
        
        letter[i] = -1;
    }


    for(int i = 0 ; i < s.length() ; i++) {

        char c = s[i];
        int index = int(c) - 97;

        if(count % 2 == 0){
            state = 0;
            count++;
        }
        else{
            state = 1;
            count++;
        }

        if( letter[index] == -1){
            letter[index] = state;
        }
        else if (letter[index] != state){
            check++;
            break;
        }
        else{
            continue;
        }
    }

    if(check == 0){
        cout<<"YES\n";
    }
    else{
        cout << "NO\n";
    }
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {
        solve();
    }
    return 0;
}
