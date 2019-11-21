void monta_heap (int *vet, int e, int d){
	int i, j, x;
	
	i = e;
	j = (i * 2) + 1;
	x = vet[i];
	
	while (j <= d) {
		if (j < d && vet[j] < vet[j+1]){
			j++;
		}
		if (x < vet[j]){
			vet[i] = vet[j];
			i = j;
			j = (i * 2) + 1;
		} else {
			j = d + 1;
		}
	}
	vet[i] = x;
}

void heap (int *v) {
	int esq = max / 2, dir = max - 1, aux;
	
	while (esq > 0) {
		esq--;
		monta_heap (v, esq, dir);
	}
	while (dir > 0){
		aux = v[0];
		v[0] = v[dir];
		v[dir] = aux;
		dir--;
		monta_heap (v, esq, dir);
	} 
}
