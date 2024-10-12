int average(int v[], int n){
	int soma = 0;
	int avg;
	for (int i = 0; i < n; i++){
		soma += v[i];
	}
	avg = soma / n;
	
	return avg;		
}
