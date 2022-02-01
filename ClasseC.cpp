#include <iostream>

using namespace std;

class C{
	public:
		string C1;
		int C2;
		
		void MC1();
		void MC2();
		void MC3();
}

void C::MC1(){
	cout << "Esse é o método MC1!" << endl;
}

void C::MC2(){
	cout << "Esse é o método MC2!" << endl;
}

void C::MC3(){
	cout << "Esse é o método MC3!" << endl;
}

