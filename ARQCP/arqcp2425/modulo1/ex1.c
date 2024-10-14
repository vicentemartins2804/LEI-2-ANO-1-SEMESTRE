#include <stdio.h>

int parteA(void){
	int x = 5; 
	// Declaração da variável 'x' e atribuição do valor 5.
	int* ptr_x = &x; 
	// O ponteiro 'ptr_x' guarda o endereço de 'x'.
	float y = *ptr_x + 3; 
	// 'y' recebe o valor apontado por 'ptr_x' (que é o valor de 'x', 5), mais 3. Ou seja, y = 8.0.
	
	printf("The value of x: %d\n", x); 
	// O valor de 'x' é 5, conforme atribuído na linha inicial.
	printf("The value of y: %f\n", y); 
	// O valor de 'y' é 8.00, pois 'y' foi calculado como '5 + 3 = 8.00'.
	printf("The address of x: %p\n", &x); 
	// Aqui imprime o endereço de memória onde a variável 'x' está armazenada.
    // O endereço muda em cada execução, mas representa a localização exata de 'x'.
	printf("The address of y: %p\n", &y);
	// Da mesma forma, isto imprime o endereço de memória onde 'y' está armazenado.
	printf("The address of ptr_x: %p\n", &ptr_x);
	// Aqui estamos a imprimir o endereço do próprio ponteiro 'ptr_x', que é uma variável como qualquer outra
    // e também está armazenada em algum local de memória.
	printf("The value of ptr_x: %p\n", ptr_x);
	// O valor de 'ptr_x' é o endereço de 'x'. Ou seja, 'ptr_x' aponta para o endereço de 'x'.
    // Quando imprimimos 'ptr_x', estamos a imprimir esse endereço (onde 'x' está armazenado).
	printf("The value pointed by ptr_x: %d\n\n\n", *ptr_x);
	// Aqui desreferenciamos o ponteiro 'ptr_x' com o operador '*', o que significa que acedemos ao valor armazenado
    // no endereço apontado por 'ptr_x'. Esse valor é o valor de 'x', que é 5.
	
	return 0;
}

int parteB(void){
	int vec[] = {10, 20, 30, 40};
	int* ptr_vec = vec;
	int z = *ptr_vec;
	int h = *(ptr_vec + 3);
	
	printf("The value of z: %d\n", z); // 'z' será 10, que é o primeiro valor de 'vec'.
	printf("The value of h: %d\n", h); // 'h' será 40, que é o quarto valor de 'vec'.
	printf("The address of vec: %p\n", &vec); // Endereço do primeiro elemento de 'vec' (&vec[0]).
	printf("The address of ptr_vec: %p\n", &ptr_vec); // Endereço de 'ptr_vec', que é onde o ponteiro está armazenado.
	printf("The value of ptr_vec: %p\n", ptr_vec); // O valor de 'ptr_vec' é o endereço de 'vec' (&vec[0])
	printf("The value of vec: %p\n", vec); // O valor de 'vec' é o endereço de 'vec[0]'.
	printf("The value pointed by ptr_vec: %d\n\n\n", *ptr_vec); // O valor apontado por 'ptr_vec' será 10, o primeiro valor do array.

	// O endereço de vec e o valor de ptr_vec são iguais porque ambos são o endereço do primeiro elemento de 'vec' (&vec[0])
	
	return 0;
}

int parteC(void){
	int i;
	int vec[] = {10, 20, 30, 40};
	int* ptr_vec = vec;
	
	// Primeira parte: Loop que itera sobre o array usando um índice 'i'
	for(i = 0; i < 4; i++){
		printf("1: %p, %d\t", &vec[i], vec[i]);
		// Imprime o endereço de cada elemento do array e o seu valor correspondente
        // &vec[i]: Endereço do elemento no índice i
        // vec[i]: Valor armazenado no elemento no índice i
	}
	printf("\n");
	// Segunda parte: Loop que itera sobre o array usando um ponteiro
    // Inicializa ptr_vec para apontar para o primeiro elemento de vec
	for(ptr_vec = vec; ptr_vec < vec + 4; ptr_vec++){
		printf("2: %p,%d\t", ptr_vec, *ptr_vec);
		// Imprime o valor do ponteiro (endereço atual) e o valor do elemento apontado por ptr_vec
        // ptr_vec: Endereço atual do ponteiro
        // *ptr_vec: Valor armazenado no endereço atual apontado por ptr_vec
	}
	printf("\n");
	// Terceira parte: Loop que itera sobre o array em ordem reversa
    // Inicializa ptr_vec para apontar para o último elemento de vec
	for(ptr_vec = vec + 3; ptr_vec >= vec; ptr_vec--){
		printf("3:  %p,%d\t", ptr_vec, *ptr_vec);
		// Imprime o valor do ponteiro (endereço atual) e o valor do elemento apontado por ptr_vec
        // ptr_vec: Endereço atual do ponteiro
        // *ptr_vec: Valor armazenado no endereço atual apontado por ptr_vec
	}
	
	// O ptr_vec++ incrementa o ponteiro 'ptr_vec' para que ele aponte para o próximo elemento do array
	// O ptr_vec-- decrementa o ponteiro 'ptr_vec' para que ele aponte para o elemento do array anterior
	
	return 0;
}

int parteD(void){
    int a; // Declaração de uma variável inteira 'a'.
    int vec[] = {10, 20, 30, 40}; // Declaração de um array de inteiros 'vec'.
    printf("\n");
    int* ptr_vec = vec; // Inicializa o ponteiro 'ptr_vec' para o primeiro elemento de 'vec'.
    
    // Imprime o endereço do primeiro elemento de 'vec' e seu valor.s
    printf("4: %p,%d\n", ptr_vec, *ptr_vec);
    
    // Atribui a 'a' o valor do primeiro elemento de 'vec' e incrementa o ponteiro para o próximo elemento.
    a = *ptr_vec++;
    // Imprime o endereço atual do ponteiro (após a incrementação), o valor apontado e o valor de 'a'.
    printf("5: %p,%d,%d\n", ptr_vec, *ptr_vec, a);
    
    // Reinicializa o ponteiro para o início do array.
    ptr_vec = vec; 
    // Atribui a 'a' o valor do primeiro elemento de 'vec' e incrementa o próprio elemento.
    a = (*ptr_vec)++;
    // Imprime o endereço do ponteiro, o novo valor do primeiro elemento e o valor original de 'a'.
    printf("6: %p,%d,%d\n", ptr_vec, *ptr_vec, a);
    
    // Reinicializa o ponteiro novamente.
    ptr_vec = vec;
    // Incrementa o ponteiro para apontar para o segundo elemento e atribui a 'a' o valor desse elemento.
    a = *++ptr_vec;
    // Imprime o endereço atual do ponteiro, o valor apontado e o valor de 'a'.
    printf("7: %p,%d,%d\n", ptr_vec, *ptr_vec, a);
    
    // Reinicializa o ponteiro para o primeiro elemento.
    ptr_vec = vec;
    // Incrementa o valor do primeiro elemento e atribui a 'a' o novo valor.
    a = ++*ptr_vec;
    // Imprime o endereço do ponteiro, o valor do primeiro elemento e o valor de 'a'.
    printf("8: %p,%d,%d\n", ptr_vec, *ptr_vec, a);
    
    printf("\n");
    // Loop que itera sobre todo o array 'vec' e imprime os endereços e valores.
    for(ptr_vec = vec; ptr_vec < vec + 4; ptr_vec++){
        printf("9: %p,%d\t", ptr_vec, *ptr_vec);
    }
    
    return 0; // Retorna 0 ao final da função.
}


int parteE(void){
    printf("\n");
    unsigned int d = 0xAABBCCDD; // Declaração de um inteiro não assinado 'd' com um valor hexadecimal.
    printf("10: %p,%x\t", &d,d); // Imprime o endereço de 'd' e seu valor em hexadecimal.
    printf("\n");
    
    unsigned char* ptr_d = (unsigned char*)&d; // Cria um ponteiro para 'd', tratando-o como um array de bytes.
    unsigned char* p; // Declara um ponteiro para char.

    // Loop que itera sobre cada byte de 'd'.
    for(p = ptr_d; p < ptr_d + sizeof(unsigned int); p++){
        printf("11: %p,%x\t", p,(unsigned char)*p); // Imprime o endereço e o valor de cada byte de 'd'.
    }
    
    return 0; // Retorna 0 ao final da função.
}

int main(void){
	parteA();
	parteB();
	parteC();
	parteD();
	parteE();
}

