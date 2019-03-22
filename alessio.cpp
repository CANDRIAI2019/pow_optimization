void* alessio(void* INDEX){
    auto m_start=std::chrono::high_resolution_clock::now();

    ull base=B, esponente=E;
	ull potenze[100];
	ull soluzione=1;
	int logaritmo=log2(esponente);


	potenze[0]=base;
	for(int a=1;a<=logaritmo;a++){
		potenze[a]=potenze[a-1]*potenze[a-1];

	}
	for(int a=logaritmo;a>=0;a--){
		if(esponente>=pow(2,a)){
			esponente-=pow(2,a);

			soluzione=soluzione*potenze[a];
		}
	}
	//fprintf(stdout,"Alessio: %llu\n",soluzione);
	//cout<<"Alessio: "<<soluzione<<endl;

	TEMPO[(int)INDEX]=std::chrono::duration<float>{std::chrono::high_resolution_clock::now() - m_start}.count();
	RISULTATO[(int)INDEX]=soluzione;
}
