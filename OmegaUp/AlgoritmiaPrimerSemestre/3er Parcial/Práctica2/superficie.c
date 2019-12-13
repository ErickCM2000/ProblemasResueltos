#include "superficie.h"
#include "math.h"
// Del centímetro cuadrado
double sqcmacm(double a){ return(a); }
double sqcmametro(double a){ return(a*pow(10,-4)); }
double sqcmapulgada(double a){ return(a*0.15500); }
double sqcmapie(double a){ return(a*1.0764*pow(10,-3)); }
double sqcmayarda(double a){ return(a*1.1960*pow(10,-4)); }
double sqcmamilla(double a){ return(a*3.8610*pow(10,-11)); }

// Del metro cuadrado
double sqmacm(double a){ return(a*pow(10,4)); }
double sqmametro(double a){ return(a); }
double sqmapulgada(double a){ return(a*1550); }
double sqmapie(double a){ return(a*10.764); }
double sqmayarda(double a){ return(a*1.1960); }
double sqmamilla(double a){ return(a*3.8610*pow(10,-7)); }

// De la pulgada cuadrado
double sqpuacm(double a){ return(a*6.4516); }
double sqpuametro(double a){ return(a*6.4516*pow(10,-4)); }
double sqpuapulgada(double a){ return(a); }
double sqpuapie(double a){ return(a*6.9444*pow(10,-3)); }
double sqpuayarda(double a){ return(a*7.7160*pow(10,-4)); }
double sqpumilla(double a){ return(a*2.4910*pow(10,-10)); }

// Del pie cuadrado
double sqpiacm(double a){ return(a*929.03); }
double sqpiametro(double a){ return(a*0.092903); }
double sqpiapulgada(double a){ return(a*144); }
double sqpiapie(double a){ return(a); }
double sqpiayarda(double a){ return(a*0.11111); }
double sqpimilla(double a){ return(a*3.5870*pow(10,-8)); }

// De la yarda cuadrado
double sqyaracm(double a){ return(a*8361.3); }
double sqyarametro(double a){ return(a*0.83613); }
double sqyarapulgada(double a){ return(a*1296); }
double sqyarapie(double a){ return(a*9); }
double sqyarayarda(double a){ return(a); }
double sqyaramilla(double a){ return(a*3.2283*pow(10,-7)); }

// De la milla cuadrado 
double sqmiacm(double a){ return(a*2.5900*pow(10,10)); }
double sqmiametro(double a){ return(a*2.5900*pow(10,6)); }
double sqmiapulgada(double a){ return(a*4.0145*pow(10,9)); }
double sqmiapie(double a){ return(a*2.7878*pow(10,7)); }
double sqmiayarda(double a){ return(a*3.0976*pow(10,6)); }
double sqmiamilla(double a){ return(a); }