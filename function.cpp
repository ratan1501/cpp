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
// void coutPrint(int n) {
//     for(int i=0; i<=n; i++) {
//         cout << i << " ";
//     }
//     cout << endl;
// }

// int main () {
//     int n;
//     cout << "Enter the value of n: "  << endl;
//     cin >> n;

//     coutPrint(n);

//     return 0;
// }

// Students & Grade Problem
// char getGrade (int marks) {
//     switch (marks/10) {
//         case 10 : return 'A'; break;
//         case 9 : return 'B'; break;
//         case 8 : return 'C'; break;
//         case 7 : return 'D'; break;
//         case 6 : return 'E'; break;
//         default : return 'F';
//     }
// }

// int main () {
//     int marks;
//     cout << "Enter the number: " <<endl;
//     cin >> marks;

//     cout << "Grade:" << getGrade(marks) << endl;
//     return 0;
// }

// Sum of Even number upto N

// int getEven(int n) {
//     int sum = 0;
//     for (int i=2; i<=n; i+=2) {
//         sum = sum + i;
//     }
//     return sum;
// }


// int main () {   
//     int n;
//     cout << "Enter the value of n: " << endl;
//     cin >> n;

//     int ans = getEven(n);
//     cout << "Sum upto " << n << " is " << ans << endl;
//     return 0;
// }


// of tutorial

int getEvenSum(int n) {
    cout << "inside getEvenSum Function " << endl;
    cout << "value of n is " << n << endl;

    int sum = 0;
    cout << "Initial value of sum is " << sum << endl;
    for (int i = 2; i<=n; i= i+2) {
        cout << "For value of i: " << i << endl;
        sum = sum + i;
        cout << "sum now become: " << sum << endl;
    }
    cout << "returing sum = " << sum << endl;
    return sum;
}


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = getEvenSum(n);

    cout << "Final sum is: " << result << endl;
    return 0;
}