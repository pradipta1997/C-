#include <iostream>
#include <cmath>

//Fungsi / Function / Metode Matematika Pada C++.

/*
library cmath : referensi www.cppreference.com

	ceil(x)			<--	Pembulatan ke atas
	cos(x)			<--	Consinus
	exp(x)			<--	Eksponen
	fabs(x)			<--	Nilai absolut dalam float
	floor(x)		<--	Pembulatan ke bawah
	fmod(x)			<--	Modulus dalam float
	log(x)			<--	Logaritma dengan basis natural
	log10(x)		<--	Logaritma dengan basis 10
	pow(x,y)		<--	x pangkat y
	sin(x)			<--	Sinus
	sqrt(x)			<--	Akar kuadrat
	tan(x)			<--	Tangen
*/

using namespace std;

int main() {
	
	int x;
	
	cout << "Menghitung akar dari x : ";
	cin >> x;
	
	
	double y = sqrt(x);
	cout << "Akarnya adalah : " << y << endl;
	
	cin.get();
	return 0;
}
