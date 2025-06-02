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


int LeapYear( int year ) {

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return  29; 
    }else {
        return  28;
    }
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    cin.ignore();


    while( t-- ) {

        string s;
        
        getline(cin, s);

        string d = s.substr(0,2);
        int day = stoi(d);

        string m = s.substr(3,2);
        int month = stoi(m);

        string y = s.substr(6,4);
        int year = stoi(y);

        string bar = s.substr(11,3);



        if ( month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12 ) {
            int numday = 31;



        }
        else if ( month == 2 ) {

            
            
        }
        else {

            int numday = 30;

        }






        // cout << "|---------------------------|" << endl;
        // cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|" << endl;
        // cout << "|  1|  2|  3|  4|  5|  6|  7|" << endl;
        // cout << "|---------------------------|" << endl;
        // cout << "|---------------------------|" << endl;
        // cout << "|---------------------------|" << endl;
        // cout << "|---------------------------|" << endl;
        // cout << "|---------------------------|" << endl;
        // cout << "|---------------------------|" << endl;

        

        
    }
    return 0;
}
