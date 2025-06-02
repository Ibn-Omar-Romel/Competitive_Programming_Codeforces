#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ain cin >> arra[i]
#define aout cout << arra[i]
#define vin cin >> vec[i]
#define vout cout << vec[i]
#define ccount cout << count << '\n'
#define cp count++
#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int x1,y1,x2,y2,x3,y3,x4,y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        
        
        int arra[4];
        
        arra[0] = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        arra[1] = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
        arra[2] = sqrt(pow(x3-x4,2)+pow(y3-y4,2));
        arra[3] = sqrt(pow(x1-x4,2)+pow(y1-y4,2));

        sort( arra , arra+4);

        cout << arra[0] * arra[0] << endl;
    
    }
    return 0;
}
