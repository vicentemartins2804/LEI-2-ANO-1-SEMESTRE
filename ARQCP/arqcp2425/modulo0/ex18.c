#include <stdio.h>


int cmp(int a, int b) {
	
	if (a<b){
		return -1;
	}else if (a==b){
		return 0;
	} else if (a>b){
		return 1;
	}
	return 0;
}


int find_pattern(char str[], char patt[]){
	
	int i=0;
	int count=0;
	int j=0;
	int count_final=0;
	
	
	
	while (patt[j] != '\0') {
		j++;
	}
	
	while (str[i] != '\0'){
		
		if (str[i] == patt[0]){
			
			for (int k = 0;k<j;k++){
				
				if (str[i+k] == patt[k]){
					
					count++;
				}
				
			}
			
			if (count == j) {
				count_final++;
			}
			
			count=0;
		}
		i++;
	}
	
	return count_final;		
	
}


int main(void) {
	char str[] = "ola Pedro ola Laura";
	char patt[] = "la";
	
	printf("%d", find_pattern(str,patt));
	
	return 0;
}

