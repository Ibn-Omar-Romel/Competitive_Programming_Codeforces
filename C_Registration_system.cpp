#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "OK" << endl
#define nl cout << endl


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map < string, int> fre;

    string st;

    for ( int i = 0 ; i < n ; i++ ) {

        cin >> st;


        // this also works
        // map<string,int>::iterator it = fre.find(st);

        // if ( it == fre.end() ) { 
        //     ok;  
        // }
        // else {
        //     int count = (*it).second;
        //     cout << st << count << endl;
        // }

        // fre[st]++;  

        // better approach
        if ( !fre[st] ) ok;
        else{
            cout << st << fre[st] <<  endl;
        }
        fre[st]++;
    }
    return 0;
}
