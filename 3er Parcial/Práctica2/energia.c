#include "math.h"
#include "energia.h"
// Del Joule
double jaj(double a){ return(a); }
double jacal(double a){ return(a*0.23901); }
double jakcal(double a){ return(a*2.3901*pow(10,-4)); }
double jabtu(double a){ return(a*9.4782*pow(10,-4)); }
double jakwh(double a){ return(a*2.7778*pow(10,-7)); }
double jahph(double a){ return(a*3.7251*pow(10,-7)); }
double jalbft(double a){ return(a*0.73756); }
double jalatm(double a){ return(a*9.8692*pow(10,-3)); }

// De la caloría
double calaj(double a){ return(a*4.184); }
double calacal(double a){ return(a); }
double calakcal(double a){ return(a*pow(10,-3)); }
double calabtu(double a){ return(a*3.9657*pow(10,-3)); }
double calakwh(double a){ return(a*1.622*pow(10,-6)); }
double calahph(double a){ return(a*1.5586*pow(10,-6)); }
double calalbft(double a){ return(a*3.0860); }
double calalatm(double a){ return(a*4.1293*pow(10,-2)); }

// De la kilocaloría
double kcalaj(double a){ return(a*4.184*pow(10,-3)); }
double kcalacal(double a){ return(a*1000); }
double kcalakcal(double a){ return(a); }
double kcalabtu(double a){ return(a*3.9657); }
double kcalakwh(double a){ return(a*1.622*pow(10,-3)); }
double kcalahph(double a){ return(a*1.5586*pow(10,-3)); }
double kcalalbft(double a){ return(a*3086); }
double kcalalatm(double a){ return(a*41.293); }

// De la unidad térmica británica (BTU)
double btuaj(double a){ return(a*1055.1); }
double btuacal(double a){ return(a*252.16); }
double btuakcal(double a){ return(a*0.25216); }
double btuabtu(double a){ return(a); }
double btuakwh(double a){ return(a*2.9307*pow(10,-4)); }
double btuahph(double a){ return(a*3.9301*pow(10,-4)); }
double btualbft(double a){ return(a*778.17); }
double btualatm(double a){ return(a*10.413); }

// Del kilowatt entre hora
double kwhaj(double a){ return(a*3.6*pow(10,6)); }
double kwhacal(double a){ return(a*8.6042*pow(10,5)); }
double kwhakcal(double a){ return(a*860.42); }
double kwhabtu(double a){ return(a*3412.1); }
double kwhakwh(double a){ return(a); }
double kwhahph(double a){ return(a*1.3410); }
double kwhalbft(double a){ return(a*2.6552*pow(10,6)); }
double kwhalatm(double a){ return(a*3.5529*pow(10,4)); }

// Del caballo de fuerza por hora
double hphaj(double a){ return(a*2.6845*pow(10,6)); }
double hphacal(double a){ return(a*6.4162*pow(10,5)); }
double hphakcal(double a){ return(a*641.62); }
double hphabtu(double a){ return(a*2544.3); }
double hphakwh(double a){ return(a*0.74570); }
double hphahph(double a){ return(a); }
double hphalbft(double a){ return(a*1.98*pow(10,6)); }
double hphalatm(double a){ return(a*2.6494*pow(10,4)); }

// De la libra entre pie
double lbftaj(double a){ return(a*1.3558); }
double lbftacal(double a){ return(a*0.32405); }
double lbftakcal(double a){ return(a*3.2405*pow(10,-4)); }
double lbftabtu(double a){ return(a*1.2851*pow(10,-3)); }
double lbftakwh(double a){ return(a*3.7662*pow(10,-7)); }
double lbftahph(double a){ return(a*5.0505*pow(10,-7)); }
double lbftalbft(double a){ return(a); }
double lbftalatm(double a){ return(a*1.3381*pow(10,-2)); }

// De la atmósfera entre litro
double latmaj(double a){ return(a*101.33); }
double latmacal(double a){ return(a*24.217); }
double latmakcal(double a){ return(a*2.4217*pow(10,-2)); }
double latmabtu(double a){ return(a*9.6038*pow(10,-2)); }
double latmakwh(double a){ return(a*2.8146*pow(10,-5)); }
double latmahph(double a){ return(a*3.7744*pow(10,-5)); }
double latmalbft(double a){ return(a*74.733); }
double latmalatm(double a){ return(a); }