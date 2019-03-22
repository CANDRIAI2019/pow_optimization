ull* vals;

ull pow_(ull a, ull n){
	if(n == 1){
		return a;
	}
	if(vals[n] != 0){
		return vals[n];
	}
	ull b = (n % 2)? pow_(a, (n-1) / 2) * pow_(a, (n-1) / 2) * a : pow_(a, n / 2) * pow_(a, n / 2);
	vals[n] = b;
	return b;
}
void giovanni(ull a, ull n){
	vals = new ull[n];
	cout<<pow_(a, n);
	delete vals;
}


