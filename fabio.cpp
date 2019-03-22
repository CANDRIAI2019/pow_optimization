void fabio(ull a, ull b) {
	ull res = 1;
	for (ull bb = 0; bb < b; ++bb)
		res *= a;
	cout<<res;
}
