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
	cout << "\n\tMasukan Desa: ";
	cin >> mhs.Alamat.Desa;
	cout << "\tMasukan Kota: ";
	cin >> mhs.Alamat.Kota;
	cout << "Masukan Umur: ";
	cin >> mhs.Umur;

	cout << "\n\nNIM = " << mhs.NIM;
	cout << "\nNama = " << mhs.Nama;
	cout << "\nDesa = " << mhs.Alamat.Desa;
	cout << "\nKota = " << mhs.Alamat.Kota;
	cout << "\nUmur = " << mhs.Umur;
}