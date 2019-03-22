#include <iostream>

int64_t* vals;

void giovanni(int64_t a, int64_t n){
	vals = new int64_t[n];
	pow_(a, n);
	delete vals;
}

int64_t pow_(int64_t a, int64_t, n){
	if(n == 1){
		return a;
	}
	if(vals[n] != 0){
		return vals[n];
	}
	int64_t b = (n % 2)? pow_(a, (n-1) / 2) * pow_(a, (n-1) / 2) * a : pow_(a, n / 2) * pow_(a, n / 2);
	vals[n] = b;
	return b;
}
