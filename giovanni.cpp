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
void* giovanni(void* INDEX){
    auto m_start=chrono::high_resolution_clock::now();

    ull a=B, n=E;
	vals = new ull[n];
	//cout<<"Giovanni: "<<pow_(a, n)<<endl;
	delete vals;

	TEMPO[(int)INDEX]=std::chrono::duration<float>{std::chrono::high_resolution_clock::now() - m_start}.count();
	RISULTATO[(int)INDEX]=pow_(a, n);
}


