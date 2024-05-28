#pragma once
#include <iostream>

class BMI {
private:
	double kilo;
	double boy;
public:
	BMI(); // yine bu k�sm� def olarak tan�mlad�m
	BMI(double, double); // def olarak tan�mald���n yerin yaz�draca��m bilgileri
	void setKilo(double);
	void setBoy(double);
	double getKilo();
	double getBoy();
	void printBMI();
};