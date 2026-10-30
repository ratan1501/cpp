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


// sum of all even numbers from 2 to n

// int getEvenSum(int n) {
//     cout << "inside getEvenSum Function " << endl;
//     cout << "value of n is " << n << endl;

//     int sum = 0;
//     cout << "Initial value of sum is " << sum << endl;
//     for (int i = 2; i<=n; i= i+2) {
//         cout << "For value of i: " << i << endl;
//         sum = sum + i;
//         cout << "sum now become: " << sum << endl;
//     }
//     cout << "returing sum = " << sum << endl;
//     return sum;
// }


// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     int result = getEvenSum(n);

//     cout << "Final sum is: " << result << endl;
//     return 0;
// }

//     cout << "Final sum is: " << result << endl;
//     return 0;
// }



// area of triangle

// double getTriangleArea(int length , int breadth) {
//     double area = 0.5 * length * breadth;
//     return area;
// }


// int main () {
//     double length, breadth;
//     cout << "Enter the Length: ";
//     cin >> length;
//     cout << "Enter the breadth: ";
//     cin >> breadth;
//     double result = getTriangleArea(length, breadth);
//     cout << "Area is : " << result << endl;
//     return 0;
// }

// // Number is odd or even 

// void evenOdd(int n) {
//     if(n % 2 == 0) {
//         cout << "The given number is even";
//     }
//     else {
//         cout << "The given number is odd";
//     }
// }

// int main () {
//     cout << "Enter a Number: "; 
//     int n;
//     cin >> n;
//     evenOdd(n);
//     return 0;
// }

// Find the factorial

// int getFactorial(int n) {
//     int final = 1;
//     for (int i = 1; i<=n; i++) {
//         final = final*i;
//     }
//     return final;
// }

// int main () {
//     cout << "Enter a Number: ";
//     int n;
//     cin >> n;
//     cout << "The Factorial of " << n << " is: " << getFactorial(n);
//     return 0;
// }

// Check Number is prime or not

// bool getPrime(int n) {
//     if (n <= 1) {
//         return false;
//     }
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     if (getPrime(n)) {
//         cout << "The Number is Prime.";
//     }
//     else {
//         cout << "The Number is not Prime.";
//     }
//     return 0;
// }
