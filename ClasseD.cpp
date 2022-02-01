#include <iostream>

using namespace std;

class D{
	public:
		string D1;
		int D2;
		
		void MD1();
		void MD2();
}

void D::MD1(){
	cout << "Você está na MD1!" << endl;
}

void D::MD2(){
	cout << "Você está na MD2!" << endl;
}


