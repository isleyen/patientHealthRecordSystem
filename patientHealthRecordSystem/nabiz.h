#pragma once
#include <iostream>
class nabiz {
private:
	int dogumTarihiGun;
	int dogumTarihiAy;
	int dogumTarihiYil;
public:
	nabiz(); // defult olarak tanýmlýyorum bu kýsmý
	nabiz(int, int, int);
	void setGun(int);
	void setAy(int);
	void setYil(int);
	int getGun();
	int getAy();
	int getYil();
	int getYas();
	void getHedefNabiz();
	int getMaksimumNabiz();
	void printNabiz();

};