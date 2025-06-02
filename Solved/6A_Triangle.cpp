#include <iostream>


using namespace std;

int main()
{

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a <= 100 and b <= 100 and c <= 100 and d <= 100)
    {
        if (((a + b > c) && (a + c > b) && (b + c > a)) || ((a + c > d) and (a + d > c) and (c + d >a)) || ((b + c > d) && (b + d > c) && (c + d > b)) || ((a + b > d) && (a + d > b) && (b + d > a)))
        {
            cout << "TRIANGLE\n";
        }   
        else if (((a + b == c) || (a + c == b) || (b + c == a)) || ((a + c == d) || (a + d == c) || (c + d == a)) || ((b + c == d) || (b + d == c) || (c + d == b)) || ((a + b == d) || (a + d == b) || (b + d == a)))
        {
            cout << "SEGMENT\n";
        }
        else
        {
            cout << "IMPOSSIBLE\n";
        }
    }
    return 0;
}
//NOTES:
/*

Condition for non-degenerated triangle: a + b > c, a + c > b, b + c > a
Condition for degenerated triangle: a + b = c, b + c = a, a + c = b

*/