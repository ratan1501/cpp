#include <iostream>
using namespace std;

// print 3 table
// int main () {
//     for(int i=1; i<=10; i++) {
//         cout << 3 * i << endl;
//     }
// }

// print odd number
// int main() {
//     for(int i=1; i<=5; i =i+2){
//         cout<< i << endl;
//     }
// }

// // print a number from 1 to 100
// int main() {
//     for(int i=1; i<=100; i++){
//         cout << i << endl;
//     }
// }


// // print 100 numbers from 100 to 1
// int main (){
//     for (int i=100; i>=1; i--) {
//         cout << i << endl;
//     }
// }

// // multiple conditions in loops

// int main (){
//     for(int i=5; (i>=5 && i<=10); i++) {
//         cout << i << endl;
//     }
// }

// infinite loop
int main (){
    int i = 0;
    for (; ;){
        if (i<5){
            cout << i << endl;
            i++;
        }
    }
}