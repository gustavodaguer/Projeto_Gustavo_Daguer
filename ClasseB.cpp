#include <iostream>

using namespace std;

class B{
	public:
		int B1;
		float B2;
		
		void MB1();
		void MB2();
}

void B::MB1(){]
	cout << "Esse é o método MB1!" << endl;
}

void B::MB2(){]
	cout << "Esse é o método MB2!" << endl;
}
