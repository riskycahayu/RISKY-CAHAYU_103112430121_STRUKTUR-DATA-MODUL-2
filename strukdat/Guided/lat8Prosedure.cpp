// Risky Cahayu 
// 103112430121

#include <iostream>
using namespace std;

//Prototype Prosedur
void tulis(int x);

int main() {
    int jum;
    cout << "Jumlah baris kata = ";
    cin >> jum;
    tulis(jum);
    return 0;
}

//Badan Prosedur
void tulis(int x) {
    for (int i = 0; i < x; i ++) {
        cout << "Baris ke-" << i + 1 << endl;
    }
}