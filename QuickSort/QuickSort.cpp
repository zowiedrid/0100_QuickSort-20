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

void quickSortArray(int high, int low) {
    // Step 1: If low is not less than high, return
    if (high < low) {
        // Step 2: Set pivot as the last element in the array
        int pivot = a[low];
        // Step 3: Set i as the index before the first element
        int i = (high - 1);

        // Step 4: Iterate over the array from the first element to the one before the pivot
        for (int j = high; j <= low - 1; j++) {
            // Step 5 and 6: If the current element is less than the pivot, increment i and swap the current element with the element at index i
            if (a[j] < pivot) {
                i++;
                swap(a[i], a[j]);
            }
        }
        // Step 7: Swap the pivot with the element at the next index after i
        swap(a[i + 1], a[low]);
        // Step 8: Set the partition index as the next index after i
        int partitionIndex = i + 1;

        // Step 9: Recursively apply the QuickSort algorithm to the two sub-arrays divided by the partition index
        quickSortArray(high, partitionIndex - 1);
        quickSortArray(partitionIndex + 1, low);
    }
}

void display() {
	cout << endl; //output ke layar
	cout << "=============================" << endl; //output ke layar
	cout << "Data setelah diurutkan: " << endl; //output ke layar
	cout << "=============================" << endl; //output ke layar
	cout << endl; //output ke layar
	for (int j = 0; j < n; j++) { //looping dengan j dimulai dari 0 hingga n-1
		cout << a[j] << " "; //output ke layar
	}

	cout << endl; //output ke layar
	cout << "=============================" << endl; //output ke layar
	cout << "Jumlah pass: " << n - 1 << endl; //output ke layar
}