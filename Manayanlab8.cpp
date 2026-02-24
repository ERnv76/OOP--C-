#include <iostream>

using namespace std;

class Distance{
	int feet, inches;
	
	public:
		Distance(int,int);
		void addDistance(Distance, Distance);
		void show();
		bool isGreater(Distance);
		bool isSmaller(Distance);
		bool isGreaterEqual(Distance);
		bool isSmallerEqual(Distance);
		bool isEqual(Distance);
		bool isNotEqual(Distance);
	
};

Distance::Distance(int a = 0, int b = 0 ){
	feet = a;
	inches = b;	
}

void Distance::addDistance(Distance d1, Distance d2){
	feet = d1.feet + d2.feet;
	inches = d1.inches + d2.inches; 
	while (inches >= 12){
		inches = inches - 12;
		feet+=1;
	}			
}

void Distance::show(){
	cout<<feet<<"'"<<inches<<endl;
}

bool Distance::isGreater(Distance d){ 
 int d1, d2;
	 
	 d1 = feet*12 + inches;
	 d2 = d.feet*12 + d.inches;
	 	
	if(d1>d2)
 		return true;
 	else 
 		return false;
}

bool Distance::isSmaller(Distance d){
 int d1, d2;
	 
	 d1 = feet*12 + inches;
	 d2 = d.feet*12 + d.inches;
	 	
	if(d1<d2)
 		return true;
 	else 
 		return false;
}

bool Distance::isGreaterEqual(Distance d){
	 int d1, d2;
	 
	 d1 = feet*12 + inches;
	 d2 = d.feet*12 + d.inches;
	 	
	if(d1>=d2)
 		return true;
 	else 
 		return false;
}

bool Distance::isSmallerEqual(Distance d){
	int d1, d2;
	 
	d1 = feet*12 + inches;
	d2 = d.feet*12 + d.inches;
	 	
	if(d1<=d2)
 		return true;
 	else 
 		return false;	
}

bool Distance::isEqual(Distance d){
	int d1, d2;
	 
	d1 = feet*12 + inches;
	d2 = d.feet*12 + d.inches;
	if(d1==d2)
 		return true;
 	else 
 		return false;
}

bool Distance::isNotEqual(Distance d){
	int d1, d2;
	 
	d1 = feet*12 + inches;
	d2 = d.feet*12 + d.inches;
	 	
	if(d1!=d2)
 		return true;
 	else 
 		return false;
}

int main(){
	Distance d1(5,10), d2(1,3), d3;
	
	d3.addDistance(d1, d2);
	d3.show();
	
	if(d1.isGreater(d2))
		cout << "D1 is greater than D2\n";
	else
		cout << "D2 is greater than D1\n";

	if(d2.isSmaller(d1))
		cout << "D2 is smaller than D1\n";
	else
		cout << "D1 is smaller than D2\n";
	
	if(d1.isGreaterEqual(d2))
		cout << "D1 is greater than or equal D2\n";
	else
		cout << "D2 is greater than or equal D1\n";

	if(d2.isSmallerEqual(d1))
		cout << "D2 is smaller than or equal D1\n";
	else
		cout << "D1 is smaller than or equal D2\n";

	if(d2.isEqual(d1))
		cout << "D2 is equal D1\n";
	else
		cout << "D2 is not equal D1\n";
	
	if(d2.isNotEqual(d1))
		cout << "D2 is not equal D1\n";
	else
		cout << "D2 is equal D1\n";
	d1.addDistance(d3, d1);
	d1.show();
return 0;
}