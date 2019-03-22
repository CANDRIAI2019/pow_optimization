uint64_t fabio(uint64_t a, uint64_t b) {
	uint64_t res = 1;
	for (uint64_t bb = 0; bb < b; ++bb)
		res *= a;
	return res;
}
