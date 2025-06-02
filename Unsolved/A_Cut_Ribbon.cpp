#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    int n , a, b, c;
    cin>>n>>a>>b>>c;

    int arr[3] = {a,b,c};

    sort(arr,arr + 3);

    int value = 0, i = 0, rem = 0, check = 0,value_2 = 0;

    while(value != n) {

        if(n % arr[i] == 0) {

            value = n / arr[i];
            cout<<value<<'\n';
            break;
        }
        else {

            rem = n % arr[i];
            i++;
            check = rem * i ;
            int temp = n - check;
            value = value = n / arr[i];
            value_2 = temp / arr[i];
            if(((value * arr[i-1]) + (value_2 * arr[i])) == n) {

                //cout<<"DHISOOM\n";

                cout<<value+value_2<<'\n';
                break;
            }
            else {
                
            }
        }
    }
}