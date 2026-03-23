/*
Name: Vern Andre A. Manayan
Purpose
*/
#include<iostream>
using namespace std;

long toBInary(int);
int toOctal(int);

int main()
{	
	int choice, decimal, num;
	long bina;
	char next;
	do{
		
		do{
		choice=0;
		cout<<"Menu"<<endl;
		cout<<"1.Convert to  Binary"<<endl;
		cout<<"2.Convert to Octal"<<endl;
		cout<<"Action : ";
		cin>>choice;
		if(choice<1||choice>2)
			{cerr<<"Invalid Choice!!! Try again"<<endl;}
		}while(choice<1||choice>2);
		
		cout<<"Input a decimal number : ";
		cin>>decimal;
		switch(choice){
			case 1:
				 bina = toBInary(decimal);
					cout<<decimal <<" in decimal = "<< bina <<" in binary."<<endl;
					
				break;
			case 2:
				num = toOctal(decimal);
					cout<<decimal <<" in decimal = "<< num <<" in octal." <<endl;
				break;
		}
	
		cout<<"Try again?(y/n) : ";
		cin>>next;
	}while(next=='y');
	return 0;	
} 


long toBInary(int decimal){
	long bina=0;
	int remain, i=1;
	
	while(decimal!=0){
		remain = decimal % 2;
		decimal /= 2;
		bina += remain * i;
		i *= 10;
	}
	return bina;
}


int toOctal(int decimal)
{
int oct=0;
	int remain, i=1;
	
	while(decimal!=0){
		remain = decimal % 8;
		decimal /= 8;
		oct += remain * i;
		i *= 10;
	}
	return oct;
}

