#include <iostream>
using namespace std; 
#include <cmath>
#include "pseudorandom.h"

int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0, c10 = 0;

pseudorandom::pseudorandom() {

}
pseudorandom::pseudorandom(int m, int s, int incre, int mod) {
	multiplier=m;
	seed = s;
	increment = incre;
	modulus = mod;
}
	
void pseudorandom::changeseed(int a) {
	
	seed = a;
		 
}

int pseudorandom::generateseed() {
	
	seed = (multiplier*seed + increment) % modulus;
		
	return seed; 
}

void pseudorandom::print1() {
	cout << "The seed from the input is:"<<generateseed()<<endl;
}

double pseudorandom::newGenerateseed() {
	seed = (multiplier*seed + increment) % modulus;
	double a = static_cast<double>(seed);
	double newSeed = a / modulus;
	return newSeed;
}

double pseudorandom::newGenerateseed2() {

	seed = (multiplier*seed + increment) % modulus;
	double a = static_cast<double>(seed);
	double newSeed = a / modulus;

	
		if (newSeed >= 0.0 && newSeed < 0.1) {
			c1 = c1 + 1;
		}

		else if (newSeed >= 0.1 && newSeed < 0.2) {
			c2=c2+1;
		}

		else if (newSeed >= 0.2 && newSeed < 0.3) {
			c3 = c3 + 1;
		}

		else if (newSeed >= 0.3 && newSeed < 0.4) {
			c4 = c4 + 1;
		}

		else if (newSeed >= 0.4 && newSeed < 0.5) {
			c5 = c5 + 1;
		}

		else if (newSeed >= 0.5 && newSeed < 0.6) {
			c6 = c6 + 1;
		}

		else if (newSeed >= 0.6 && newSeed < 0.7) {
			c7 = c7 + 1;
		}

		else if (newSeed >= 0.7 && newSeed < 0.8) {
			c8 = c8 + 1;
		}

		else if (newSeed >= 0.8 && newSeed < 0.9) {
			c9 = c9 + 1;
		}

		else if (newSeed >= 0.9 && newSeed < 1.0) {
			c10 = c10 + 1;
		}

		return newSeed;
	
}

void pseudorandom::initialize() {
	c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0, c10 = 0; 
}

double pseudorandom::randfunc() {
	
		seed = (multiplier*seed + increment) % modulus;
		double a = static_cast<double>(seed);
		double newSeed2 = a / modulus;
		return newSeed2;
	
}

void pseudorandom::print2() {
	cout << "Range           " << "Number of Occurances" << endl;
	cout << "[0.0 ... 0.1)   " << c1 << endl;
	cout << "[0.1 ... 0.2)   " << c2 << endl;
	cout << "[0.2 ... 0.3)   " << c3 << endl;
	cout << "[0.3 ... 0.4)   " << c4 << endl;
	cout << "[0.4 ... 0.5)   " << c5 << endl;
	cout << "[0.5 ... 0.6)   " << c6 << endl;
	cout << "[0.6 ... 0.7)   " << c7 << endl;
	cout << "[0.7 ... 0.8)   " << c8 << endl;
	cout << "[0.8 ... 0.9)   " << c9 << endl;
	cout << "[0.9 ... 1.0)   " << c10 << endl;
	
}

void pseudorandom::gaussianFunction() {

	double x1, x2, w, y1, y2;
	int j1 = 0, j2 = 0, j3 = 0, j4 = 0, j5 = 0, j6 = 0, j7 = 0, j8 = 0, j9 = 0, j10 = 0, j11 = 0, j12 = 0, j13 = 0, j14 = 0, j15 = 0, j16 = 0, j17 = 0, j18 = 0, j19 = 0, j20 = 0;
	for (int i = 0; i < 500000; i++) {

		do {
			x1 = 2.0 * randfunc() - 1.0;
			x2 = 2.0 * randfunc() - 1.0;
			w = x1 * x1 + x2 * x2;
		} while (w >= 1.0);

		w = sqrt((-2.0 * log(w)) / w);
		y1 = x1 * w;
		if (y1 >= -3.0 && y1 < -2.4) {
			j1 = j1 + 1;
		}

		else if (y1 >= -2.4 && y1 < -1.8) {
			j3 = j3 + 1;
		}

		else if (y1 >= -1.8 && y1 < -1.2) {
			j5 = j5 + 1;
		}

		else if (y1 >= -1.2 && y1 < -0.6) {
			j7 = j7 + 1;
		}

		else if (y1 >= -0.6 && y1 < 0.0) {
			j9 = j9 + 1;
		}

		else if (y1 >= 0.0 && y1 < 0.6) {
			j11 = j11 + 1;
		}

		else if (y1 >= 0.6 && y1 < 1.2) {
			j13 = j13 + 1;
		}

		else if (y1 >= 1.2 && y1 < 1.8) {
			j15 = j15 + 1;
		}

		else if (y1 >= 1.8 && y1 < 2.4) {
			j17 = j17 + 1;
		}

		else if (y1 >= 2.4 && y1 < 3.0) {
			j19 = j19 + 1;
		}

		y2 = x2 * w;


		if (y2 >= -3.0 && y2 < -2.4) {
			j1 = j1 + 1;
		}

		else if (y2 >= -2.4 && y2 < -1.8) {
			j3 = j3 + 1;
		}

		else if (y2 >= -1.8 && y2 < -1.2) {
			j5 = j5 + 1;
		}

		else if (y2 >= -1.2 && y2 < -0.6) {
			j7 = j7 + 1;
		}

		else if (y2 >= -0.6 && y2 < 0.0) {
			j9 = j9 + 1;
		}

		else if (y2 >= 0.0 && y2 < 0.6) {
			j11 = j11 + 1;
		}

		else if (y2 >= 0.6 && y2 < 1.2) {
			j13 = j13 + 1;
		}

		else if (y2 >= 1.2 && y2 < 1.8) {
			j15 = j15 + 1;
		}

		else if (y2 >= 1.8 && y2 < 2.4) {
			j17 = j17 + 1;
		}

		else if (y2 >= 2.4 && y2 < 3.0) {
			j19 = j19 + 1;
		}
	}
	cout << "The table below is the data of Gaussian Distribution" << endl;
	cout << "Range             " << "Number of Occurances" << endl;
	cout << "[-3.0 ... -2.4)   " << j1 << endl;
	cout << "[-2.4 ... -1.8)   " << j3 << endl;
	cout << "[-1.8 ... -1.2)   " << j5 << endl;
	cout << "[-1.2 ... -0.6)   " << j7 << endl;
	cout << "[-0.6 ... 0.0)    " << j9 << endl;
	cout << "[0.0 ... 0.6)     " << j11 << endl;
	cout << "[0.6 ... 1.2)     " << j13 << endl;
	cout << "[1.2 ... 1.8)     " << j15 << endl;
	cout << "[1.8 ... 2.4)     " << j17 << endl;
	cout << "[2.4 ... 3.0)     " << j19 << endl;
	
}