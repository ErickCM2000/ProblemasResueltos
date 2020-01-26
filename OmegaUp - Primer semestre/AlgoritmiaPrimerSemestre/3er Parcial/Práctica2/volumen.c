#include "math.h"
#include "volumen.h"

// Del centímetro cúbico
double cubcmacm(double a){ return(a); }
double cubcmalitro(double a){ return(a*pow(10,-3)); }
double cubcmametro(double a){ return(a*pow(10,-6)); }
double cubcmapulgada(double a){ return(a*6.1024*pow(10,-2)); }
double cubcmapie(double a){ return(a*3.5315*pow(10,-5)); }
double cubcmagalon(double a){ return(a*2.6417*pow(10,-4)); }

// Del litro
double lacm(double a){ return(a*1000); }
double lalitro(double a){ return(a); }
double lametro(double a){ return(a*pow(10,-3)); }
double lapulgada(double a){ return(a*61.024); }
double lapie(double a){ return(a*3.5313*pow(10,-2)); }
double lagalon(double a){ return(a*0.26417); }

// Del metro cúbico
double cubmacm(double a){ return(a*pow(10,6)); }
double cubmalitro(double a){ return(a*1000); }
double cubmametro(double a){ return(a); }
double cubmapulgada(double a){ return(a*61.1021*pow(10,4)); }
double cubmapie(double a){ return(a*35.315); }
double cubmagalon(double a){ return(a*264.17); }

// De la pulgada cúbica
double cubpuacm(double a){ return(a*16.387); }
double cubpualitro(double a){ return(a*1.6387*pow(10,-2)); }
double cubpuametro(double a){ return(a*1.6387*pow(10,-5)); }
double cubpuapulgada(double a){ return(a); }
double cubpuapie(double a){ return(a*5.7870*pow(10,-4)); }
double cubpuagalon(double a){ return(a*4.3290*pow(10,-3)); }

// Del pie cúbico
double cubpiacm(double a){ return(a*28317); }
double cubpialitro(double a){ return(a*28.317); }
double cubpiametro(double a){ return(a*2.8317*pow(10,-2)); }
double cubpiapulgada(double a){ return(a*1728); }
double cubpiapie(double a){ return(a); }
double cubpiagalon(double a){ return(a*7.4805); }

// Del galón cúbico
double gacm(double a){ return(a*3785.4); }
double galitro(double a){ return(a*3.7854); }
double gametro(double a){ return(a*3.7854*pow(10,-3)); }
double gapulgada(double a){ return(a*231); }
double gapie(double a){ return(a*0.13368); }
double gagalon(double a){ return(a); }