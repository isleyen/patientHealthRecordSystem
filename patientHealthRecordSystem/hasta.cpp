#include <iostream>
#include "hasta.h"

using namespace std;

int hasta::hastaSayi = 0;

hasta::hasta() {
	// def olarak atatýðým þeyler
	hastaSayi++; // burada da default olarak tanýmlamak zorundayým
	girisTarihiGun = 0;
	girisTarihiAy = 0;
	girisTarihiYil = 0;
}
hasta::hasta(int dogumGun, int dogumAy, int dogumYil, std::string isim, std::string soyisim, int girisGun, int girisAy, int girisYil, double boy, double kilo)
	: insan(isim,soyisim), nabiz(dogumGun, dogumAy, dogumYil), BMI(boy,kilo)
{
	hastaSayi++;
	setGirisGun(girisGun);
	setGirisAy(girisAy);
	setGirisYil(girisYil);
}
void hasta::setGirisGun(int gun) {
	if (gun > 0 && gun <= 31) this->girisTarihiGun = gun;
	else cerr << "Lutfen gecerli gün degeri giriniz!";
}
void hasta::setGirisAy(int ay) {
	if (ay > 0 && ay <= 12) this->girisTarihiAy = ay;
	else cerr << "Lutfen gecerli ay degeri giriniz!";
}
void hasta::setGirisYil(int yil) {
	if (yil > 0 && yil <= 2024) this->girisTarihiYil = yil;
	else cerr << "Lutfen gecerli bir yil degeri giriniz!";
}
int hasta::getGirisGun() {
	return girisTarihiGun;
}
int hasta::getGirisAy() {
	return girisTarihiAy;
}
int hasta::getGirisYil() {
	return girisTarihiYil;
}
void hasta::printHasta() {
	cout << "--------------------HASTA KAYIT--------------------" << endl;
	cout << "Hasta Giris Tarihi: " << getGirisGun() << "/" << getGirisAy() << "/" << getGirisYil() << endl;
	printInsan();
	printNabiz();
	printBMI(); cout << endl;

	cout << "Guncel Hasta Sayisi: " << hastaSayi << endl << endl;
}