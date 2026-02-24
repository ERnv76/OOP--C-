#include <iostream>

using namespace std;

class Time{
	int hours, minutes, seconds;
	
	public:
	Time();	
	Time(int,int,int);
	void show();
	Time AddTime(Time);
	void increment();
	void decrement();
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

void Time::show(){
	cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
}

Time Time::AddTime(Time iAdd){
	Time Oras;
	//test bed
	Oras.seconds=seconds+iAdd.seconds;
	Oras.minutes=minutes+iAdd.minutes;
	Oras.hours=hours+Oras.hours;
	

	if(Oras.seconds>60)
	{
		Oras.seconds-= 60;
		Oras.minutes+=1;
	}

		
	//minutes
	if(Oras.minutes>60)
	{
		Oras.minutes-= 60;
		Oras.hours+=1;
	}

		
	if (iAdd.hours>23)
		Oras.hours= 0;
	
	return Oras;
}

void Time::increment(){
	seconds+=5;
	
	if(seconds>60){
		seconds-=60;
		minutes+=1;
	}
	if(minutes>60){
		minutes-60;
		hours++;
	}
	if(hours>23)
		hours=0;
}

void Time::decrement(){
	seconds-=5;
	
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
	

}
int main(){
	Time t1(11, 59,59), t2(0, 5,59), t3;	
	
	t1.show();
	t2.show();
	
	t3 = t1.AddTime(t2);
	t3.show();
	
	t2.increment();
	t2.show();
	
	t2.decrement();
	t2.show();
	
	return 0;
}
