#include <iostream>

using namespace std;

string jawaban;
int skor = 0;
string clueNegara[4][3] = {
		{"Memiliki tradisi tur keliling kota untuk pengantin", "Memiliki jalur kereta terpanjang di dunia", "Negara terluas di dunia"},
		{"Memilik katedral tertinngi di dunia", "Dikelilingi oleh 9 negara tetangga, yaitu Austria, Perancis, Switzerland, Denmark, Belgia, Luxemburg, Belanda, Czech Republic, and Polandia", "Merupakan negara asal dari brand Adidas"},
		{"Merupakan negara paling bersih dari korupsi", "Timnas sepakbola-nya dijuluki tim dinamit", "Merupakan negara asal dari mainan lego"},
		{"Negara paling bersih di dunia", "Merupakan tempat dari markas besar FIFA dan UEFA", "Tempat dibentuknya Palang Merah Internasional"}
	};
string jawabanNegara[4] = {"Rusia", "Jerman", "Denmark", "Swiss"};
int gameOver(int i) {
	
	return i;
}
void pertanyaanNegaraA() {
	cout << "== == == == == == == == == == == == == == == == == == == == == == == == == == == == == == ==" << endl;
	cout << "== Level 1                                                                                ==" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "== == == == == == == == == == == == == == == == == == == == == == == == == == == == == == ==" << endl;
		cout << "== >> Clue ke-" << i+1 << ": " << clueNegara[0][i] << endl;
		cin.ignore();
		cout << "== >> Masukkan jawaban anda: ";
		getline(cin, jawaban);
		if (jawaban == jawabanNegara[0]) {
			cout << "== Jawaban anda benar" << endl;
			cout << "== == == == == == == == == == == == == == == == == == == == == == == == == == == == == == ==" << endl;
				if (i == 0) {
					skor += 100;
				} else if (i == 1) {
					skor += 66;
				} else if (i == 2) {
					skor += 33;
					if (jawaban != jawabanNegara[0]) {
						break;
					}
				} else {
					skor += 0;
				}
			break;
		} else {
			cout << "== Jawaban salah" << endl;
			cout << "== == == == == == == == == == == == == == == == == == == == == == == == == == == == == == ==" << endl;
		}
		cout << endl;
	}
}
void pertanyaanNegaraB() {
	cout << "== == == == == == == == == == == == == == == == == == == == == == == == == == == == == == ==" << endl;
	cout << "== Level 2                                                                                ==" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "== == == == == == == == == == == == == == == == == == == == == == == == == == == == == == ==" << endl;
		cout << "== >> Clue ke-" << i+1 << ": " << clueNegara[1][i] << endl;
		cin.ignore();
		cout << "== >> Masukkan jawaban anda: ";
		getline(cin, jawaban);
		if (jawaban == jawabanNegara[1]) {
			cout << "== Jawaban anda benar" << endl;
			cout << "== == == == == == == == == == == == == == == == == == == == == == == == == == == == == == ==" << endl;
				if (i == 0) {
					skor += 100;
				} else if (i == 1) {
					skor += 66;
				} else if (i == 2) {
					skor += 33;
				} else {
					skor += 0;
				}
			break;
		} else {
			cout << "== Jawaban salah" << endl;
			cout << "== == == == == == == == == == == == == == == == == == == == == == == == == == == == == == ==" << endl;
		}
		cout << endl;
	}
}
void pertanyaanNegaraC() {
	cout << "== == == == == == == == == == == == == == == == == == == == == == == == == == == == == == ==" << endl;
	cout << "== Level 3                                                                                ==" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "== == == == == == == == == == == == == == == == == == == == == == == == == == == == == == ==" << endl;
		cout << "== >> Clue ke-" << i+1 << ": " << clueNegara[2][i] << endl;
		cin.ignore();
		cout << "== >> Masukkan jawaban anda: ";
		getline(cin, jawaban);
		if (jawaban == jawabanNegara[2]) {
			cout << "== Jawaban anda benar" << endl;
			cout << "== == == == == == == == == == == == == == == == == == == == == == == == == == == == == == ==" << endl;
				if (i == 0) {
					skor += 100;
				} else if (i == 1) {
					skor += 66;
				} else if (i == 2) {
					skor += 33;
				} else {
					skor += 0;
				}
			break;
		} else {
			cout << "== Jawaban salah" << endl;
			cout << "== == == == == == == == == == == == == == == == == == == == == == == == == == == == == == ==" << endl;
		}
		cout << endl;
	}
}
void pertanyaanNegaraD() {
	cout << "== == == == == == == == == == == == == == == == == == == == == == == == == == == == == == ==" << endl;
	cout << "== Level 4                                                                                ==" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "== == == == == == == == == == == == == == == == == == == == == == == == == == == == == == ==" << endl;
		cout << "== >> Clue ke-" << i+1 << ": " << clueNegara[3][i] << endl;
		cin.ignore();
		cout << "== >> Masukkan jawaban anda: ";
		getline(cin, jawaban);
		if (jawaban == jawabanNegara[3]) {
			cout << "== Jawaban anda benar" << endl;
			cout << "== == == == == == == == == == == == == == == == == == == == == == == == == == == == == == ==" << endl;
				if (i == 0) {
					skor += 100;
				} else if (i == 1) {
					skor += 66;
				} else if (i == 2) {
					skor += 33;
				} else {
					skor += 0;
				}
			break;
		} else {
			cout << "== Jawaban salah" << endl;
			cout << "== == == == == == == == == == == == == == == == == == == == == == == == == == == == == == ==" << endl;
		}
		cout << endl;
	}
}
main()
{
	int kategori; 
	char pertanyaan, ulang;

	do {
		cout << "Permainan Tebak-tebakan" << endl;
		cout << "Pilihan kategori: " << endl;
		cout << "1. Negara" << endl;
		cout << "2. Hewan" << endl;
		cout << ">> Pilih kategori: (1/2)";
		cin >> kategori;

		enum option {NEGARA = 1, HEWAN};
		switch (kategori) {
			case NEGARA:
				system("cls");
				//cout << ">> Pilih pertanyaan (A/B/C/D)" << endl;
				//cout << ">> pertanyaan: ";
				//cin >> pertanyaan;
				//if (pertanyaan == 'a' || pertanyaan == 'A') {
					pertanyaanNegaraA();
					cin.ignore();
					system("cls");
				//} else if (pertanyaan == 'b' || pertanyaan == 'B') {
					pertanyaanNegaraB();
					cin.ignore();
					system("cls");
				//} else if (pertanyaan == 'c' || pertanyaan == 'C') {
					pertanyaanNegaraC();
					cin.ignore();
					system("cls");
				//} else if (pertanyaan == 'd' || pertanyaan == 'D') {
					pertanyaanNegaraD();
					cin.ignore();
					cout << endl;
					cout << "Score akhir: " << skor;	
				//}
		}
		cin.ignore();
		cout << "\n>> Apa anda ingin mengulang? (Y/N)";
		cin >> ulang;
		cin.ignore();
	} while (ulang == 'Y' || ulang == 'y');
	cout << "Program Selesai" << endl;
}
