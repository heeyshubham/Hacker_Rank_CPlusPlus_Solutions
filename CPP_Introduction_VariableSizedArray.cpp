#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, q, size, x, y;
    cin >> n >> q;
    vector<vector<int>> a;

    // Resize the vector to have 'n' rows
    a.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> size;

        // Resize the current row to have 'size' columns
        a[i].resize(size);

        for (int j = 0; j < size; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < q; i++) {
        cin >> x >> y;

        // Check if x and y are within valid indices
        if (x >= 0 && x < n && y >= 0 && y < a[x].size()) {
            cout << a[x][y] << endl;
        } 
    }
    return 0;
}
