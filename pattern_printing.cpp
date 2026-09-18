#include <iostream>
using namespace std;

// Triangle Pattern Printing
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i=1; i<=n; i++){
//         for (int j=1; j<=i; j++) {
//             cout << " * ";
//         }
//         cout << endl;
//     }
// }

// Solid Rectangle using User Input
// OUTER: i = 0
//     INNER: j = 0 → print *
//     INNER: j = 1 → print *
//     INNER: j = 2 → print *
//     INNER: j = 3 → STOP

//     endl

// OUTER: i = 1
//     INNER: j = 0 → print *
//     INNER: j = 1 → print *
//     INNER: j = 2 → print *
//     INNER: j = 3 → STOP

//     endl

// OUTER: i = 2
//     INNER: j = 0 → print *
//     INNER: j = 1 → print *
//     INNER: j = 2 → print *
//     INNER: j = 3 → STOP

//     endl

// OUTER: i = 3 → STOP

// int main() {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n; j++) {
//             cout << " * ";
//         }
//         cout << endl;
//     }
// }

// Hollow Rectangle
// int main(){
//     int n;
//     for(int row=0; row<3; row++) {
//         if (row==0 || row==2){
//             for(int i=0; i<5 ; i++) {
//                 cout << "* ";
//             }
//         }
//         else {
//             cout << "* ";
//             for(int i=0; i<3; i++) {
//                 cout << "  ";
//             }
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// Hollow Rectangle using User Input

// int main (){
//     int rowCount, colCount;
//     cout << "Enter the number of rows: ";
//     cin >> rowCount;
//     cout << "Enter the number of coloumn: ";
//     cin >> colCount;

//     for (int row=0; row<rowCount; row++){
//         if(row==0 || row == rowCount-1) {
//             for(int col=0; col<colCount; col++) {
//                 cout << "* ";
//             }
//         }
//         else{
//             cout << "* ";
//             for(int i=0; i<colCount-2; i++) {
//                 cout << "  ";
//             }
//             cout << "* ";
//         }
//         cout << endl;
//     }

// }

// hollow rectangle

// int main(){
//     int n;
//     for(int row=0; row<3; row++) {
//         if (row==0 || row==2){  //For each row, decide whether it should be a completely filled row or a hollow row.
//             for(int i=0; i<5 ; i++) { // prints 5 starts
//                 cout << "* ";
//             }
//         }
//         else {
//             cout << "* ";
//             for(int i=0; i<3; i++) {
//                 cout << "  ";
//             }
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// Inverted Half Pyramid
// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     for(int row=0; row<n; row++){
//         for(int col=0; col < n-row; col++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// increasing triangle
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     for(int row = 0; row < n; row++) {
//         for(int col = 0; col <= row; col++) {
//             cout << col + 1;
//         }
//         cout << endl;
//     }
// }

// decreasing triangle
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for(int row=0; row<n; row++) {
//         for(int col=0; col<n-row; col++) {
//             cout << col + 1 ;
//         }
//         cout << endl;
//     }
// }

// full pyramid and inverted full pyramid

// multiple of two numbers

// int main()
// {
//     int firstNum;
//     cout << "Enter First Number: ";
//     cin >> firstNum;
//     int secNum;
//     cout << "Enter Second Number: ";
//     cin >> secNum;

//     int multi = firstNum * secNum;

//     cout << multi;
// }

// Find the perimenter of a triangle 
// int main() {
//     int a;
//     cout << "Enter a: ";
//     cin >> a;
//     int b;
//     cout << "Enter b: ";
//     cin >> b;
//     int c;
//     cout << "Enter c: ";
//     cin >> c;

//     int perimeter = a + b + c;
//     cout << "Your Perimeter is: " << perimeter ;
// }

// Simple intrest

// int main() {
//     int p, r, t;
//     cout << "Enter p: ";
//     cin >> p;
//     cout << "Enter r: ";
//     cin >> r;
//     cout << "Enter t: ";
//     cin >> t;

//     int si = (p*r*t) / 100;
//     cout << "simple intrest is: " << si;
// }

// Print couting from 1 to N
// int main() {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for(int i=0; i<n; i++) {
//         cout << i;
//         cout << endl;
//     }
// }

// Print counting from N to 1
int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    for(int i=n; i>=1; i--) {
        cout << i;
        cout << endl;
    }
}