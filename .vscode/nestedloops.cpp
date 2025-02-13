#include<iostream>
using namespace std;

int main(){
    // for rows
    for (int i = 0; i < 5; i++)
    {
        // for columns
        for (int j = 0; j < 5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
// shape 2
for (int i = 0; i <= 5; i++)
    {
        // for columns
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // print counting
    for (int i = 1; i <= 5; i++)
    {
        // for columns
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    // reverse
    for (int i = 0; i <=5 ; i++)
    {
        // for columns
        for (int j = 5; j >= i; j--)
        {
            cout << j;
        }
        cout << endl;
    }
 
    return 0;
}
    

