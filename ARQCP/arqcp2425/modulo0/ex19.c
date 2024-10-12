#include <stdio.h>

int sum_matrix_values(int mat[5][3]){
	
	int soma = 0;
	
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 3; j++){
			soma += mat[i][j];
		}
	}
	return soma;
}

int main(void){

	int mat[5][3] = {{1, 2, 3}, 
					{4, 5, 6}, 
					{7, 8, 9}, 
					{10, 11, 12}, 
					{13, 14, 15}};
					
	printf("A soma de todos os valores da matriz é: %d", sum_matrix_values(mat));
}
