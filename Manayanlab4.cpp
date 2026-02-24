/* 
NAME: Vern Andre A. Manayan 
*/
#include<iostream>
using namespace std;

double power(double n, int p=2)
{
	int i, j; 
	int f=p*-1;
	
	double temp=n;
	
	if(p>1){
		for(i=1;i<p;i++)
			temp *= n;
	}
	else{
		for(i=1;i>p;i--)	
			temp = temp/n;
	}	
	return temp;
}
int main()
{
	int p;
	double n, result;
	char proceed;

		cout<<" Enter the number : "  ; 
			cin>>n; 
	do{
		cout<<"Do you want to enter (y/n) ?: "  ;
			cin>>proceed;
	//trap invalid input and loop
		if(proceed!='Y'&&proceed!='y'&&proceed!='N'&&proceed!='n')
			cout<<"Invalid choice"<<endl;
		
	}while(proceed!='Y'&& proceed!='y'&& proceed!='N'&& proceed!='n' );
	
	//skip this if no 
	if(proceed=='Y'||proceed=='y'){
		cout<<"Enter the power to be raised: ";
			cin>>p;
	}
	else{
		p=2;
	}
	result = power(n,p);
	
	//return double 
	cout<<n<<" ^ "<<p<<" ( "<<n<<"  raised to the power " <<p<< " ) = "<<result;
	
	return 0;
}