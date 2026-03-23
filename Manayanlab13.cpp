#include <iostream>

using namespace std;

class Distance{
	int feet, inches;
		
	public:
		Distance();
		Distance(int,int);
		friend Distance operator+(const Distance&, const Distance&);
		friend Distance operator+=(Distance&, const Distance&);
		friend ostream& operator<<(ostream&, const Distance&);
		friend bool operator>=(const Distance&, const Distance&);
		friend bool operator<=(const Distance&, const Distance&);
		friend Distance operator++(Distance&);
	    friend Distance operator++(Distance&, int);
	    friend Distance operator--(Distance&);
	    friend Distance operator--(Distance&, int);
};

Distance::Distance():feet(0), inches(0){	
}

Distance::Distance(int a, int b ):feet(a), inches(b){
}
Distance operator+(const Distance& d1, const Distance& d2){
	Distance obj;
	obj.feet = d1.feet + d2.feet;
	obj.inches = d1.inches + d2.inches;
	while (obj. inches >  12 ){ 
		obj. inches -= 12;
		obj. feet+=1;
	}
	return obj;
}

ostream& operator<<(ostream& ,const Distance& d){
	cout<<d.feet<<"'"<<d.inches<< "\"";
	return cout;
}

Distance operator+=(Distance &d1, const Distance &d2){
	d1.feet += d2.feet;
	d1.inches += d2.inches;
	
	while (d1.inches >= 12){
		d1.feet += d1.inches / 12;
		d1.inches = d1.inches % 12;
	}
	
	return d1;
}

bool operator>=(const Distance& d1, const Distance& d2){
	int dist1, dist2;
	
	dist1 = d1.feet*12 + d1.inches;
	dist2 = d2.feet*12 + d2.inches;
	
	if ( dist1 >= dist2)
		return true;
	else
		return false;	
}

bool operator<=(const Distance& d1, const Distance& d2){
	int dist1, dist2;
	
	dist1 = d1.feet*12 + d1.inches;
	dist2 = d2.feet*12 + d2.inches;
	
	if ( dist1 <= dist2)
		return true;
	else
		return false;	
}

Distance operator++(Distance &d){
    d.inches++;

    while(d.inches >= 12){
        d.feet++;
        d.inches -= 12;
    }
    return d;
}

Distance operator++(Distance &d, int){
    Distance temp = d;
    d.inches++;
    while(d.inches >= 12){
        d.feet++;
        d.inches -= 12;
    }
    return temp;
}

Distance operator--(Distance &d){
    d.inches--;

    while(d.inches < 0){
        d.feet--;
        
        d.inches += 12;
    }
    return d;
}

Distance operator--(Distance &d, int){
    Distance temp = d;
   
    d.inches--;
    if (d.inches < 0){
        d.feet--;
        d.inches += 12;
    }
    return temp;
}
int main(){
	Distance d1(5,10), d2(1,3), d3;
	
    d3 = d1 + d2;
    cout << d3 << endl;	//7'1"
    
    d1 += d2;
    cout << d1 << endl;	//7'1"
    if (d3 >= d2)	//true
        cout<<"true\n";
    else
        cout<<"false\n";
    if (d3 <= d2)	//false
        cout<<"true\n";
    else
        cout<<"false\n";    
	
	if (d3 <= d1)	//true
        cout<<"true\n";
    else
        cout<<"false\n";
	
	Distance d4(0,11);
	cout << ++d4 << endl; //1'0"
	cout << d4++ << endl; //1'0"
	cout << d4 << endl; //1'1"
	
	cout << --d4 << endl; //1'0"
	cout << d4-- << endl; //1'0"
	cout << d4 << endl; //0'12"
	return 0;
}