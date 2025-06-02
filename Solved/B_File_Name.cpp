#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size;
    cin >> size;

    string s;
    cin >> s;

    int count = 0;

    for ( int i = 2 ; i < size  ; i++ ) {

        if( s[i] == 'x' and s[i-1] == 'x' and s[i-2] == 'x' ) count++;
    }
    
    cout << count << '\n';
    
    return 0;
}
