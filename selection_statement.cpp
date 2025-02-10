#include<iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    if((age<18)&&(age>0)){
         cout << "you can use kid voucher" << endl;
    }
    else if(age>18){
        cout << "you can use adult voucher" << endl;
    }
    else{
        cout << "you are not born yet" << endl;
    }
    return 0;
}
