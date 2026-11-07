#include <iostream>
using namespace std;
// Program to input n elements into an array and print double of each element.
int main() {
    int arr[500];
    int n;
    cout << "How many numbers you want to add in array" << endl;

    cin >> n;
    cout << "Enter the numbers: " << endl;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "Doubles of the given numbers: ";

    for (int i=0; i<n; i++) {
        cout << 2 * arr[i] << " ";
    }
}
 

// print all element as 1 

// int main () {
//     int arr [8] = {12, 34, 45, 57, 73, 94, 34, 66};

//     for (int i=0; i<8; i++) {
//         arr[i] = 1;
//     }
//     for (int i=0; i<8; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
//  }

// Using fill() to initialize all array elements with 1

int main () {
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 

    fill(arr, arr+9, 1);
    
    for(int i=0; i<9; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}