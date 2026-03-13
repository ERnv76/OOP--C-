#include<iostream>

using namespace std;

class Time{
	int hours, minutes, seconds;
	
	public:
		Time();	
		Time(int,int,int);
		friend ostream& operator<<(ostream&, const Time&);
		friend Time operator+(const Time&, const Time&);
	    Time& operator++();
	    Time operator++(int);
	    Time& operator--();
	    Time operator--(int);
};


Time::Time():hours(0), minutes(0), seconds(0){	
}

Time::Time(int hrs, int mnts, int secs){
	if(hrs<0||hrs>23)
		hours=0;
	else	
		hours=hrs;
	
	if(mnts<0||mnts>59)
		minutes=0;
	else	
		minutes=mnts;
	
	if(secs<0||secs>59)
		seconds=0;
	else	
		seconds=secs;		
}

ostream& operator<<(ostream& ,const Time& t){
	cout<<t.hours<<":"<<t.minutes<<":"<<t.seconds;
	return cout;
}

Time  operator+(const Time& obj1, const Time& obj2){
	Time Oras;
	//test bed
	Oras.seconds = obj1.seconds+obj2.seconds;
	Oras.minutes = obj1.minutes+obj2.minutes;
	Oras.hours = obj1.hours+obj2.hours;
	
	if(Oras.seconds >= 60)
	{
		Oras.seconds -= 60;
		Oras.minutes += 1;
	}
	
	if(Oras.minutes>= 60)
	{
		Oras.minutes -= 60;
		Oras.hours += 1;
	}
	
	if (Oras.hours>23)
		Oras.hours= 0;
	return Oras;
}

 Time& Time::operator++(){
 
 	seconds++;
 	
	while(seconds>=60){
		seconds -= 60;
		minutes+=1;
	}
	
	while(minutes >= 60){
		minutes-= 60;
		hours += 1;  
	}
	
	while(hours>=24)
		hours=0;
		
	return *this;	
	
}

Time Time::operator++(int) {
    
	Time temp(hours, minutes, seconds); 
    
    seconds++;
    if (seconds >= 60) {
        seconds = 0;
        minutes++;
    }
    if (minutes >= 60) {
        minutes = 0;
        hours++;
    }
    if (hours >= 24) {
        hours = 0;
    }
    
    return temp; 
}
Time& Time::operator -- (){
 
 	seconds--;
 	
	if(seconds<0)
	{
	minutes--;	
	seconds+=60;
	}
	
	if(minutes<0){
		minutes+=60;
		hours--;
	}
	if(hours<0)
		hours=23;
		
	return *this;	
	
}

Time Time::operator--(int) {
    
	Time temp(hours, minutes, seconds); 
    
    seconds--;
    
   	if(seconds<0)
	{
	minutes--;	
	seconds+=60;
	}
	
	if(minutes<0){
		minutes+=60;
		hours--;
	}
	if(hours<0)
		hours=23;
	
    
    return temp; 
}
int main(){
	Time t1(22,55,10), t2(1,11,50), t3;
	
	cout << t1 << endl;
	cout << t2 << endl;
	
	t3= t1+ t2;
	cout << t3 << endl;
	Time t4(1, 3, 50);
	t3 = t1 + t4;
	cout << t3 << endl;
	Time t5(23, 59, 59);
	cout << ++t5 << endl;
	cout << t5++ << endl;
	cout << t5 << endl;
	cout << --t5 << endl; // 0:00:00
	cout << t5-- << endl; // 0:00:00
	cout << t5 << endl; // 23:59:59
	Time t6(24, 60, 60) ;
	cout << t6 << endl; // 0:00:00

return 0;
}