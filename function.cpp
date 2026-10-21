#include <iostream> 
using namespace std;

//     void printGreet() {
//         int n;

//         cout << "Enter a Number: ";
//         cin >> n;

//         for (int i=0; i<n; i++){
//             cout << "Ratan Deep Mishra" << endl;
//         }
//     }

// int main () {
//     printGreet();
// }

// Write a Function to add 2 numbers.

int add(int a, int b) {
    int result = a+b;
    return result;
}

int main() {
    int a;
    cout << "Enter the value of a: " << endl;
    cin >> a;

    int b;
    cout << "Enter the value of b: " << endl;
    cin >> b;

    int sum = add(a,b);
    cout << "Addition result is: " << sum << endl;
}