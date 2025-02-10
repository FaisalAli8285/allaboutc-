#include<iostream>
using namespace std;
int b = 10;
int main()
{
    int a, b, c;
    cout << "Enter the value of a b c" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    int sum = a + b;
    cout << "sum of "<<a<< "and" <<b<< "is" << sum<< endl;
    cout << "sum of "<<a<< "and" <<::b<< "is" <<a+::b<< endl;
    cout << "size of of "<<sizeof(34.4)<<endl<< "size of" <<sizeof(34.4f)<< endl;
    float val1= 34.4;
    long double val2= 34.4;
    cout << "size of "<<sizeof(val1)<<endl<< "size of" <<sizeof(val2)<< endl;
    // reference variable
    int x = 455;
    int &y = x;
    y = 66;
    cout << x;
    cout << y;
    //typecasting
    int ab = 45;
    float ac = 23.99;
    cout << ab + int(ac);
    cout << ab + ac;
    return 0;
}
