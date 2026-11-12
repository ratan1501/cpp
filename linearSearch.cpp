#include <iostream>
#include <climits>
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
// int main () {
//     int arr[] = {1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1,};
//     int size = 11;
//     int storeOnes = 0;
//     int storeZeros = 0;

//     for (int i=0; i<size; i++) {
//         if(arr[i] == 1) {
//             storeOnes++;
//         }
//         else {
//             storeZeros++;
//         }
//     }
//     cout << "Ones: " << storeOnes << endl;
//     cout << "Zeros: " << storeZeros << endl;
// }

// Maximum number in an Array
// int main () {
//     int arr [] = {12, 34, 63, 11, 10, 54, 32, 90, 111, 83, 579, 239};
//     int size = 11;
//     int limit = INT_MIN;
//     int highest = 0;

//     for(int i=0; i<size; i++) {
//         if(arr[i] > limit) {
//             limit = arr[i];
//         }
//     }
//     cout << "The Highest Number in Array is: " << limit << endl;
// }

// Extreme Print in Array
// int main() {
//     int arr[] = {10, 20, 30, 40, 50, 60, 70};
//     int size = 7;

//     int start = 0;
//     int end = size - 1;

//     while (true){
//         if (start > end) {
//             break;
//         }
//         if(start == end) {
//             cout << arr[start] << " ";
//         }
//         else {
//             cout << arr[start] << " ";
//             cout << arr[end] << " ";
//         }
//         start++;
//         end--;
//         }
//     return 0;
// }

// Reverse an Array
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;

    int start = 0;
    int end = size-1;

    while (start<=end) {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }

    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}