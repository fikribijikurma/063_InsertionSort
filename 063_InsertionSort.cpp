#include <iostream>
using namespace std;


int arr[12];
int i, n, temp, j;

void insertionsort() {


    for (i = 1; i <= n - 1; i++)
    { // step 1
        temp = arr[i]; //step 2
        j = i - 1; // step 3
        while (j >= 0 && arr[j] > temp) // step 4
        {
            arr[j + 1] = arr[j];
            j = j - 1; // step 4b
        }
        arr[j + 1] = temp; // step 5

        for (int k = 0; k < n; k++) {
            cout << arr[k] << " "; // menampilkan data pada number of pass

        }
    }

}
void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "=================================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j]; // menampilkan array
		if (j < n - 1) {
			cout << " ===>";
		}
	}
	cout << endl;
	cout << endl;

	cout << " jumlah pass = " << n - 1 << endl; // menampilkan jumlah dari pass
	cout << endl;
	cout << endl;
}




