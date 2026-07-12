#include <iostream>
using namespace std;

int main()
{
    char token[20];

    cout << "Enter a token: ";
    cin >> token;

    if(token[0] >= '0' && token[0] <= '9')
        cout << "Integer Constant";

    else if(token[0] == '+' || token[0] == '-' || token[0] == '*' ||
            token[0] == '/' || token[0] == '%' || token[0] == '=')
        cout << "Operator";

    else if(token[0] == '"')
        cout << "String Literal";

    else if(token[0] == '<')
        cout << "Insertion Operator";

    else if(token[0] == ';')
        cout << "Separator";

    else if(token[0] == 'c')
        cout << "Identifier (cout)";

    else if(token[0] == 'e')
        cout << "Keyword (endl)";

    else
        cout << "Unknown Token";

    return 0;
}
