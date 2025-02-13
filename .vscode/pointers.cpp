#include<iostream>
using namespace std;

int main(){
    int a=30;
    int *b = &a;  //&use to store address
    cout << "b"<<b<<endl;  // print address stored in b
    cout
        << "*b"<<*b; //dereferencing print value stored at b * use to print value
    int **c = &b;    // use to store addres of pointer variable
    cout << "addres of a "<<&a<<endl;
    cout << "value at a "<<&a<<endl;
    cout << "addres of b "<<b<<endl;
    cout << "value at b "<<*b<<endl;
    cout << "addres of c "<<c<<endl;
    cout << "value at c "<<**c<<endl;
    int x = 5;
    int y = x;
    int &z =x;
    //reference variabe
    cout << "addres af x "<<&x<<endl;
    cout << "addres of y "<<&y<<endl;
    cout << "addres of z "<<&z<<endl;
    return 0;
}