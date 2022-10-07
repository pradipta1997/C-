#include <iostream>

//Latihan Membuat Segitiga Siku-Siku dengan Berbagai Macam Pola dan Metode.

using namespace std;

int main() {
	
	int n;
	
	cout << "Masukan Nilai Panjang Pola : ";
	cin >> n;
	cout << "-------------------------------" << endl;
	
	
	cout << "Pola 1 \n";
	
	for(int i = 1; i <= n; i++){
		
		for(int j = 1; j <= i; j++){
			
			cout << "*";
		}
		
		cout << endl;
	}
	
	
	cout << "-------------------------------" << endl;
	
	
	cout << "Pola 2 \n";
	
	for(int i = 1; i <= n; i++){
		
		for(int j = n; j >= i; j--){
			
			cout << "*";
		}
		
		cout << endl;
	}
	
	
	cout << "-------------------------------" << endl;
	
	
	cout << "Pola 3 \n";
	
	for(int i = 1; i <= n; i++){
		
		for(int j = 1; j < i; j++){
			
			cout << " ";
		}
		
		for(int k = n; k >= i; k--){
			
			cout << "*";
		}
		
		cout << endl;
	}
	
	
	cout << "-------------------------------" << endl;
	
	
	cout << "Pola 4 \n";
	
	for(int i = 1; i <= n; i++){
		
		for(int j = n; j > i; j--){
			
			cout << " ";
		}
		
		for(int k = 1; k <= i; k++){
			
			cout << "*";
		}
		
		cout << endl;
	}
	
	
	cout << "-------------------------------" << endl;
	
	
	cout << "Pola 5 \n";
	
	for(int  i = 1; i <= n; i++){
		
		for(int j = n; j > i; j--){
			
			cout << " ";
		}
		
		for(int k = 1; k <= (2*i - 1); k++){
			
			cout << "*";
		}
		
		cout << endl;
	}
	
	
	cout << "-------------------------------" << endl;
	
	
	cout << "Pola 6 \n";
	
	for(int i = 1; i <= n; i++){
		
		for(int j = 1; j < i; j++){
			
			cout << " ";
		}
		
		for(int k = n; k >= (2*i - n); k--){
			
			cout << "*";
		}
		
		cout << endl;
	}
	
	
	cout << "-------------------------------" << endl;
	
	
	cout << "Pola 7 \n";
	
	for(int  i = 1; i <= n; i++){
		
		for(int j = n; j > i; j--){
			
			cout << " ";
		}
		
		for(int k = 1; k <= (2*i - 1); k++){
			
			cout << "*";
		}
		
		cout << endl;
	}
	
	
	for(int i = 2; i <= n; i++){
		
		for(int j = 1; j < i; j++){
			
			cout << " ";
		}
		
		for(int k = n; k >= (2*i - n); k--){
			
			cout << "*";
		}
		
		cout << endl;
	}
	
	
	cout << "-------------------------------" << "\n\n" << endl;
	

	cout << "Tekan Tombol Enter 1X Untuk Keluar" << endl;
	
	cin.get();
	return 0;
}
