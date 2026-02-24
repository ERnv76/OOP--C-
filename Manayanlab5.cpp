/* 
NAME: Vern Andre A. Manayan 
*/
#include<iostream>
using namespace std;

class Rectangle{
 
	
	double length = 1;
	double width = 1;
	double sum;
	
	public:			
		double getLength(void){
			return length;
		}
		
		double getWidth(void){
			return width;
		}
		
		void setLength(double len){
			if(len >= 0.0 && len <20.0)
				length = len;
			else
				cout << "invalid value" <<endl;
		}
		
		void setWidth(double wid){
			if(wid >= 0.0 && wid <20.0)
				width = wid;
			else 
				cout << "invalid value" <<endl;
		}
		
		double perimeter(void){
			sum = length+width;
			return 2*sum ; 
		}
		
		double area(void){
			return width*length;
			
		}
};


int main(){
	Rectangle r1, r2;
	
	cout << r1.getLength() << endl; //outputs 1
	cout << r1.getWidth() << endl; //outputs 1
	
	cout << r1.area() << endl; //outputs 1
	cout << r1.perimeter() << endl; //outputs 4
	

	r2.setLength(20.0); //outputs invalid value
	r2.setWidth(-1.0); //outputs invalid value
	
	r2.setLength(2.0); 
	r2.setWidth(1.0) ;
	
	cout << r2.area() << endl; //outputs 2
	cout << r2.perimeter() << endl; //outputs 6
	
//	cout << r1.length() << endl; //compile error
//	cout << r1.width() << endl; //compile error
	
	return 0;
}