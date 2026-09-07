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

// printing rectangle (pattern)
int main() {
    for(int i=0; i<3; i++) {
        for(int j=0; j<5; j++){
            cout << "* ";
        }
        cout << endl;
    }
}