#pragma once
#include <iostream>

class BMI {
private:
	double kilo;
	double boy;
public:
	BMI(); // yine bu kısmı def olarak tanımladım
	BMI(double, double); // def olarak tanımaldığın yerin yazıdracağım bilgileri
	void setKilo(double);
	void setBoy(double);
	double getKilo();
	double getBoy();
	void printBMI();
};