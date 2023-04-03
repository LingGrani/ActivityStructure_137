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
		cout << "\n\tMasukan Desa: ";
		cin.getline(mhs[i].Alamat.Desa, 20);
		cout << "\tMasukan Kota: ";
		cin.getline(mhs[i].Alamat.Kota, 20);
		cout << "Masukan Umur: ";
		cin >> mhs[i].Umur;
		cin.ignore(1, '\n');
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "\n\nNIM = " << mhs[i].NIM;
		cout << "\nNama = " << mhs[i].Nama;
		cout << "\nDesa = " << mhs[i].Alamat.Desa;
		cout << "\nKota = " << mhs[i].Alamat.Kota;
		cout << "\nUmur = " << mhs[i].Umur;
	}
}