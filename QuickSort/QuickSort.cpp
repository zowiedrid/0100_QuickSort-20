#include <iostream>
using namespace std;

int a[10]; // batas elemen array
int n; // elemen array

void input() {
	while (true) {
		cout << "Masukkan jumlah data: "; //output ke layar
		cin >> n; //input dari user
		if (n <= 10) { //jika n kurang dari sama dengan 10
			break; //keluar dari loop
		}
		else {
			cout << "Jumlah data tidak boleh lebih dari 10" << endl; //output ke layar
		}
	}

	cout << endl; //output ke layar
	cout << "=============================" << endl; //output ke layar
	cout << "Masukkan data: " << endl; //output ke layar
	cout << "=============================" << endl; //output ke layar

	for (int i = 0; i < n; i++) { //looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << i + 1 << ": "; //output ke layar
		cin >> a[i]; //input dari user
	}
}