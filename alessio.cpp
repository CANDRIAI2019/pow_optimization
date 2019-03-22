
typedef unsigned long long int ull;

void alessio(ull base, ull esponente){
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
	fprintf(stdout,"%llu",soluzione);
}