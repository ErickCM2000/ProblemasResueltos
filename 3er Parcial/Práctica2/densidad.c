#include "math.h"
#include "densidad.h"

// Del gramo entre centímetro cúbico
double gracm(double a){ return(a); }
double grakgmc(double a){ return(a*1000); }
double gralbp(double a){ return(a*62.428); }
double graga(double a){ return(a*8.3454); }

// Del kilogramo entre metro cúbico
double kgacm(double a){ return(a*pow(10,-3)); }
double kgmcakgmc(double a){ return(a); }
double kgalbp(double a){ return(a*6.2428*pow(10,-2)); }
double kgaga(double a){ return(a*8.3554*pow(10,-3)); }

// De la libra entre pie cúbico
double lbpacm(double a){ return(a*1.6018*pow(10,-2)); }
double lbpakgmc(double a){ return(a*16.018); }
double lbpalbp(double a){ return(a); }
double lbpaga(double a){ return(a*0.13368); }

// De la libra entre galón
double lbgacm(double a){ return(a*0.11983); }
double lbgakgmc(double a){ return(a*119.83); }
double lbgalbp(double a){ return(a*7.4805); }
double lbgaga(double a){ return(a); }