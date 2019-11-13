#include "math.h"
#include "masa.h"

// Del gramo
double gag(double a){ return(a); }
double gakg(double a){ return(a*pow(10,-3)); }
double gaoz(double a){ return(a*3.5274*pow(10,-2)); }
double galb(double a){ return(a*2.2046*pow(10,-3)); }
double gatonm(double a){ return(a*pow(10,-6)); }
double gatonc(double a){ return(a*1.1023*pow(10,-6)); }

// Del kilogramo
double kgag(double a){ return(a*1000); }
double kgakg(double a){ return(a); }
double kgaoz(double a){ return(a*35.274); }
double kgalb(double a){ return(a*2.2046); }
double kgatonm(double a){ return(a*pow(10,-3)); }
double kgatonc(double a){ return(a*1.1023*pow(10,-3)); }

// De la onza
double ozag(double a){ return(a*28.350); }
double ozakg(double a){ return(a*2.8350*pow(10,-2)); }
double ozaoz(double a){ return(a); }
double ozalb(double a){ return(a*0.0625); }
double ozatonm(double a){ return(a*2.8350*pow(10,-5)); }
double ozatonc(double a){ return(a*3.125*pow(10,-5)); }

// De la libra
double lbag(double a){ return(a*453.59); }
double lbakg(double a){ return(a*0.45359); }
double lbaoz(double a){ return(a*16); }
double lbalb(double a){ return(a); }
double lbatonm(double a){ return(a*4.5359*pow(10,-4)); }
double lbatonc(double a){ return(a*5*pow(10,-4)); }

// De la tonelada métrica
double tmag(double a){ return(a*pow(10,6)); }
double tmakg(double a){ return(a*1000); }
double tmaoz(double a){ return(a*3.5274*pow(10,-4)); }
double tmalb(double a){ return(a*2204.6); }
double tmatonm(double a){ return(a); }
double tmatonc(double a){ return(a*1.1023); }

// De la tonelada corta
double tcag(double a){ return(a*9.0718*pow(10,5)); }
double tcakg(double a){ return(a*907.18); }
double tcaoz(double a){ return(a*3.2*pow(10,4)); }
double tcalb(double a){ return(a*2000); }
double tcatonm(double a){ return(a*0.90718); }
double tcatonc(double a){ return(a); }