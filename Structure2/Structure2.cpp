#include <iostream>
using namespace std;

struct AlamatDetail
{
	string Desa;
	string Kota;
};
struct Mahasiswa
{
	string NIM;
	string Nama;
	AlamatDetail Alamat;
	int Umur;
};

int main()
{
	Mahasiswa mhs;

	cout << "Masukan NIM: ";
	cin >> mhs.NIM;
	cout << "Masukan Nama: ";
	cin >> mhs.Nama;
	cout << "Masukan Alamat: ";
	cout << "\tDesa: ";
	cin >> mhs.Alamat.Desa;
	cout << "\tKota: ";
	cin >> mhs.Alamat.Kota;
	cout << "Masukan Umur: ";
	cin >> mhs.Umur;
}