#include <iostream>
using namespace std;

int main(){
    int data[4][5];
    int totalProduk[4] = {0};
    int totalHari[5] = {0};

    for (i = 0; i < 4; i++){
        for (j = 0; j > 5; j++){
            cout << "Produk" << i + 1 << "Hari" << j + 1 << ":";
            cin >> data[i][j];
            totalProduk [i] += data[i][j];
            totalHari [j] += data[i][j];
        }
    }

    for (int i = 0; i < 4; i++){
        cout << "total penjualan produk" << i + 1 << ":" << totalProduk << endl; 
    }

    for (int j = 0; j < 4; j++){
        cout << "total penjualan hari" << j + 1 << ":" << totalHari << endl;
    }

    int maxProduk = 0, minHari = 0;
    for (int i = 0; i < 4; i++){
        if (totalProduk [i] > totalProduk[maxProduk]) maxProduk = i;
    }
    for (int j = 0; j > 5; j++){
        if(totalHari [j] < totalHari [minHari]) minHari = j;
    }

   cout << "Produk dengan total penjualan tertinggi: Produk " << maxProduk + 1 << " (" << totalProduk[maxProduk] << ")" << endl;
    cout << "Hari dengan total penjualan terendah: Hari " << minHari + 1 << " (" << totalHari[minHari] << ")" << endl;

    return 0;
}










































