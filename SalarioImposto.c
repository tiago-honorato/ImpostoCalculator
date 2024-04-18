#include <stdio.h>

int main(){
	
	float salarioBruto, salarioLiquido, impostoRetido = 0;
	
	printf("Informe seu salario: ");
	scanf("%f", &salarioBruto);
	
	printf("Seu salario: %.2f\n", salarioBruto);
	
	if(salarioBruto <= 0){
		
		printf("Salario zero ou negativo!\n");
		
	}else if(salarioBruto > 0 && salarioBruto < 1000){
		salarioLiquido = salarioBruto;
	}else if(salarioBruto >= 1000 && salarioBruto < 10000){
		
		impostoRetido = salarioBruto * 0.10;
		salarioLiquido = salarioBruto - impostoRetido;
		
	}else if(salarioBruto >= 10000 && salarioBruto < 25000){
		
		impostoRetido = salarioBruto * 0.15;
		salarioLiquido = salarioBruto - impostoRetido;
		
	}else{
		
		impostoRetido = salarioBruto * 0.20;
		salarioLiquido = salarioBruto - impostoRetido;
		
	}
	
	printf("Seu salario com imposto: %.2f", salarioLiquido);
	
	return 0;
}