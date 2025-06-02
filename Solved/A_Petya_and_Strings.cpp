#include<iostream>
#include<string.h>

using namespace std;

int main() {

    string s1, s2 ; 
    cin>>s1;
    cin>>s2;

    int value = s1.size();
    int output = 0 ;

    char S1,S2;
    

    for(int i = 0 ; i < value ; i++) {


        S1 = toupper(s1[i]);
        S2 = toupper(s2[i]);

        if( (int)S1 - (int)S2 < 0 ) {

            cout<<"-1\n";
            output++;
            break;
        }
        else if((int)S1 - (int)S2 > 0 ) {

            cout<<"1\n";
            output++;
            break;
        }
    }

    if(output == 0)
        cout<<output<<"\n";


}