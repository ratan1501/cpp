int main() {
    int n, row, col;

    cout << "Enter a number: ";
    cin >> n;

    // Upper half
    for(row = 0; row < n; row++) {

        // spaces
        for(col = 0; col < n - row - 1; col++) {
            cout << " ";
        }

        // stars / inner spaces
        for(col = 0; col < 2 * row + 1; col++) {
            if(col == 0 || col == 2 * row) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }

        cout << endl;
    }
    // Lower half
    for(row = 0; row < n - 1; row++) {

        // spaces
        for(col = 0; col < row + 1; col++) {
            cout << " ";
        }

        // stars / inner spaces
        for(col = 0; col < 2 * n - 2 * row - 3; col++) {
            if(col == 0 || col == 2 * n - 2 * row - 4) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}