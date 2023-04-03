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
	cout << "Masukan Alamat: \n";
	cout << "\tDesa: ";
	cin >> mhs.Alamat.Desa;
	cout << "\tKota: ";
	cin >> mhs.Alamat.Kota;
	cout << "Masukan Umur: ";
	cin >> mhs.Umur;

	cout << "\nNIM = " << mhs.NIM;
	cout << "\nNama = " << mhs.Nama;
	cout << "\nAlamat Desa = " << mhs.Alamat.Desa;
	cout << "\nAlamat Kota = " << mhs.Alamat.Kota;
	cout << "\nUmur = " << mhs.Umur;
}