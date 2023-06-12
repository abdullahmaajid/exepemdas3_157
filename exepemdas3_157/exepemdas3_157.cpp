#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;														// variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() {												// constructor
		x = 0;
	}
	virtual void input() {}										// fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { return 0; }						// fungsi untuk menghitung luas
	virtual float keliling(int a) { return 0; }					// fungsi untuk menghitung keliling
	void setX(int a) {											// fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() {												// fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran : public bidangDatar {							/*lengkapi disini*/ //membuat class lingkaran dari turunan bidang datar
public:															// membuat akses modifier public
	void input() {												// menambahkan metod input
		cout << "Bangun Datar Lingkaran telah dibuat";			// menampilkan bahwa progam lingkaran telah dibuat
		cout << "\nMasukkan Jejari Lingkaran  : ";				// menampilkan jumlah jejari yang akan dimasukkan
		int r;													// r = jejari
		cin >> r;												// input jejari yang akan dimasukkan
		setX(r);												// masukkan fungsi get(x) / mencari x berdasarkan r = jejari
	}

	float Luas() {												// membuat fungsi luas
		int r = getX();											// r = fungsi get x
		return 3.14 * r * r;									// mengembalikan fungsi get(x) menjadi rumus luas lingkaran = pi x r^2
	}

	float Keliling() {											// membuat fungsi keliling
		int r = getX();											// r = fungsi get(x)
		return 2 * 3.14 * r;									// mengembalikan fungsi get(x) menjadi rumus keliling lingkaran = 2 x pi x r
	}
};

class Bujursangkar :public bidangDatar {						/*lengkapi disini*/ // membuat class bujur sangkar dari turunan bidang datar
public:															// membuat modifier public
	void input() {												// membuat fungsi input
		cout << "\nBangun Datar Bujursangkar telah dibuat";		// menampilkan bahwa bujur sangkar telah dibuat
		cout << "\nMasukkan Sisi Bujursangkar : ";				// menampilkan panjang sisi yang akan diinput
		int s;													// s = sisi
		cin >> s;												// masukkan panjang sisi yang akan diinput
		setX(s);												// masukkan fungsi get(x) / mencari x berdasarkan s = sisi
	}

	float Luas() {												// membuat fungsi luas
		int s = getX();											// mencari x berdasarkan s = sisi
		return s * s;											// mengembalikan fungsi get(x) menjadi rumus luas bujur sangkar s x s = sisi x sisi
	}

	float Keliling() {											// membuat fungsi keliling
		int s = getX();											// mencari x berdasarkan s = sisi
		return 4 * s;											// mengembalikan fungsi get(x) menjadi rumus keliling bujur sangkar 4 x s = 4 x sisi
	}
};

int main() { /*lengkapi disini*/
	cout << "------------------------------------------------------------------------------" << endl;
	cout << "Progam Bidang Datar : Menghitung Keliling dan Luas Lingkaran dan Bujur Sangkar" << endl;
	cout << "------------------------------------------------------------------------------" << endl;
	cout << "\n";

	Lingkaran lingkaran;										// memanggil/membuat kelas lingkaran dan membuat variabel lingkaran
	lingkaran.input();											// memanggil input dari variabel lingkaran
	cout << "Luas Lingkaran             : " << lingkaran.Luas() << endl;
	cout << "Keliling Lingkaran         : " << lingkaran.Keliling() << endl;
																// menampilkan luas dan keliling lingkaran dengan memanggil variabelnya

	Bujursangkar bujursangkar;									// memanggil/membuat kelas bujur sangkar  dan membuat variabel bujur sangkar
	bujursangkar.input();										// memanggil input dari variabel lingkaran
	cout << "Luas Bujursangkar          : " << bujursangkar.Luas() << endl;
	cout << "Keliling Bujursangkar      : " << bujursangkar.Keliling() << endl;
																// menampilkan luas dan keliling bujur sangkar dengan memanggil variabelnya

	return 0;
}

