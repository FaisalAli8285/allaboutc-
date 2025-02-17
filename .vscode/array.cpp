#include <iostream>
using namespace std;

int main() {  // Ensure main function is present
    int marks[] = {34, 45, 65, 78};  // Declare the array properly
    marks[0] = 100;  // Modify first element

    for (int i = 0; i < 4; i++) {  // Correctly formatted loop
        cout << "The value at index " << i << " is " << marks[i] << "\n";
    }
    cout << "using pointers";
    int *p = marks;
    cout << "value a position 0 is " << (p);
    cout << "value a position 0 is " << *(p+1);
    cout << "value a position 0 is " << *(p+2);
    return 0; // Add return statement
}
