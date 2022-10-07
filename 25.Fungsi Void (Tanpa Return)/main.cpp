#include <iostream>

//Fungsi Void (Tanpa Fungsi Return)

using namespace std;


//Reporter
int kuadrat(int x){ // Fungsi Kembalian
	int y;
	y = x * x;
	return y;
}


//Worker
void tampilkan(int input){ //Fungsi Tanpa Kembalian
	cout << "Menampilkan dengan void --> ";
	cout << input << endl;
}


int main() {
	
	int input,hasil,a,b,hasil2;
	cout << "Nilai kuadrat dari: ";
	cin >> input;
	cout << "\n";
	
	hasil = kuadrat(input);
	tampilkan(hasil);
	
	cin.get();
	return 0;
}
