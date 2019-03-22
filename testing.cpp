#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
#include <pthread.h>
using namespace std;
using ull = uint64_t;

int64_t B, E;
float TEMPO[3];
int RISULTATO[3];

#include "alessio.cpp"
#include "fabio.cpp"
#include "giovanni.cpp"

int main(){
    cin>>B>>E;
    pthread_t t[3];
    pthread_create(&t[0],NULL,&alessio,(void*)0);
    pthread_create(&t[1],NULL,&fabio,(void*)1);
    pthread_create(&t[2],NULL,&giovanni,(void*)2);

    for(auto i:t)
        pthread_join(i,NULL);

    for(int i=0; i<3;i++)
        cout<<i<<": "<<TEMPO[i]<<" # "<<RISULTATO[i]<<endl;
    return 0;
}
