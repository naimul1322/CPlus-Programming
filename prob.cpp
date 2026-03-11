#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int moves = (n + m - 1) / m;


    cout << moves << endl;

    return 0;
}

