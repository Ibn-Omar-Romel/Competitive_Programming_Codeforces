#include<iostream>
#include<string>

using namespace std;

int main() {


    string s;
    getline( cin, s);

    int count = 0 , value = 0 ;

    int temp[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        value = (int)s[i] - 97;

        if(s[i]>='a' and s[i]<='z' and temp[value] == 0) {

            count++;
            temp [value] = 1;

        }
    }

    cout<<count<<'\n';

}