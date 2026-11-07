#include <iostream>
using namespace std;

int main () {
    int arr [12];

    cout << "Enter a value for Array: " << endl;
    for(int i=0; i<12; i++) {
        cin >> arr[i];
    }
    cout << "Array element are: " << endl;
    for(int i=0; i<12; i++) {
        cout << arr[i] * 2 << " ";
    }

    return 0;
}

