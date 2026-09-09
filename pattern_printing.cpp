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
int main () {
    int n;
    cout << "Enter the number for printing stars: ";
    cin >> n;

    for (int i=0; i<n; i++){ 
        for(int j=0; j<n; j++) {
            cout << " *";
        }
        cout << endl;
    }
}