
#include <iostream>
using namespace std;

// Pass by Value

// void change(int x) {
//     x = 99;
//     cout << "Inside function: " << x << endl;
// }

// int main() {
//     int a = 10;
//     change(a);
//     cout << "Outside function: " << a << endl;

//     return 0;
// }


// Pass by Reference

void change(int &x) {
    x = 50;
    cout << "Inside function: " << x << endl;
}

int main() {
    int a = 10;

    change(a);

    cout << "Outside function: " << a << endl;

    return 0;
}
