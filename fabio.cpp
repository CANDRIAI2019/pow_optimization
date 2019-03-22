void* fabio(void* INDEX) {
    auto m_start=std::chrono::high_resolution_clock::now();

    ull a=B, b=E;
	ull res = 1;
	for (ull bb = 0; bb < b; ++bb)
		res *= a;
	//cout<<"Fabio: "<<res<<endl;

	TEMPO[(int)INDEX]=std::chrono::duration<float>{std::chrono::high_resolution_clock::now() - m_start}.count();
	RISULTATO[(int)INDEX]=res;
}
