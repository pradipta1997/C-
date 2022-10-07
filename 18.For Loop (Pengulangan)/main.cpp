#include <iostream>

//For / Pengulangan. Metode pengulanan ini akan berisi (Inisialisasi -> Assignment/Deklarasi -> Increment/Decrement)

using namespace std;

int main() {
	
	cout << "LOOP 1 \n\n";
	
	for(int i = 1; i <= 10; i++){
		
		cout << "Looping ke : " << i << endl;
	}
	
	cout << "------------------------------" << endl;
	
	cout << "LOOP 2 \n\n";
	
	for(int i = 1; i <= 10; i += 2){
		
		cout << "Looping ke : " << i << endl;
	}
	
	cout << "------------------------------" << endl;
	
	cout << "LOOP 3 \n\n";
	
	for(int i = 0; i >= -10; i--){
		
		cout << "Looping ke : " << i << endl;
	}
	
	cout << "------------------------------" << endl;
	
	cout << "LOOP 4 \n\n";
	
	int total = 0;
	for(int i = 1; i <= 10; i++, total += i){
		
		cout << "Looping ke : " << i << " || " << "Total : " << total << endl;   //Total akan ditambahkan dari hasil angka looping.
	}
	
	cout << "------------------------------" << endl;
	
	cin.get();
	return 0;
}
