int separa (int v[], int p, int r){
	int c = v[p], i = p + 1, j = r, t;
	while (i <= j) {
		if (v[i] <= c) {
			v[i - 1] = v[i]; 
		} else {
			t = v[i];
			v[i] = v[j];
			v[j] = t;
			--j;
		}
	}
	v[j] = c;
	return j;
}
