#include "math.h"
#include "potencia.h"

// De la caloría sobre segundo
double calsacals(double a){ return(a); }
double calsakcals(double a){ return(a*3.6); }
double calsaw(double a){ return(a*4.184); }
double calsakw(double a){ return(a*4.134*pow(10,-3)); }
double calsabtuh(double a){ return(a*14.276); }
double calsahp(double a){ return(a*5.6108*pow(10,-3)); }
double calsalbfth(double a){ return(a*1.1109*pow(10,4)); }

// De la kilocaloría sobre segundo
double kcalsacals(double a){ return(a*0.27778); }
double kcalsakcals(double a){ return(a); }
double kcalsaw(double a){ return(a*1.1622); }
double kcalsakw(double a){ return(a*1.1622*pow(10,-3)); }
double kcalsabtuh(double a){ return(a*3.9657); }
double kcalsahp(double a){ return(a*1.5586*pow(10,-3)); }
double kcalsalbfth(double a){ return(a*3086); }

// Del watt
double wacals(double a){ return(a*0.23901); }
double wakcals(double a){ return(a*0.86042); }
double waw(double a){ return(a); }
double wakw(double a){ return(a*pow(10,-3)); }
double wabtuh(double a){ return(a*3.4121); }
double wahp(double a){ return(a*1.3410*pow(10,-3)); }
double walbfth(double a){ return(a*2655.2); }

// Del kilowatt
double kwacals(double a){ return(a*239.01); }
double kwakcals(double a){ return(a*860.42); }
double kwaw(double a){ return(a*1000); }
double kwakw(double a){ return(a); }
double kwabtuh(double a){ return(a*3412.1); }
double kwahp(double a){ return(a*1.3410); }
double kwalbfth(double a){ return(a*2.6552*pow(10,6)); }

// De la unidad térmica británica entre hora
double btuhacals(double a){ return(a*7.0046*pow(10,-2)); }
double btuhakcals(double a){ return(a*0.25216); }
double btuhaw(double a){ return(a*0.29307); }
double btuhakw(double a){ return(a*2.9307*pow(10,-4)); }
double btuhabtuh(double a){ return(a); }
double btuhahp(double a){ return(a*3.9301); }
double btuhalbfth(double a){ return(a*778.17); }

// Del caballo de fuerza
double hpacals(double a){ return(a*178.23); }
double hpakcals(double a){ return(a*641.62); }
double hpaw(double a){ return(a*745.70); }
double hpakw(double a){ return(a*2.9307*pow(10,-4)); }
double hpabtuh(double a){ return(a*2544); }
double hpahp(double a){ return(a); }
double hpalbfth(double a){ return(a*1.98*pow(10,6)); }

// De la libra-pie entre hora
double lbfthacals(double a){ return(a*9.0013*pow(10,-5)); }
double lbfthakcals(double a){ return(a*3.2405); }
double lbfthaw(double a){ return(a*3.7662*pow(10,-4)); }
double lbfthakw(double a){ return(a*3.7662*pow(10,-7)); }
double lbfthabtuh(double a){ return(a*1.2851*pow(10,-3)); }
double lbfthahp(double a){ return(a*5.0505*pow(10,-7)); }
double lbfthalbfth(double a){ return(a); }