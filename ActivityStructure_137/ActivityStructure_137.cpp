#include <iostream>
using namespace std;

struct Mahasiswa
{
	string NIM;
	string Nama;
	string Alamat;
	int Umur;
};

int main () 
{
	Mahasiswa mhs1, mhs2;

	mhs1.NIM = "20220140137";
	mhs1.Nama = "Luthfi Angger R.";
	mhs1.Alamat = "Bogor";
	mhs1.Umur = 18;

	cout << "Masukan NIM: ";
	cin >> mhs2.NIM;
	cout << "Masukan Nama: ";
	cin >> mhs2.Nama;
	cout << "Masukan Alamat: ";
	cin >> mhs2.Alamat;
	cout << "Masukan Umur: ";
	cin >> mhs2.Umur;

	cout << "\nNIM = " << mhs1.NIM;
	cout << "\nNama = " << mhs1.Nama;
	cout << "\nAlamat = " << mhs1.Alamat;
	cout << "\nUmur = " << mhs1.Umur;

	cout << "\n\nNIM = " << mhs2.NIM;
	cout << "\nNama = " << mhs2.Nama;
	cout << "\nAlamat = " << mhs2.Alamat;
	cout << "\nUmur = " << mhs2.Umur;

}