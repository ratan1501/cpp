#include <iostream>
using namespace std;

// int main() {
//     int arr [] = {1,2,3,4,5,6,7,8,9};
//     int size = 9;
//     int key = 5;

//     bool check = 0;

//     for (int i=0; i<size; i++) {
//         if(arr[i] == key) {
//             check = 1;
//             break;
//         }
//     }

//     if(check) 
//         cout << "Present" << endl;
//     else
//         cout << "Absent" << endl;
//    return 0;
// }


// Find an element 
// int main() {
//     int arr [] = {10, 20, 30, 40, 50};
//     int size = 5;
//     int target = 30;
//     bool check = 0;

//     for(int i=0; i<size; i++) {
//         if(arr[i] == target) {
//             check = 1;
//             cout << "Element is present in Index: " << i;
//             break;
//         }
//     }

//     if (check == 0) {
//         cout << "Element is not present";
//     }
//    return 0;
// }


// Find Numbers of 0s and 1s
int main () {
    int arr[] = {1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1,};
    int size = 11;
    int storeOnes = 0;
    int storeZeros = 0;

    for (int i=0; i<size; i++) {
        if(arr[i] == 1) {
            storeOnes++;
        }
        else {
            storeZeros++;
        }
    }
    cout << "Ones: " << storeOnes << endl;
    cout << "Zeros: " << storeZeros << endl;
}