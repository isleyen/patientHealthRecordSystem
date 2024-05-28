#include <iostream>
#include "BMI.h"

using namespace std;

// Boy-Kitle endeksi ölçeceðimiz bir alan olacak

BMI::BMI() { 
	boy = 0;
	kilo = 0;
}
BMI::BMI(double boy, double kilo) {   
	setBoy(boy);
	setKilo(kilo);
}
void BMI::setKilo(double kilo) {
	if (kilo > 0) this->kilo = kilo;
	else cerr << "Lutfen gecerli bir kilo degeri giriniz!";
}
void BMI::setBoy(double boy) {
	if (boy > 0) this->boy = boy;
	else cerr << "Lutfen gecerli bir boy degeri giriniz!";
}
double BMI::getKilo() {
	return kilo;
}
double BMI::getBoy() {
	return boy;
}
void BMI::printBMI() {
	double vucutKitleEndeksi;
	vucutKitleEndeksi = kilo / (boy * boy);

	cout << "Vucut kitle endeksi: " << vucutKitleEndeksi << endl;

	if (vucutKitleEndeksi > 0 && vucutKitleEndeksi <= 18.5)
		cout << "Zayýfsýnýz.";
	else if (vucutKitleEndeksi > 18.5 && vucutKitleEndeksi <= 24.9)
		cout << "Normal Kilodasýnýz.";
	else if (vucutKitleEndeksi > 24.9 && vucutKitleEndeksi <= 29.9)
		cout << "Kilolusunuz.";
	else if (vucutKitleEndeksi > 29.9 && vucutKitleEndeksi <= 34.9)
		cout << "Obezsiniz";
	else if (vucutKitleEndeksi > 34.9)
		cout << "Morbiz Obezsiniz";
	else
		cout << "Lutfen girdiginiz degerleri kontrol ediniz!!";
}