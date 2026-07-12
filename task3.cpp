#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a token: ";
    cin >> ch;

    if(ch == '+')
        cout << "Arithmetic Operator";

    else if(ch == '<')
        cout << "Operator";

    else if(ch == ';')
        cout << "Separator";

    else if(ch >= '0' && ch <= '9')
        cout << "Numeric Constant";

    else if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        cout << "Identifier";

    else
        cout << "Unknown Token";

    return 0;
}
