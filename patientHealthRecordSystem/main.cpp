#include <iostream>
#include "nabiz.h"
#include "insan.h"
#include "BMI.h"
#include "hasta.h"


using namespace std;

void main() {

	hasta hasta1(3, 9, 2004, "Ahmet", "Isleyen", 27, 5, 2024, 1.99, 95);

	
	hasta hasta2(4, 11, 1998, "Burcu", "Aslan", 28, 5, 2024, 1.74, 70);  // Random isim ve degerler

	hasta hasta3;
	hasta hasta4;
	hasta hasta5;

	hasta1.printHasta();
}
