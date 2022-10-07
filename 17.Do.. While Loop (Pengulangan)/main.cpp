#include <iostream>

//Do.. While / Pengulangan. Metode pengulangan ini,akan dijalankan terlebih dahulu setidaknya 1 kali baru dilakukan pengecekan
//Jika parameter/syarat salah tetap akan dijalankan setidaknya 1 kali,lalu pengulangan berhenti.

using namespace std;

int main() {
	
	int a = 1; //Contoh jika salah beri nilai 11 untuk (a).
	
	do{
		cout << "Angka--> ";
		cout << a << endl;
		a++;
		
	}while (a <= 10);
	
	
	cout << "\n";
	cout << "Akhir baris dari angka" << endl;
	
	cin.get();
	return 0;
}
