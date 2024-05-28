#pragma once
#include <iostream>

class BMI {
private:
	double kilo;
	double boy;
public:
	BMI(); // yine bu kýsmý def olarak tanýmladým
	BMI(double, double); // def olarak tanýmaldýðýn yerin yazýdracaðým bilgileri
	void setKilo(double);
	void setBoy(double);
	double getKilo();
	double getBoy();
	void printBMI();
};