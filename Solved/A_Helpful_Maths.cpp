#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main() {

    string s ; 
    cin>>s;

    int count  = 0;
    int temp[100] ;
    int index[100];
    for(int i = 0 ; s[i] != '\0' ; i++) {

        if(s[i] != '+'){
            temp[count] = s[i]-'0';
            index[count] = i;
            count++;
        }
    }

    sort(temp,temp + count);
    for(int i = 0, j = 0; i < s.size() ; i++) {

        if(i == index[j]) {

            cout<<temp[j];
            j++;
        }
        else  
            cout<<"+";
    }
    cout<<'\n';

}