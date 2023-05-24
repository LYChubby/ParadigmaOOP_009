#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien {
public:
	string nama;
	vector<dokter*> daftar_dokter;
	pasien(string pNama) :nama(pNama) {
		cout << "Pasien \"" << nama << "\" ada\n";
	}

	~pasien() {
		cout << "Pasien \"" << nama << "\" Tidak Ada\n";
	}

	void tambahDokter(dokter*);
	void cetakDokter();
};

class dokter {
public:
	string nama;
	vector<pasien*> daftar_pasien;

	dokter(string pNama) :nama(pNama) {
		cout << "Dokter \"" << nama << "\" Ada\n";
	}

	~dokter() {
		cout << "Dokter \"" << nama << "\" Tidak Ada\n";
	}

	void tambahPasien(pasien*);
	void cetakPasien();
};