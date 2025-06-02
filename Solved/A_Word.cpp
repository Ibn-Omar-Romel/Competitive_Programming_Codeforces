#include<iostream>
#include<string.h>

using namespace std;

int main() {

    string s;
    cin>>s;

    char ch;

    int lower = 0 , upper = 0 ;

    for(int i = 0 ; i < s.size() ; i++) {

        if(s[i]>= 'a' and s[i]<= 'z')
            lower++;
        else 
            upper++;
    }
    if(lower >= upper ) {

        for(int i = 0 ; i < s.size() ; i++) {

            ch = tolower(s[i]);;
            cout<<ch;
        }
    }
    else if(lower < upper) {

        for(int i = 0 ; i < s.size() ; i++) {
            ch = toupper(s[i]);
            cout<<ch;
        }
    }
}