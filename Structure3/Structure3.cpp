#include <iostream>
using namespace std;

struct AlamatDetail
{
	char Desa[20];
	char Kota[20];
};

struct Mahasiswa
{
	char NIM[12];
	char Nama[25];
	AlamatDetail Alamat;
	int Umur;
};

int main() 
{
	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "Masukan NIM: ";
		cin.getline(mhs[i].NIM,12);
		cout << "Masukan Nama: ";
		cin.getline(mhs[i].Nama, 25);
		cout << "Alamat : ";
		cout << "Masukan Desa: ";
		cin.getline(mhs[i].Alamat.Desa, 20);
		cout << "Masukan Kota: ";
		cin.getline(mhs[i].Alamat.Kota, 20);
		cout << "Masukan Umur: ";
		cin >> mhs[i].Umur;
	}
}