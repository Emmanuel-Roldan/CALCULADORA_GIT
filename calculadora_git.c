#include <stdio.h>

int main(void)
{
char operacion;

printf("Ingresa operador: ");
scanf("%c" , &operacion);

switch (operacion){

	case '+':
        printf("Suma");
	break;
        case '-':
        printf("Resta");
        break;
        case '*':
        printf("Multiplicacion");
        break;
        case '/':
        printf("Division");
        break;
        default:
        printf("<<ERROR>>");
}
  return 0;
}
