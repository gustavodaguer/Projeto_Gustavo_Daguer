#include <iostream>

using namespace std;

class D{
	public:
		string D1;
		int D2;
		
		void MD1();
		void MD2();
		void MD3();
		void MD4();

}

void D::MD1(){
	cout << "Você está na MD1!" << endl;
}

void D::MD2(){
	cout << "Você está na MD2!" << endl;
}

void D::MD3(){
	cout << "Você está na MD3!" << endl;
}

void D::MD4(){
	cout << "Você está na MD4!" << endl;
}


