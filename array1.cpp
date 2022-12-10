#include <iostream>
#include <cstring>
using namespace std;

int main (){
char name[50];
char ch;
	cout <<"enter name :";
cin>> name;
	cout <<"enter character :";
	cin>>ch;
	for (int i=0;i<=strlen(name);i++)
	
		if (name [i]==ch)
		{
			cout <<"exist";
			return 0;
		}
		cout <<"dosen't exist";
		
	
	return 0;
}
