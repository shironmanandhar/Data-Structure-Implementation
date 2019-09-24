#include <iostream>
#include <cmath>
using namespace std; 
#include "pseudorandom.h"

pseudorandom p(40, 1, 725, 729);

void solution11();
void solution12();
void solution13();
void solution14();
int main() {

	solution11();
	solution12();
	solution13();
	solution14();
	cout << endl;
	cout << "When the seed is changed to 77" << endl;
	p.changeseed(77);
	solution11();
	solution12();
	p.initialize();
	solution13();
	solution14();

	return 0;
}

void solution11() {
	p.print1();
}

void solution12() {
	cout << "The value divided by the modulus is: " << p.newGenerateseed()<<endl;
}

void solution13() {
	for (int i = 0; i < 1000000; i++) {
		p.newGenerateseed2();
	}
	p.print2();
}

void solution14() {
	p.gaussianFunction();
}