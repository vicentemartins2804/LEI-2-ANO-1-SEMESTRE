#include <stdio.h>

int check_lower_tringular_matrix(int mat[][5], int lin, int col){
	int soma = 0;
	
	for (int i = 0; i < lin; i++){
		for ( int j = 0; j < col; j++){
			if (j > i){
				soma += mat[i][j];
			}
		}
	}
	
	if (soma == 0){
		return 1;
	}
	return 0;
}

int sum_lower_tringular_matrix(int mat[][5], int lin, int col){
	int soma = 0;
	
	for (int i = 0; i < lin; i++){
		for ( int j = 0; j < col; j++){
			if (j < i){
				soma += mat[i][j];
			}
		}
	}
	
	return soma;
}

int main(void){
	
	int lin = 5;
	/*int mat[5][5] = {{ 1, 2, 3, 4, 5},
					 { 1, 2, 3, 4, 5},
					 { 1, 2, 3, 4, 5},
					 { 1, 2, 3, 4, 5},
					 { 1, 2, 3, 4, 5}};*/
					 
	int mat[5][5] = {{ 1, 0, 0, 0, 0},
					 { 1, 2, 0, 0, 0},
					 { 1, 2, 3, 0, 0},
					 { 1, 2, 3, 4, 0},
					 { 1, 2, 3, 4, 5}};
						
	if (check_lower_tringular_matrix(mat, lin, lin) == 0){
		printf("The matrix is not lower triangular! \n");
	}else{
		printf("The matrix is lower triangular! \n\n");
		printf("The sum of the lower triangular matrix is %d\n", sum_lower_tringular_matrix(mat, lin, lin));
		
	}
}
