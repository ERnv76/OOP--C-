#include<iostream>
using namespace std;

int main(){
	string text;
	char temp;
	int len, i, j;
	do{
		string reverse;
		cout<<"Input some text: ";
		getline(cin,text);
		len = text.length();
		for(i=len-1;i>=0;i--)
		{
			temp=text[i];
			reverse +=temp;
		}
		cout<<"the reverse of "<<text<<" is "<<reverse<<endl;
	}while(text != "tiuq"); 
return 0;	
}