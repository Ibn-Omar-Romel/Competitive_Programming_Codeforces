#include<bits/stdc++.h>

using namespace std;

#define ll long long int

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cp count++
#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size;
    cin >> size;

    int neg = INT_MIN, pos = INT_MAX, negcheck = 0 , poscheck = 0;
    int flag = 0;

    for ( int i = 0 ; i < size ; i++ ) {

        int a;
        cin >> a;

        if ( a == 0 ) flag = 1;
        else if ( a < 0 and a > neg ) {
            neg = a;
            negcheck = 1;
        }
        else if ( a > 0 and a < pos ) {
            pos = a;
            poscheck = 1;
        }
    }

    if ( flag == 1 )
    {
        cout << 0 << endl;
    }
    else if ( negcheck == 0 ) cout << pos << endl;
    else if ( poscheck == 0 ) cout << (-1)*neg << endl;
    else
    {
        cout << min( (-1)*neg, pos );
    
    }
    
    

    return 0;
}
