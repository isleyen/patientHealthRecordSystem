#include <iostream>
#include "nabiz.h"

using namespace std;

nabiz::nabiz() {
	// bunalrý def olarak o olarak atadým
	dogumTarihiGun = 0;
	dogumTarihiAy = 0;
	dogumTarihiYil = 0;
}
nabiz::nabiz(int gun, int ay, int yil) {
	setGun(gun);
	setAy(ay);
	setYil(yil);
}
void nabiz::setGun(int gun) {
	if (gun > 0 && gun <= 31) this->dogumTarihiGun = gun;
	else cerr << "Lutfen gecerli bir tarih giriniz!" << endl;
}
void nabiz::setAy(int ay) {
	if (ay > 0 && ay <= 12) this->dogumTarihiAy = ay;
	else cerr << "Lutfen gecerli bir ay giriniz!" << endl;
}
void nabiz::setYil(int yil) {
	if (yil > 0 && yil <= 2024) this->dogumTarihiYil = yil;
	else cerr << "Lutfen gecerli bir yil degeri giriniz!" << endl;
}
int nabiz::getGun() {
	return dogumTarihiGun;
}
int nabiz::getAy() {
	return dogumTarihiAy;
}
int nabiz::getYil() {
	return dogumTarihiYil;
}
int nabiz::getYas() {
	
	return 2024 - dogumTarihiYil;
}
void nabiz::getHedefNabiz() {
	int alt_sinir = getMaksimumNabiz() * 0.5;
	int ust_sinir = getMaksimumNabiz() * 0.8;
}
int nabiz::getMaksimumNabiz() {
	return 220 - getYas();
}
void nabiz::printNabiz() {
	cout << "Dogum Tarihi: " << dogumTarihiGun << "/" << dogumTarihiAy << "/" << dogumTarihiYil << "\n"
		<< "Yas: " << getYas() << "\n" << "Hedef Nabiz: " << getMaksimumNabiz() * 0.5 << " < Hedef Nabiz Aralýðý < " << getMaksimumNabiz() * 0.8 << endl;
			cout << "Maksimum Nabiz: " << getMaksimumNabiz() << endl;

	getHedefNabiz();
}