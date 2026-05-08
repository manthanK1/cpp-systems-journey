#include <iostream>


int main () {
   double temp;
   char unit;

   std::cout<<"*****************Temperature Converter******************" << std::endl;
   std::cout<<"F=ahrenheit, C=Celsius, K=Kelvin" << std::endl;
    std::cout<<"enter the temperature value: ";
    std::cin >> temp;
    std::cout<<"enter the unit (F/C/K): ";
    std::cin >> unit;

if (unit == 'F' || unit == 'f') {   
    double celsius = (temp - 32) * 5.0 / 9.0;
    double kelvin = celsius + 273.15;

    std::cout << "temperature in Celsius: " << celsius << " °C" << std::endl;
    std::cout << "temperature in Kelvin: " << kelvin << " K" << std::endl;
}
else if (unit == 'C' || unit == 'c') {
    double fahrenheit = (temp * 9.0 / 5.0) + 32;
    double kelvin = temp + 273.15;

    std::cout << "temperature in Fahrenheit: " << fahrenheit << " °F" << std::endl;
    std::cout << "temperature in Kelvin: " << kelvin << " K" << std::endl;
}
else if (unit == 'K' || unit == 'k') {
    double celsius = temp - 273.15;
    double fahrenheit = (celsius * 9.0 / 5.0) + 32;

    std::cout << "temperature in Celsius: " << celsius << " °C" << std::endl;
    std::cout << "temperature in Fahrenheit: " << fahrenheit << " °F" << std::endl;
}
else {
    std::cout<<"error: invalid unit entered."<<std::endl;

    

}
}