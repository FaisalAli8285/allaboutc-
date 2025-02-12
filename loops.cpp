#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter a number for table : ";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << "\n";
    }
    cout << "table has printed using while loop\n";
    int j = 1;
    while (j <= 10)
    {
        
        cout << n << " * " << j << " = " << n * j << "\n";
        j++;
    }
    cout << "table has printed using do while loop\n";
    int k = 1;
    do
    {
        
        cout << n << " * " << k << " = " << n * k << "\n";
        k++;
    } while (k <= 10);

    return 0;
}
