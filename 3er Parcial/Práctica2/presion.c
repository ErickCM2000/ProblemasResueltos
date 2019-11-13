#include "math.h"
#include "presion.h"
// De la dina entre centímetro cuadrado
double dincmadincm(double a){ return(a); }
double dincmanm(double a){ return(a*0.1); }
double dincmaatm(double a){ return(a*9.8692*pow(10,-7)); }
double dincmakgcm(double a){ return(a*1.0197*pow(10,-6)); }
double dincmatorr(double a){ return(a*7.5006*pow(10,-4)); }
double dincmainhg(double a){ return(a*2.9530*pow(10,-5)); }
double dincmapulgc(double a){ return(a*1.4504*pow(10,-5)); }

// Del newton entre metro
double nmadincm(double a){ return(a*10); }
double nmanm(double a){ return(a); }
double nmatm(double a){ return(a*9.8692*pow(10,-6)); }
double nmakgcm(double a){ return(a*1.0197*pow(10,-5)); }
double nmatorr(double a){ return(a*7.5006*pow(10,-3)); }
double nmainhg(double a){ return(a*2.9530*pow(10,-4)); }
double nmapulgc(double a){ return(a*1.4504  *pow(10,-4)); }

// De la atmósfera
double atmadincm(double a){ return(a*1.0133*pow(10,6)); }
double atmanm(double a){ return(a*1.0133*pow(10,5)); }
double atmatm(double a){ return(a); }
double atmakgcm(double a){ return(a*1.0332); }
double atmatorr(double a){ return(a*760); }
double atmainhg(double a){ return(a*26.921); }
double atmapulgc(double a){ return(a*14.696); }

// Del kilogramo entre centímetro cuadrado
double kgcmadincm(double a){ return(a*9.8067*pow(10,5)); }
double kgcmanm(double a){ return(a*9.8067*pow(10,4)); }
double kgcmatm(double a){ return(a*0.96784); }
double kgcmakgcm(double a){ return(a); }
double kgcmatorr(double a){ return(a*735.56); }
double kgcmainhg(double a){ return(a*28.959); }
double kgcmapulgc(double a){ return(a*14.2237); }

// Del milímetro de mercurio (Torr)
double torradincm(double a){ return(a*1333.2); }
double torranm(double a){ return(a*133.32); }
double torratm(double a){ return(a*1.3158*pow(10,-3)); }
double torrakgcm(double a){ return(a*1.3595*pow(10,-3)); }
double torratorr(double a){ return(a); }
double torrainhg(double a){ return(a*3.9370*pow(10,-2)); }
double torrapulgc(double a){ return(a*1.9337*pow(10,-2)); }

// De la pulgada de mercurio (inhg)
double inhgadincm(double a){ return(a*3.3864*pow(10,4)); }
double inhganm(double a){ return(a*3386.4); }
double inhgatm(double a){ return(a*3.3421*pow(10,-2)); }
double inhgakgcm(double a){ return(a*3.4532*pow(10,-2)); }
double inhgatorr(double a){ return(a*25.4); }
double inhgainhg(double a){ return(a); }
double inhgapulgc(double a){ return(a*0.49115); }

// De la libra entre pulgada cuadrada
double pulgcadincm(double a){ return(a*6.8945*pow(10,4)); }
double pulgcanm(double a){ return(a*6894.8); }
double pulgcatm(double a){ return(a*6.8046*pow(10,-2)); }
double pulgcakgcm(double a){ return(a*7.0307*pow(10,-2)); }
double pulgcatorr(double a){ return(a*51.715); }
double pulgcainhg(double a){ return(a*2.0360); }
double pulgcapulgc(double a){ return(a); }