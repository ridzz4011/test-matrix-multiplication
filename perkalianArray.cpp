#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;
    bool valid = true;

    while (valid) {
        cout << "Masukkan jumlah baris dan kolom dari Matrix pertama: " ;
        cin >> r1 >> c1;

        cout << "Masukkan jumlah baris dan kolom dari Matrix kedua: ";
        cin >> r2 >> c2;

        // Cek apakah kolom dari array pertama sama dengan baris array kedua
        if (c1 != r2) {
            cout << "Baris dan Kolom dari kedua Matrix berbeda!!\n\n" ;
            system("pause");
            system("CLS");
        } else {
            valid = false; // Jika tidak maka akan keluar dari loop
        }
        
    }

    // Memasukkan nilai ke array 2D pertama
    cout << endl << "Element dari Matrix pertama:" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Element dari a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    // Memasukkan nilai ke array 2D kedua
    cout << endl << "Element dari Matrix kedua:" << endl;
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Element dari b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

    // Menyiapkan array baru dengan nilai 0 untuk hasil perkalian nanti
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            mult[i][j] = 0;
        }

    // Mengkalikan kedua array pertama dan kedua lalu menyimpan hasilnya di array yang tadi dibuat
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }

    // Print output hasil perkalian tadi
    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c2; ++j)
    {
        cout << " " << mult[i][j];
        if(j == c2-1)
            cout << endl;
    }

    return 0;
}