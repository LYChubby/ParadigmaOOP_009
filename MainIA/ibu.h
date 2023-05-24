#ifndef IBU_H
#define IBU_H

class ibu {
public:
	string nama;
	vector<anak*> daftar_anak;

	ibu(string pNama) :nama(pNama) {
		cout << "Ibu \n"" << nama << "\" Ada\n";
	}

	~ibu() {
		cout << "Ibu \"" << nama << "\" Tidak Ada\";
	}

	void tambahAnak(anak*);
	void cetakAnak();
};

