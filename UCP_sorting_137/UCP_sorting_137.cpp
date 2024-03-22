// muh akmal/20230140137
// 1.Algoritma Insertion Sort merupakan salah satu algoritma pengurutan data yang relatif sederhana dan mudah dipahami. Algoritma ini bekerja dengan cara menyisipkan elemen data satu per satu ke dalam posisi yang tepat pada array yang sudah terurut sebagian.
// 2.Algoritma Selection Sort merupakan salah satu algoritma pengurutan data yang relatif sederhana dan mudah dipahami. Algoritma ini bekerja dengan cara menemukan elemen minimum dalam array dan menukarnya dengan elemen pertama. Kemudian proses ini diulang untuk menemukan elemen minimum berikutnya dan menukarnya dengan elemen kedua dan seterusnya.
// 3.analisis kompleksitas waktu, dengan mengetahui kompleksi waktu kita dapat memperkirakan berapa banyak langkah dibutuhkan algoritma unruk menyelesaikan pengurutan data. mensimulasikan algoritma,melihat  bagaimana jumlah langkahnya berubah dengan berbagai jenis data. menghitung jumlah oprasi dasar. menganalisis kompleksitas waktu, mensimulasikan algoritma, atau menghitung jumlah operasi dasar.
// 4.
#include <iostream>
using namespace std;

int mal[37];
int n;

void input() {
    while (true) {
        cout << "Masukkan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 37)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 37 elemen.\n";
        }
    }
    cout << endl;
    cout << "======================" << endl;
    cout << "Masukkan  Elemen Array" << endl;
    cout << "======================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> mal[i];
    }
}

void selectionSort() {
    for (int j = 0; j < n - 1; j++) {
        int min_index = j;
        for (int i = j + 1; i < n; i++) {
            if (mal[i] < mal[min_index]) {
                min_index = i;
            }
        }
        int temp = mal[j];
        mal[j] = mal[min_index];
        mal[min_index] = temp;
    }
}

void display() {
    cout << endl;
    cout << "====================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "====================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << mal[j];
        if (j < n - 1) {
            cout << " --> ";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;
}

int main() {
    input();
    selectionSort();
    display();

    system("pause");
    return 0;
}






