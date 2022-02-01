#include <iostream>

using namespace std;

class A{
	public:
		int A1;
		float A2;
		
		void MA1();
		void MA2();
		void MA3();
}

void A::MA1(){
	cout << "Esse é o método MA1!" << endl;
}

void A::MA2(){
	cout << "Esse é o método MA2!" << endl;
}

void A::MA3(){
	cout << "Alteração a classe A partir do clone" << endl;
}