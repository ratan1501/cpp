#include <iostream>
using namespace std;

// Triangle Pattern Printing int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << " * ";
//         }
//         cout << endl;
//     }
// }

// Solid Rectangle using User Input
//     OUTER : i = 0 INNER : j = 0 → print *INNER : j = 1 → print *INNER : j = 2 → print *INNER : j = 3 → STOP
// main()
    // {
    //     int n;
    //     cout << "Enter a Number: ";
    //     cin >> n;

    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             cout << " * ";
    //         }
    //         cout << endl;
    //     }
    // }

    // Hollow Rectangle 
    // int main()
    // {
    //     int n;
    //     for (int row = 0; row < 3; row++)
    //     {
    //         if (row == 0 || row == 2)
    //         {
    //             for (int i = 0; i < 5; i++)
    //             {
    //                 cout << "* ";
    //             }
    //         }
    //         else
    //         {
    //             cout << "* ";
    //             for (int i = 0; i < 3; i++)
    //             {
    //                 cout << "  ";
    //             }
    //             cout << "* ";
    //         }
    //         cout << endl;
    //     }
    // }

    // Hollow Rectangle using User Input

    //     int
    //     main()
    // {
    //     int rowCount, colCount;
    //     cout << "Enter the number of rows: ";
    //     cin >> rowCount;
    //     cout << "Enter the number of coloumn: ";
    //     cin >> colCount;

    //     for (int row = 0; row < rowCount; row++)
    //     {
    //         if (row == 0 || row == rowCount - 1)
    //         {
    //             for (int col = 0; col < colCount; col++)
    //             {
    //                 cout << "* ";
    //             }
    //         }
    //         else
    //         {
    //             cout << "* ";
    //             for (int i = 0; i < colCount - 2; i++)
    //             {
    //                 cout << "  ";
    //             }
    //             cout << "* ";
    //         }
    //         cout << endl;
    //     }
    // }

    // hollow rectangle

    //     int
    //     main()
    // {
    //     int n;
    //     for (int row = 0; row < 3; row++)
    //     {
    //         if (row == 0 || row == 2)
    //         { // For each row, decide whether it should be a completely filled row or a hollow row.
    //             for (int i = 0; i < 5; i++)
    //             { // prints 5 starts
    //                 cout << "* ";
    //             }
    //         }
    //         else
    //         {
    //             cout << "* ";
    //             for (int i = 0; i < 3; i++)
    //             {
    //                 cout << "  ";
    //             }
    //             cout << "* ";
    //         }
    //         cout << endl;
    //     }
    // }

    // Half Pyramid int main()
    // {
    //     int n;
    //     cout << "Enter a number: ";
    //     cin >> n;
    //     for (int row = 0; row < n; row++)
    //     {
    //         for (int col = 0; col < row + 1; col++)
    //         {
    //             cout << " *";
    //         }
    //         cout << endl;
    //     }
    // }

    // Inverted Half Pyramid int main()
    // {
    //     int n;
    //     cout << "Enter the number: ";
    //     cin >> n;
    //     for (int row = 0; row < n; row++)
    //     {
    //         for (int col = 0; col < n - row; col++)
    //         {
    //             cout << "* ";
    //         }
    //         cout << endl;
    //     }
    // }

    // increasing numbers triangle int main()
    // {
    //     int n;
    //     cout << "Enter a number: ";
    //     cin >> n;

    //     for (int row = 0; row < n; row++)
    //     {
    //         for (int col = 0; col <= row; col++)
    //         {
    //             cout << col + 1;
    //         }
    //         cout << endl;
    //     }
    // }

    // decreasing numbers triangle int main()
    // {
    //     int n;
    //     cout << "Enter a number: ";
    //     cin >> n;
    //     for (int row = 0; row < n; row++)
    //     {
    //         for (int col = 0; col < n - row; col++)
    //         {
    //             cout << col + 1;
    //         }
    //         cout << endl;
    //     }
    // }

// Hollow Inverted half Pyramid
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i==0 || j ==0 || j== n-i-1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}