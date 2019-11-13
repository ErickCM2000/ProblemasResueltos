#include <stdio.h>
#include<math.h>

#define PI 3.14159265

//*****LINEA RECTA*****
void Ecuaciondelarectadadasupendienteyunpuntodelamisma();
void Ecuaciondelarectaquepasapordospuntos();
void Distanciaentredospuntosdelplano();
void Puntomedioentredospuntosdelplano();
void Perimetroyareadeuntrianguloenelplano();
//*****LA CIRCUNFERENCIA*****
void Ecuaciondelacircunferenciaconcentroenelorigenyradior();
void EcuaciondelacircunferenciaconcentroCyradior();
void EcuaciondelacircunferenciaconcentroCyunpuntoP();
void EcuaciondelacircunferenciaconP1yP2comoextremosdeldiametro();
//*****COORDENADAS POLARES*****
void Pasarunpuntodecoordenadasrectangularesapolares();
void Pasarunpuntodecoordenadaspolaresarectangulares();

//DEFINICION DE TIPOS DE DATOS DEL PROGRAMADOR
typedef struct{float x, y;}coordenada;

int main(){

	int menus;
	MenuPrincipal:

	printf("*****MENU PRINCIPAL*****\n");
	printf("1.-La Linea Recta\n");
	printf("2.-La Circunferencia\n");
	printf("3.-Coordenadas Polares\n");
	printf("4.-Salir\n");

	scanf("%d",&menus);

	switch(menus){

		case 1: 
			printf("*****LINEA RECTA*****\n");
			printf("1.-Ecuacion de la recta dada su pendiente y un punto de la misma\n");
			printf("2.-Ecuacion de la recta que pasa por dos puntos\n");
			printf("3.-Distancia entre dos puntos del plano\n");
			printf("4.-Punto medio entre dos puntos del plano\n");
			printf("5.-Perimetro y area de un triangulo en el plano\n");
			printf("6.-Regresar al menu principal\n");
			scanf("%d",&menus);
			switch(menus){

				case 1: 
					printf(" Ecuacion de la recta dada su pendiente y un punto de la misma:\n");
					Ecuaciondelarectadadasupendienteyunpuntodelamisma();					
					break;
				case 2: 
					printf(" Ecuacion de la recta que pasa por dos puntos:\n");
					Ecuaciondelarectaquepasapordospuntos();
					break;
				case 3: 
					printf(" Distancia entre dos puntos del plano:\n");
					Distanciaentredospuntosdelplano();
					break;
				case 4: 
					printf(" Punto medio entre dos puntos del plano:\n");
					Puntomedioentredospuntosdelplano();
					break;
				case 5: 
					printf(" Perimetro y area de un triangulo en el plano:\n");
					Perimetroyareadeuntrianguloenelplano();
					break;
				case 6: 
					goto MenuPrincipal;
					break;
			}

			break;
		case 2: 
			printf("*****LA CIRCUNFERENCIA*****\n");
			printf("1.-Ecuacion de la circunferencia con centro en el origen y radio r\n");
			printf("2.-Ecuacion de la circunferencia con centro C y radio r\n");
			printf("3.-Ecuacion de la circunferencia con centro C y un punto P\n");
			printf("4.-Ecuacion de la circunferencia con P1 y P2 como extremos del diametro\n");
			printf("5.-Regresar al menu principal\n");
			scanf("%d",&menus);
			switch(menus){

				case 1: 
					printf(" Ecuacion de la circunferencia con centro en el origen y radio r:\n");
					Ecuaciondelacircunferenciaconcentroenelorigenyradior();
					break;
				case 2: 
					printf(" Ecuacion de la circunferencia con centro C y radio r:\n");
					EcuaciondelacircunferenciaconcentroCyradior();
					break;
				case 3: 
					printf(" Ecuacion de la circunferencia con centro C y un punto P:\n");
					EcuaciondelacircunferenciaconcentroCyunpuntoP();
					break;
				case 4: 
					printf(" Ecuacion de la circunferencia con P1 y P2 como extremos del diametro:\n");
					EcuaciondelacircunferenciaconP1yP2comoextremosdeldiametro();
					break;
				case 5: 
					goto MenuPrincipal;
					break;
			}
			break;
		case 3: 
			printf("*****COORDENADAS POLARES*****\n");
			printf("1.-Pasar un punto de coordenadas rectangulares a polares\n");
			printf("2.-Pasar un punto de coordenadas polares a rectangulares\n");
			printf("3.-Regresar al menu principal\n");
			scanf("%d",&menus);
			switch(menus){

				case 1: 
					printf(" Pasar un punto de coordenadas rectangulares a polares:\n");
					Pasarunpuntodecoordenadasrectangularesapolares();
					break;
				case 2: 
					printf(" Pasar un punto de coordenadas polares a rectangulares:\n");
					Pasarunpuntodecoordenadaspolaresarectangulares();
					break;
				case 3: 
					goto MenuPrincipal;
					break;
			}
			break;
		case 4: 
			break; 
	}

	return 0;
}

void Ecuaciondelarectadadasupendienteyunpuntodelamisma(){

	float pendiente, aux1, aux2;
	coordenada p;

	printf("Ingresar Pendiente: ");
	scanf("%f",&pendiente);
	printf("Ingresar coordenada(x,y): ");
	scanf("%f,%f",&p.x, &p.y);

	aux1 = (pendiente*p.x)*(-1);
	
	aux2 = (aux1)+(p.y);

	if (aux2<0)
	{
		printf("y = %.2fx%.2f\n", pendiente, aux2);
	}else{
		printf("y = %.2fx+%.2f\n", pendiente, aux2);
	}
	

	return;
}

void Ecuaciondelarectaquepasapordospuntos(){

	coordenada p1, p2;
	float pendiente, aux1, aux2;

	printf("Ingresar primer coordenada(x,y): ");
	scanf("%f,%f", &p1.x, &p1.y);
	printf("Ingresar segunda coordenada(x,y): ");
	scanf("%f,%f",&p2.x, &p2.y);

	pendiente = (p2.y-p1.y)/(p2.x-p1.x);

	aux1 = (pendiente*p1.x)*(-1);
	
	aux2 = (aux1)+(p1.y);

	if (aux2<0)
	{
		printf("y = %.2fx%.2f\n", pendiente, aux2);
	}else{
		printf("y = %.2fx+%.2f\n", pendiente, aux2);
	}		

	return; 
}

void Distanciaentredospuntosdelplano(){

	coordenada p1, p2;
	float distancia;

	printf("Ingresar primer coordenada(x,y): ");
	scanf("%f,%f", &p1.x, &p1.y);
	printf("Ingresar segunda coordenada(x,y): ");
	scanf("%f,%f",&p2.x, &p2.y);
	distancia = sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
	printf("%.2f\n", distancia);

	return;
}

void Puntomedioentredospuntosdelplano(){

	coordenada p1, p2, puntomedio;
	
	printf("Ingresar primer coordenada(x,y): ");
	scanf("%f,%f", &p1.x, &p1.y);
	printf("Ingresar segunda coordenada(x,y): ");
	scanf("%f,%f",&p2.x, &p2.y);
	puntomedio.x = (p1.x+p2.x)/2;
	puntomedio.y = (p1.y+p2.y)/2;
	printf("(%.2f,%.2f)\n", puntomedio.x, puntomedio.y);

	return;
}

void Perimetroyareadeuntrianguloenelplano(){

	coordenada p1, p2, p3;
	float area, perimetro;

	printf("Ingresar primer coordenada(x,y): ");
	scanf("%f,%f", &p1.x, &p1.y);
	printf("Ingresar segunda coordenada(x,y): ");
	scanf("%f,%f",&p2.x, &p2.y);
	printf("Ingresar tercera coordenada(x,y): ");
	scanf("%f,%f",&p3.x, &p3.y);

	perimetro = (sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2)))+(sqrt(pow(p3.x-p2.x,2)+pow(p3.y-p2.y,2)))+(sqrt(pow(p3.x-p1.x,2)+pow(p3.y-p1.y,2)));
	area = .5*(((p1.x*p2.y)+(p2.x*p3.y)+(p3.x*p1.y))-((p1.x*p3.y)+(p3.x*p2.y)+(p2.x*p1.y)));
	printf("%.2f\n", perimetro);
	printf("%.2f\n", area);

	return;
}

void Ecuaciondelacircunferenciaconcentroenelorigenyradior(){

	float radio;

	printf("Ingresar Radio: ");
	scanf("%f",&radio);
	printf("Forma Ordinaria: x^2+y^2 = %.2f\n", radio*radio);
	printf("Ecuacion General: x^2+y^2-%.2f\n", radio*radio);

	return;
}

void EcuaciondelacircunferenciaconcentroCyradior(){

	coordenada centro;
	float radio;

	printf("Ingresar centro(x,y): ");
	scanf("%f,%f", &centro.x, &centro.y);
	printf("Ingresar Radio: ");
	scanf("%f",&radio);

	if (centro.x<0 && centro.y>0)
	{
		printf("Forma Ordinaria: (x+%.2f)^2+(y-%.2f)^2 = %.2f\n", centro.x*-1, centro.y, radio*radio);
	}
	if (centro.y<0 && centro.x>0)
	{
		printf("Forma Ordinaria: (x-%.2f)^2+(y+%.2f)^2 = %.2f\n", centro.x, centro.y*-1, radio*radio);
	}
	if (centro.x<0 && centro.y<0)
	{
		printf("Forma Ordinaria: (x+%.2f)^2+(y+%.2f)^2 = %.2f\n", centro.x*-1, centro.y*-1, radio*radio);
	}
	if (centro.x>0 && centro.y>0)
	{
		printf("Forma Ordinaria: (x-%.2f)^2+(y-%.2f)^2 = %.2f\n", centro.x, centro.y, radio*radio);
	}
		
	return;
}

void EcuaciondelacircunferenciaconcentroCyunpuntoP(){

	coordenada centro, punto;
	float radio;

	printf("Ingresar centro(x,y): ");
	scanf("%f,%f", &centro.x, &centro.y);
	printf("Ingresar punto donde pasa la circunferencia(x,y): ");
	scanf("%f,%f",&punto.x, &punto.y);

	radio = sqrt(pow(centro.x-punto.x,2)+pow(centro.y-punto.y,2));

	if (centro.x<0 && centro.y>0)
	{
		printf("Forma Ordinaria: (x+%.2f)^2+(y-%.2f)^2 = %.2f\n", centro.x*-1, centro.y, radio*radio);
	}
	if (centro.y<0 && centro.x>0)
	{
		printf("Forma Ordinaria: (x-%.2f)^2+(y+%.2f)^2 = %.2f\n", centro.x, centro.y*-1, radio*radio);
	}
	if (centro.x<0 && centro.y<0)
	{
		printf("Forma Ordinaria: (x+%.2f)^2+(y+%.2f)^2 = %.2f\n", centro.x*-1, centro.y*-1, radio*radio);
	}
	if (centro.x>0 && centro.y>0)
	{
		printf("Forma Ordinaria: (x-%.2f)^2+(y-%.2f)^2 = %.2f\n", centro.x, centro.y, radio*radio);
	}

	return;
}

void EcuaciondelacircunferenciaconP1yP2comoextremosdeldiametro(){

	coordenada p1, p2, centro;
	float radio;
	
	printf("Ingresar primer coordenada(x,y): ");
	scanf("%f,%f", &p1.x, &p1.y);
	printf("Ingresar segunda coordenada(x,y): ");
	scanf("%f,%f",&p2.x, &p2.y);

	centro.x = (p1.x+p2.x)/2;
	centro.y = (p1.y+p2.y)/2;

	radio = sqrt(pow(centro.x-p1.x,2)+pow(centro.y-p1.y,2));

	if (centro.x<0 && centro.y>0)
	{
		printf("Forma Ordinaria: (x+%.2f)^2+(y-%.2f)^2 = %.2f\n", centro.x*-1, centro.y, radio*radio);
	}
	if (centro.y<0 && centro.x>0)
	{
		printf("Forma Ordinaria: (x-%.2f)^2+(y+%.2f)^2 = %.2f\n", centro.x, centro.y*-1, radio*radio);
	}
	if (centro.x<0 && centro.y<0)
	{
		printf("Forma Ordinaria: (x+%.2f)^2+(y+%.2f)^2 = %.2f\n", centro.x*-1, centro.y*-1, radio*radio);
	}
	if (centro.x>0 && centro.y>0)
	{
		printf("Forma Ordinaria: (x-%.2f)^2+(y-%.2f)^2 = %.2f\n", centro.x, centro.y, radio*radio);
	}

	printf("Centro: (%.2f,%.2f)\n", centro.x, centro.y);
	printf("%.2f\n", radio);

	return;
}

void Pasarunpuntodecoordenadasrectangularesapolares(){

	coordenada p;
	float r, o;

	printf("Ingresar coordenada(x,y): ");
	scanf("%f,%f",&p.x, &p.y);

	r = sqrt(pow(p.x,2)+pow(p.y,2));

	o = atan2 (p.y,p.x);

	printf("(%.2f,%.2f)\n", r, o);

	return;
}

void Pasarunpuntodecoordenadaspolaresarectangulares(){

	coordenada p;
	float aux1, aux2, r, o;

	printf("Ingresar distancia: ");
	scanf("%f",&r);
	printf("Ingresar angulo: ");
	scanf("%f",&o);

	aux1 = cos((o*PI)/180);
	p.x = r*aux1;
	aux2 = sin((o*PI)/180);
	p.y = r*aux2;

	printf("(%.2f,%.2f)\n", p.x, p.y);

	return;
}   