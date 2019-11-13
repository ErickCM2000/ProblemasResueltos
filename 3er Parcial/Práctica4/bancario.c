/*
AUTOR: Castañeda Martínez Erick y Vicencio Benítez Sergio Erick

DESCRIPCIÓN: Programa que simula un sistema bancario básico

COMPILACIÓN: gcc ejemplo.c -o ejemplo
EJECUCIÓN: Windows: ejemplo
*/

//Librerías del compilador
#include <stdio.h>
#include <stdlib.h>

//Definición de la estructura cuentas
typedef struct cuenta
{
	int idccliente;
	float saldo_debito;
	float saldo_credito;
}cuenta;

//Definición de la estructura cliente, con la estructura "cuentas" anidada
typedef struct cliente
{
	int idcliente;
	char nombre[45];
	char apaterno[45];
	char amaterno[45];
	char usuario[45];
	char contrasena[45];
	cuenta cuentas;
}cliente;

//Variables globales
int numclienteregistrado=0;
int numclientes=0;

//Prototipos de función
void CapturaClientes(cliente *lista);
void ImprimeClientes(cliente *lista);
void GuardaClientesTexto(cliente *lista,char* ruta_escribir);
void LeeClientesTexto(cliente *lista,char* ruta_leer);
void ImprimeCuentas(cliente *lista);
void ImprimeSaldoDebito(cliente *lista);
void ImprimeSaldoCredito(cliente *lista);
void ImprimeCuentasC(cliente *lista,int n);
void ImprimeSaldoDebitoC(cliente *lista,int n);
void ImprimeSaldoCreditoC(cliente *lista,int n);
void RegistrarPago(cliente *lista,int n);

int main()
{
	cliente lista[100];
	int opcion,nunmconsulta;
	char resp;
	do{
		//Menú principal
		printf("1.- Administrador\n");
		printf("2.- Cliente\n");
		printf("3.- Salir\n");
		scanf("%d",&opcion);
		switch(opcion){

				case 1:{
					do{
						system("cls");
						//Opciones del administrador
						printf("1.- Registrar un cliente\n");
						printf("2.- Registrar una cuenta (Debito o Credito)\n");
						printf("3.- Ver clientes\n");
						printf("4.- Ver cuentas\n");
						printf("5.- Ver saldo de cuentas de ahorro (Debito)\n");
						printf("6.- Ver saldo de cuentas de credito (Adeudo al banco)\n");
						printf("7.- Salir\n");
						scanf("%d",&opcion);
						switch(opcion){
							case 1:  printf("¿Cuantos clientes quieres anadir?\n"); scanf("%d",&numclientes); CapturaClientes(lista); GuardaClientesTexto(lista,"clientes.txt"); break;
							case 2: break;
							case 3: LeeClientesTexto(lista,"clientes.txt"); ImprimeClientes(lista); break;
							case 4: LeeClientesTexto(lista,"clientes.txt"); ImprimeCuentas(lista); break;
							case 5: LeeClientesTexto(lista,"clientes.txt"); ImprimeSaldoDebito(lista); break;
							case 6: LeeClientesTexto(lista,"clientes.txt"); ImprimeSaldoDebito(lista); break;
							case 7: break;
							default: printf("Ingresaste una opcion no valida.");
						}
						printf("\n");
						printf("Presiona 's' si deseas usar alguna otra opcion de este menu:\n");
						scanf("%s",&resp);
						system("cls");
					}while((resp=='s')||(resp=='S')||(resp=='7'));
				}break;

				case 2:{
					//Validación de la contrasena, solo tomará en consideracion la contraseña del primer cliente
					printf("Ingresa el numero del clienten que quieres consultar:  \n");
					scanf("%d",&nunmconsulta);
					
						do{
							system("cls");
							//Opciones del Cliente
							printf("1.- Registrar un pago\n");
							printf("2.- Ver cuentas del cliente\n");
							printf("3.- Ver saldo cuentas de ahorro (Debito) del cliente\n");
							printf("4.- Ver saldo de cuentas de credito (Adeudo al banco) del cliente\n");
							printf("5.- Salir\n");
							scanf("%d",&opcion);
							switch(opcion){
								case 1: LeeClientesTexto(lista,"clientes.txt"); RegistrarPago(lista,nunmconsulta); break;
								case 2: LeeClientesTexto(lista,"clientes.txt"); ImprimeCuentasC(lista,nunmconsulta); break;
								case 3: LeeClientesTexto(lista,"clientes.txt"); ImprimeSaldoDebitoC(lista,nunmconsulta); break;
								case 4: LeeClientesTexto(lista,"clientes.txt"); ImprimeSaldoCreditoC(lista,nunmconsulta); break;
								case 5: break; break;
								default: printf("Ingresaste una opcion no valida.\n");
							}
							printf("\n");
							printf("Presiona 's' si deseas usar alguna otra opcion de este menu:\n");
							scanf("%s",&resp);
							system("cls");
						}while((resp=='s')||(resp=='S')||(resp==7));

				}break;

				//Caso que cierra todo el programa
				case 3: exit(0);
				default: printf("Ingresaste una opcion no valida.\n");
			}
		printf("%s\n");
		printf("Presiona 's' si deseas volver al menu inicial:\n");
		scanf("%s",&resp);
		system("cls");

	}while((resp=='s')||(resp=='S'));

	return 0;
}

//Función que recibe los datos personales de un cliente junto con el saldo de sus cuentas
void CapturaClientes(cliente *lista){
	//Datos personales del cliente
	int i;
	for(i=0;i<numclientes;i++){
		printf("cliente #%d\n",i);
		printf("\nIntroduce el id de cliente: ");
		scanf("%d",&lista[i].idcliente);
		printf("Introduce el nombre de cliente: ");
		scanf("%s",&lista[i].nombre);
		printf("Introduce el apellido paterno del cliente: ");
		scanf("%s",&lista[i].apaterno);
		printf("Introduce el apellido materno del cliente: ");
		scanf("%s",&lista[i].amaterno);
		printf("Introduce el nombre de usuario del cliente: ");
		scanf("%s",&lista[i].usuario);
		printf("Introduce la contrasena del cliente: ");
		scanf("%s",&lista[i].contrasena);
		//Cuentas del cliente
		printf("Introduce el id de las cuentas del cliente: ");
		scanf("%d",&lista[i].cuentas.idccliente);
		printf("Introduce el saldo de la cuenta de ahorros (Debito): ");
		scanf("%f",&lista[i].cuentas.saldo_debito);
		printf("Introduce el saldo de adeudos con el banco (Credito): ");
		scanf("%f",&lista[i].cuentas.saldo_credito);
		printf("\n");
	}

}

//Función que imprime todos los datos del cliente (guardados en la memoria del programa)
void ImprimeClientes(cliente *lista){
	//Datos personales del cliente
	int i;
	for(i=0;i<numclientes;i++){
		printf("cliente #%d\n",i);
		printf("\nid de cliente: ");
		printf("%d",lista[i].idcliente);
		printf("\nNombre de cliente: ");
		printf("%s",lista[i].nombre);
		printf("\napellido paterno del cliente: ");
		printf("%s",lista[i].apaterno);
		printf("\napellido materno del cliente: ");
		printf("%s",lista[i].amaterno);
		printf("\nnombre de usuario del cliente: ");
		printf("%s",lista[i].usuario);
		printf("\nIntroduce la contrasena del cliente: ");
		printf("%s",lista[i].contrasena);
		//Cuentas del cliente
		printf("\nid de las cuentas del cliente: ");
		printf("%d",lista[i].cuentas.idccliente);
		printf("\nsaldo de la cuenta de ahorros (Debito): ");
		printf("%f",lista[i].cuentas.saldo_debito);
		printf("\nsaldo de adeudos con el banco (Credito): ");
		printf("%f",lista[i].cuentas.saldo_credito);
	}
}
//Función que guarda los datos de los clientes en un archivo de texto
void GuardaClientesTexto(cliente *lista, char* ruta_escribir){
	FILE *archivo;
	archivo=fopen(ruta_escribir,"w");
	fseek(archivo,0,SEEK_SET);
	int i;
	for(i=0;i<numclientes;i++){
		fprintf(archivo,"Cliente numero: %d\n",i);
		fprintf(archivo,"ID de cliente: %d\n",lista[i].idcliente);
		fprintf(archivo,"Nombre del cliente: %s\n",lista[i].nombre);
		fprintf(archivo,"Apellido paterno del cliente: %s\n",lista[i].apaterno);
		fprintf(archivo,"Apellido materno del cliente: %s\n",lista[i].amaterno);
		fprintf(archivo,"Nombre de usuario del cliente: %s\n",lista[i].usuario);
		fprintf(archivo,"Contraseña del cliente: %s\n",lista[i].contrasena);
		fprintf(archivo,"ID de cuentas del cliente: %d\n",lista[i].cuentas.idccliente);
		fprintf(archivo,"Saldo de la cuenta de ahorros (Debito): %f\n",lista[i].cuentas.saldo_debito);
		fprintf(archivo,"Saldo de adeudos con el banco (Credito): %f\n\n",lista[i].cuentas.saldo_credito);
	}
}

//Función que imprime los datos de los clientes desde un archivo de texto
void LeeClientesTexto(cliente *lista, char* ruta_leer){
	FILE *archivo;
	archivo=fopen(ruta_leer,"r");
	fseek(archivo,0,SEEK_SET);
	int i;
	for(i=0;i<numclientes;i++){
		fscanf(archivo,"\nCliente numero: %d",&i);
		fscanf(archivo,"\nID de cliente: %d",&lista[i].idcliente);
		fscanf(archivo,"\nNombre del cliente: %s",&lista[i].nombre);
		fscanf(archivo,"\nApellido paterno del cliente: %s",&lista[i].apaterno);
		fscanf(archivo,"\nApellido materno del cliente: %s",&lista[i].amaterno);
		fscanf(archivo,"\nID de cuentas del cliente: %d",&lista[i].cuentas.idccliente);
		fscanf(archivo,"\nNombre de usuario del cliente: %s",&lista[i].usuario);
		fscanf(archivo,"\nContraseña del cliente: %s",&lista[i].contrasena);
		fscanf(archivo,"\nSaldo de la cuenta de ahorros (Debito): %f",&lista[i].cuentas.saldo_debito);
		fscanf(archivo,"\nSaldo de adeudos con el banco (Credito): %f\n",&lista[i].cuentas.saldo_credito);
	}
	fclose(archivo);
}

void ImprimeCuentas(cliente *lista){
	int i;
	for(i=0;i<numclientes;i++){
		printf("cliente #%d\n",i);
		printf("\nid de las cuentas del cliente: ");
		printf("%d",lista[i].cuentas.idccliente);
		printf("\nsaldo de la cuenta de ahorros (Debito): ");
		printf("%f",lista[i].cuentas.saldo_debito);
		printf("\nsaldo de adeudos con el banco (Credito): ");
		printf("%f",lista[i].cuentas.saldo_credito);
	}
}

void ImprimeSaldoDebito(cliente *lista){
	int i;
	for(i=0;i<numclientes;i++){
		printf("cliente #%d\n",i);
		printf("\nid de las cuentas del cliente: ");
		printf("%d",lista[i].cuentas.idccliente);
		printf("\nsaldo de la cuenta de ahorros (Debito): ");
		printf("%f",lista[i].cuentas.saldo_debito);
	}
}

void ImprimeSaldoCredito(cliente *lista){
	int i;
	for(i=0;i<numclientes;i++){
		printf("cliente #%d\n",i);
		printf("\nid de las cuentas del cliente: ");
		printf("%d",lista[i].cuentas.idccliente);
		printf("\nsaldo de adeudos con el banco (Credito): ");
		printf("%f",lista[i].cuentas.saldo_credito);
	}
}

void ImprimeCuentasC(cliente *lista,int n){
	printf("Cliente #%d\n",n);
	printf("\nid de las cuentas del cliente: ");
	printf("%d",lista[n].cuentas.idccliente);
	printf("\nsaldo de la cuenta de ahorros (Debito): ");
	printf("%f",lista[n].cuentas.saldo_debito);
	printf("\nsaldo de adeudos con el banco (Credito): ");
	printf("%f",lista[n].cuentas.saldo_credito);

}

void ImprimeSaldoDebitoC(cliente *lista,int n){
	printf("Cliente #%d\n",n);
	printf("\nsaldo de la cuenta de ahorros (Debito): ");
	printf("%f",lista[n].cuentas.saldo_debito);
}

void ImprimeSaldoCreditoC(cliente *lista,int n){
	printf("Cliente #%d\n",n);
	printf("\nid de las cuentas del cliente: ");
	printf("\nsaldo de adeudos con el banco (Credito): ");
	printf("%f",lista[n].cuentas.saldo_credito);
}

void RegistrarPago(cliente *lista,int n){
	int pago;
	printf("Tus adeudos son: %d\n",lista[n].cuentas.saldo_credito);
	printf("De cuanto sera tu pago?\n");
	scanf("%d",&pago);
	lista[n].cuentas.saldo_credito-=pago;
	printf("Tus adeudos son: %d\n",lista[n].cuentas.saldo_credito);
}