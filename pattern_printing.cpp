#include <iostream>
using namespace std;

// Triangle Pattern Printing
// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// Solid Rectangle using User Input
// int main()
// {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// Hollow Rectangle
// int main()
// {
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
// int main()
// {
//     int rowCount, colCount;
//     cout << "Enter the number of rows: ";
//     cin >> rowCount;
//     cout << "Enter the number of coloumn: ";
//     cin >> colCount;
//
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

// Hollow Rectangle
// int main()
// {
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

// Half Pyramid
// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < row + 1; col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// Inverted Half Pyramid
// int main()
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

// Increasing Numbers Triangle
// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col <= row; col++)
//         {
//             cout << col + 1;
//         }
//         cout << endl;
//     }
// }

// Decreasing Numbers Triangle
// int main()
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

// Hollow Inverted Half Pyramid
// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i == 0 || j == 0 || j == n - i - 1)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
// }

// Full Pyaramid
// int main() {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for (int row=0; row<n; row++) {
//         //space
//         for(int col=0; col<n-row-1; col++) {
//             cout << " ";
//         }
//         //stars
//         for(int col=0; col<row+1; col++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// Inverted Full Pyramid
// int main() {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for(int row=0; row<n; row++) {
//         //space
//         for(int col=0; col<row; col++) {
//             cout << " ";
//         }
//         // stars
//         for(int col=0; col<n-row; col++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// Solid Diamond
int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    for (int row=0; row<n; row++) {
        //space
        for(int col=0; col<n-row-1; col++) {
            cout << " ";
        }
        //stars
        for(int col=0; col<row+1; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    for(int row=0; row<n; row++) {
        //space
        for(int col=0; col<row; col++) {
            cout << " ";
        }
        // stars
        for(int col=0; col<n-row; col++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Hollow Full Pyramid
// int main()
// {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         int k = 0;

//         for (int j = 0; j < 2 * n - 1; j++)
//         {
//             if (j < n - i - 1)
//             {
//                 cout << " ";
//             }
//             else if (k < 2 * i + 1)
//             {
//                 if (k == 0 || k == 2 * i || i == n - 1)
//                 {
//                     cout << "*";
//                 }
//                 else
//                 {
//                     cout << " ";
//                 }
//                 k++;
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
// }
