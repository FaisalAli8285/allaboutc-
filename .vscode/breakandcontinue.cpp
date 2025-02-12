#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 10; i++){
        if (i==3){
            //when i=3 it will exit the lopop
            break;
        }
        cout << i;
        
    }
    cout << "\ncontinue\n";
    for (int i = 0; i < 10; i++)
    {
        if (i==3){
            //when i=3 it skip the particular iteration
            continue;
        }
        cout << i;
    }

    return 0;
}