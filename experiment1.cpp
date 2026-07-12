1. #include <iostream>
using namespace std;

int main()
{
    char str[100];
    bool flag = true;

    cout << "Enter input: ";
    cin >> str;

    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]<'0' || str[i]>'9')
        {
            flag = false;
            break;
        }
    }

    if(flag)
        cout << "Numeric Constant";
    else
        cout << "Not Numeric Constant";

    return 0;
}




2. #include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter expression: ";
    cin >> str;

    int count = 1;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]=='+' || str[i]=='-' || str[i]=='*' ||
           str[i]=='/' || str[i]=='%' || str[i]=='=')
        {
            cout << "Operator " << count << " : " << str[i] << endl;
            count++;
        }
    }

    if(count==1)
        cout << "No Operator Found";

    return 0;
}




3. #include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter comment: ";
    cin.getline(str,100);

    if(str[0]=='/' && str[1]=='/')
        cout<<"Single Line Comment";

    else if(str[0]=='/' && str[1]=='*')
        cout<<"Multi Line Comment";

    else
        cout<<"Not a Comment";

    return 0;
}




4. #include <iostream>
using namespace std;

int main()
{
    char str[100];
    bool flag = true;

    cout << "Enter Identifier: ";
    cin >> str;

    if(!((str[0]>='A' && str[0]<='Z') ||
         (str[0]>='a' && str[0]<='z') ||
         str[0]=='_'))
    {
        flag = false;
    }

    for(int i=1; str[i]!='\0'; i++)
    {
        if(!((str[i]>='A' && str[i]<='Z') ||
             (str[i]>='a' && str[i]<='z') ||
             (str[i]>='0' && str[i]<='9') ||
             str[i]=='_'))
        {
            flag = false;
            break;
        }
    }

    if(flag)
        cout << "Valid Identifier";
    else
        cout << "Invalid Identifier";

    return 0;
}


5. #include <iostream>
using namespace std;

int main()
{
    int n,a[100];
    float sum=0;

    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter elements:\n";

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    cout<<"Average = "<<sum/n;

    return 0;
}


6. #include <iostream>
using namespace std;

int main()
{
    int n,a[100];

    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter elements:\n";

    for(int i=0;i<n;i++)
        cin>>a[i];

    int min=a[0];
    int max=a[0];

    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];

        if(a[i]>max)
            max=a[i];
    }

    cout<<"Minimum = "<<min<<endl;
    cout<<"Maximum = "<<max;

    return 0;
}


7. #include <iostream>
using namespace std;

int main()
{
    char first[50], last[50];

    cout << "Enter First Name: ";
    cin >> first;

    cout << "Enter Last Name: ";
    cin >> last;

    cout << "Full Name = ";

    for(int i=0; first[i]!='\0'; i++)
        cout << first[i];

    cout << " ";

    for(int i=0; last[i]!='\0'; i++)
        cout << last[i];

    return 0;
}
