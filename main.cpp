#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
#include <thread>
using namespace std;
using ull = uint64_t;

int64_t B, E;

#include "alessio.cpp"
#include "fabio.cpp"
#include "giovanni.cpp"

int main(){
    cin>>B>>E;
    thread t1([](){ alessio(B, E); });
    thread t2([](){ fabio(B, E); });
    thread t3([](){ giovanni(B, E); });
    return 0;
}
