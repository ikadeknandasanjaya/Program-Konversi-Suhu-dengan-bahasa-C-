#include <iostream>

using namespace std;

int main()
{

	// Deklarasi inputan Celcius, Reamur dan Fahrenheit
	float c, r, f;

	// Judul program
	cout << "PROGRAM C++ KONVERSI SUHU" << endl;

	// Pemrosesan program
	cout << "Masukan Suhu Celsius : ";
	cin >> c;
	f = c * 1.8 + 32;
	r = c * 0.8;
	cout << endl;
	cout << "Hasil Konversi Suhu dari Celsius ke:" << endl;
	cout << "Fahrenheit : " << f << endl;
	cout << "Reamur    : " << r << endl;

	return 0;
}