#include <iostream>
using namespace std;

class Heater { 
	int temperature;
 
 	public:
 		Heater()
		{
 			temperature = 15;
		}
 		int getTemperature()
		{ 
			return temperature;
		}
			
		int warmer()
		{ 
			return temperature += 5; 	
		}
		
		int cooler()
		{ 
			return temperature -= 5;   
		}
};

int main() {
	Heater h1;
	
	cout << h1.getTemperature() << endl; //display 15
	h1.warmer();
	cout << h1.getTemperature() << endl; //display 20
	h1.warmer();
	h1.warmer();
	cout << h1.getTemperature() << endl; //display 30
	h1.cooler();
	cout << h1.getTemperature() << endl; //display 25
	h1.cooler();
	h1.cooler();
	cout << h1.getTemperature() << endl; //display 15
	
	//h1.temperature = 35; // compile error
}