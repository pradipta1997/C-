#include <iostream>

//Latihan Fibonacci Deret Angka

using namespace std;

int main() {
	
	//f_n = f_n1 + f_n2
	
	int n;
	int f_n;
	int f_n1;
	int f_n2;
	
	cout << "Program Deret Angka Fibonacci" << endl;
	cout << "Silahkan Mausukan Nilai Ke-n : ";
	cin >> n;
	
	f_n1 = 1;
	f_n2 = 2;
	f_n = f_n1 + f_n2;
	
	cout << f_n1 << " ";
	cout << f_n << " ";
	
	for(int i = 1; i < n; i++){
		
		f_n = f_n1 + f_n2;
		f_n2 = f_n1;
		f_n1 = f_n;
		
		cout << f_n << " ";
	}
	
	cout << "\n";
	
	cin.get();
	return 0;
}
