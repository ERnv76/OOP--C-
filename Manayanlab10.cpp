#include <iostream>

using namespace std;

class Distance{
	int feet, inches;
	
	
	public:
		Distance operator+(const Distance&);
		Distance operator-(const Distance&);
		bool operator>(const Distance&);
		bool operator<(const Distance&);
		bool operator>=(const Distance&);
		bool operator<=(const Distance&);
		bool operator==(const Distance&);
		Distance();
		Distance(int, int);
		void show();
};

Distance::Distance(){
 	feet = 1;
	inches = 1; 	
}

Distance::Distance(int a, int b ):feet(a), inches(b){

}

void Distance::show(){
	cout<<feet<<"'"<<inches<<"\""<<endl;
}

Distance Distance :: operator+(const Distance& Dist){
	Distance obj;
	obj.feet = this->feet + Dist.feet;
	obj.inches = this->inches + Dist.inches;
	while (obj. inches >  12 ){ 
		obj. inches -= 12;
		obj. feet+=1;
	}
	return obj;
}

Distance Distance :: operator-(const Distance& Dist){
	Distance obj;
	
	if(this->feet < Dist.feet){
		obj.feet= Dist.feet - this->feet;
		obj.inches = Dist.inches - this->inches;
	}
	else{ 
	 	obj.feet= this->feet - Dist.feet;
		obj.inches = this->inches - Dist.inches;
	}

		
	while (obj.inches<0){
 		obj.feet -=1;
 		obj.inches +=12;
	 }
	 
	return obj;
}

bool Distance :: operator>(const Distance& Dist){
	int d1, d2;
	
	d1 = this->feet*12 + this->inches;
	d2 = Dist.feet*12 + Dist.inches;
	
	if ( d1 > d2)
		return true;
	else
		return false;
}

bool Distance :: operator<(const Distance& Dist){
	int d1, d2;
	
	d1 = this->feet*12 + this->inches;
	d2 = Dist.feet*12 + Dist.inches;
	
	if ( d1 < d2)
		return true;
	else
		return false;
}

bool Distance :: operator>=(const Distance& Dist){
	int d1, d2;
	
	d1 = this->feet*12 + this->inches;
	d2 = Dist.feet*12 + Dist.inches;
	
	if ( d1 >= d2)
		return true;
	else
		return false;
}

bool Distance :: operator<=(const Distance& Dist){
	int d1, d2;
	
	d1 = this->feet*12 + this->inches;
	d2 = Dist.feet*12 + Dist.inches;
	
	if ( d1 <= d2)
		return true;
	else
		return false;
}

bool Distance :: operator==(const Distance& Dist){
	int d1, d2;
	
	d1 = this->feet*12 + this->inches;
	d2 = Dist.feet*12 + Dist.inches;
	
	if ( d1 == d2)
		return true;
	else
		return false;
}
int main(){
	Distance d1(3,3), d2(3,3), d3;
    
    d3 = d1 + d2;
    d3.show();
    d2 = d1 - d3;
    d2.show();
    
    if (d3 > d2)
        cout<<"true\n";
    else
        cout<<"false\n";
        
    if (d3 < d2)
        cout<<"true\n";
    else
        cout<<"false\n";    
        
    if (d3 <= d2)
        cout<<"true\n";
    else
        cout<<"false\n";    
        
    if (d1 <= d2)
        cout<<"true\n";
    else
        cout<<"false\n";        
        
    if (d3 >= d2)
        cout<<"true\n";
    else
        cout<<"false\n";            
    
    if (d1 >= d2)
        cout<<"true\n";
    else
        cout<<"false\n";    
    
    return 0;	
	
}

