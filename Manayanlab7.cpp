#include <iostream>
using namespace std;

class Heater { 
	int temperature, min, max, increment;
 	
 	public:
 		Heater(int cool, int warm)
		{
			min=cool;
			max=warm;
 			temperature = 15;
 			increment = 5;  
		}
		
 		int getTemperature()
		{ 
			return temperature;
		}
		
		setIncrement(int set)
		{
			if (set >= 0)
				increment = set;
			else 
				cout<< "value cannot be negative" << endl;	
		}
			
		int warmer()
		{ 
			if (temperature + increment >= max)
				cout << "Exceeds Max temp!" << endl; 
				
			else
				temperature += increment; 
				 	
		}
		
		int cooler()
		{ 
			if (temperature - increment < min )
				cout << "Below Min temp!" << endl;
			else
				temperature -= increment; 	
		}
};

int main() {
	Heater h1(10, 31);
	
	cout << h1.getTemperature() << endl; //display 15
	h1.warmer();
	cout << h1.getTemperature() << endl; //display 20
	h1.warmer();
	h1.warmer();
	cout << h1.getTemperature() << endl; //display 30
	h1.warmer();
	cout << h1.getTemperature() << endl;//display 30
	h1.cooler();
	cout << h1.getTemperature() << endl; //display 25
	h1.cooler();
	h1.cooler();
	cout << h1.getTemperature() << endl; //display 15
	h1.cooler();
	cout << h1.getTemperature() << endl; //display 10
	h1.cooler();
	cout << h1.getTemperature() << endl; //display 10
	h1.setIncrement(-5); // negative value
	h1.setIncrement(20);
	h1.warmer();
	cout << h1.getTemperature() << endl; //display 30
	//h1.temperature = 35; // compile error
	//h1.increment = 20;
}