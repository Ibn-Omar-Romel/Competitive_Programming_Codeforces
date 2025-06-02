#include<iostream>
#include<string.h>

using namespace std;

int main() {

    string s;
    cin>>s;

    
    int count = 0 , value = 0 ;
    int temp [26]={0};

    for(int i = 0 ; i < s.size()-1 ; i++) {

        for(int j = i+1 ; j < s.size() ; j++) {

            if(s[i] == s[j] and temp[int(s[i])-97] == 0)
                count++;
        }
        temp[int(s[i])-97] = 1;
    }
    value = s.size() - count;
    
    if(value % 2 == 0 )
        cout<<"CHAT WITH HER!\n";
    else
        cout<<"IGNORE HIM!\n";
}