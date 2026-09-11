#include <iostream>
using namespace std;

// Triangle Pattern Printing
// int main() {
//     for (int i=1; i<=5; i++){
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

int main (){
    int rowCount, colCount;
    cout << "Enter the number of rows: ";
    cin >> rowCount;
    cout << "Enter the number of coloumn: ";
    cin >> colCount;

    for (int row=0; row<rowCount; row++){
        if(row==0 || row == rowCount-1) {
            for(int col=0; col<colCount; col++) {
                cout << "* ";
            }
        }
        else{
            cout << "* ";
            
            for(int i=0; i<colCount-2; i++) {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
    
}