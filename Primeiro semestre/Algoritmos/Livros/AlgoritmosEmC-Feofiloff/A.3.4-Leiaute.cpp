esq = 0;
dir = N - 1;
i = (esq + dir) / 2;
while (esq <= dir && R[i] != X){
	if (R[i<X])
		esq = i + 1;
	else
		dir = i - 1;
	i = (esq + dir) / 2;
}
