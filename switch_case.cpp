#include<iostream>
using namespace std;
int main()
{
    int age;
    cout << "ENter your age : ";
    cin >> age;
    switch(age){
        case 18:
            cout << "you're 18";
            break;
            case 22:
            cout << "you're 22";
            break;
            case 2:
            cout << "you're 2";
            break;
            default:
                cout << "No special case";
            }
    return 0;
}
