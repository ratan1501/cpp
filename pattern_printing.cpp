#include <iostream>
using namespace std;

// pattern printing (triangle)
// int main() {
//     for (int i=1; i<=5; i++){
//         for (int j=1; j<=i; j++) {
//             cout << " * ";
//         }
//         cout << endl; 
//     }
// }

// printing solid rectangle (user input)

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


int main (){
    int n;
    cout << "Enter a Number for print pattern: ";
    cin >> n;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++){
            cout << " * ";
        }
        cout << endl;
    }
}




