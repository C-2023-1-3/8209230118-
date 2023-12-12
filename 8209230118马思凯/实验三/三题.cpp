#include <iostream>
#include "mytemperature.h"
int main() {
	std::cout << "Celsius     Fahrenheit       |       Fahrenheit     Celsius" << std::endl;
	for (double cel = 40.0; cel >= 31; cel--) {
		std:: cout << cel << "          " << celsius_to_fah(cel) << "           |            " << celsius_to_fah(cel) + 10 << "           " << fahrenheit_to_cels(celsius_to_fah(cel) + 10) << std::endl;
	}

	return 0;
}



		
