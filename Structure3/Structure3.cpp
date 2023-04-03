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
