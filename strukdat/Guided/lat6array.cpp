// Risky Cahayu 
// 103112430121

#include <iostream>
#define MAX 5 //ukuran array ditetapkan sebagai

using namespace std;

int main() {
    int i, j;
    float nilai[MAX]; //Array 1 dimensi
    static int nilai_tahun[MAX] [MAX] = { //Array 2 dimensi
        {0,2,2,0,0},
        {0,1,1,0,0},
        {0,3,3,0,0},
        {4,4,0,0,4},
        {5,0,0,0,5}
};

//Input data array 1 dimensi
    cout << "=== Input Nilai Siswa ===\n";
    for (i = 0; i < MAX; i++) {
        cout << "Masukkan nilai ke-" << i + 1 
        << ": ";
        cin >> nilai[i];
    }

// Menampilkan isi array 1 dimensi
    cout << "\n=== Data NIlai Siswa ===\n";
    for (i = 0; i < MAX; i++) {
        cout << "Nilai ke-" << i + 1 << " = "
        << nilai[i]
        << endl;
    }

// Menampilkan isi array 2 dimensi
    cout << "\n=== Nilai Tahunan ===\n";
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            cout << nilai_tahun[i][j] << " ";
         }
         cout << endl;
    }

    return  0;
}