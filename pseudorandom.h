#ifndef PSEUDORANDOM_H
#define PSEUDORANDOM_H
class pseudorandom {
public:
	pseudorandom();
	pseudorandom(int multiplier, int seed, int increment, int modulus);
	void changeseed(int);
	int generateseed();
	void print1();
	double newGenerateseed();
	double newGenerateseed2();
	void initialize();
	void print2();
	double randfunc();
	void gaussianFunction();

private:
	int multiplier;
	int seed;
	int increment;
	int modulus;

};

#endif

