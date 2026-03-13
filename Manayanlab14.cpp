#include <iostream>
using namespace std; 

class Employee{
	protected:
		string name;
		int id;
		float salary;
	public:
		Employee();
		Employee(string, int, float);
		virtual set_values();
		void show();
};

Employee::Employee(){
	name = "tom jones";
	id = 123;
	salary = 5000;
}

Employee::Employee(string nme, int inID, float sal):name(nme), id(inID), salary(sal){
	
}

void Employee :: show(){
	cout<<"Employee: "<<name<<endl;
	cout<<"ID number: "<<id<<endl;
	cout<<"Salary: "<<salary<<endl<<endl; 
}

class Manager:public Employee{
	protected: 
		int sub;
	public:
		Manager();
		Manager(string name, int id , float salary):Employee(name,id,salary){
			
		}
		
		void show();
};

Manager:: Manager(){
	name = "tom jones";
	id = 123;
	salary = 5000;
}
//Manager::Manager(string name, int id, float salary){

//}

void Manager::show (){
	cout<<"Employee: "<<name<<endl;
	cout<<"ID number: "<<id<<endl;
	cout<<"Salary: "<<salary<<endl<<endl; 
}



class Laborer{
	
};


int main(){
	Employee emp1, emp2("victor hugo", 555, 2500.55);
	Manager m1, m2("james brown", 232, 5750.25);
	emp1.show();
	emp2.show();
	m2.show();
	
	return 0;
}