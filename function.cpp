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

// int add(int a, int b) {
//     int result = a+b;
//     return result;
// }

// int main() {
//     int a;
//     cout << "Enter the value of a: " << endl;
//     cin >> a;

//     int b;
//     cout << "Enter the value of b: " << endl;
//     cin >> b;

//     int sum = add(a,b);
//     cout << "Addition result is: " << sum << endl;
// }


// Find max of 3 numbers

// int findMax (int num1, int num2, int num3) {
//     if(num1 > num2 && num1 > num3) {
//         return num1;
//     }
//     else if (num2 > num1 && num2 > num3) {
//         return num2;
//     }
//     else {
//         return num3;
//     }
// }

// int main() {
//     int a, b, c;
//     cout << "Enter First Number: ";
//     cin >> a;
//     cout << "Enter Second Number: ";
//     cin >> b;
//     cout << "Enter Third Number: ";
//     cin >> c;
//     int maximunNumber = findMax(a, b, c);
//     cout << "Maximum Number is: "<< maximunNumber << endl;
// }


// Counting from 1 to N

void coutPrint(int n) {
    for(int i=0; i<=n; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main () {
    int n;
    cout << "Enter the value of n: "  << endl;
    cin >> n;

    coutPrint(n);

    return 0;
}















