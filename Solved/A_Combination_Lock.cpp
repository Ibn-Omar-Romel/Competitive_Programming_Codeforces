#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size;
    cin >> size;

    string s1,s2;
    cin >> s1 >> s2;

    int count = 0;


    for ( int i = 0 ; i < size ; i++ ) {

        int value1 = s1[i] - '0';
        int value2 = s2[i] - '0';
        
        if( value1 < value2 ) swap( value1,value2 );

        count = count + min( value1 - value2 , (9 - value1 + value2 + 1 ));
    }

    cout << count << '\n';

    return 0;
}
