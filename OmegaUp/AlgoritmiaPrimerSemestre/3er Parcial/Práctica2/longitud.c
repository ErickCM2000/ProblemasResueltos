#include "math.h"
#include "longitud.h"

// Del centímetro
double cmacm(double a){ return(a); }
double cmametro(double a){ return(a*0.01); }
double cmapulgada(double a){ return(a*0.39370); }
double cmapie(double a){ return(a*0.032808); }
double cmayarda(double a){ return(a*0.010936); }
double cmamilla(double a){ return(a*6.2137*pow(10,-6)); }

// Del metro
double macm(double a){ return(a*100); }
double mametro(double a){ return(a); }
double mapulgada(double a){ return(a*39.370); }
double mapie(double a){ return(a*3.2808); }
double mayarda(double a){	return(a*1.0936); }
double mamilla(double a){ return(a*6.2137*pow(10,-4)); }

// De la pulgada
double puacm(double a){ return(a*2.54); }
double puametro(double a){ return(a*0.0254); }
double puapulgada(double a){ return(a); }
double puapie(double a){ return(a*0.083333); }
double puayarda(double a){ return(a*0.027778); }
double pumilla(double a){	return(a*1.5783*pow(10,-5)); }

// Del pie
double piacm(double a){ return(a*30.48); }
double piametro(double a){ return(a*0.3048); }
double piapulgada(double a){ return(a*12); }
double piapie(double a){ return(a); }
double piayarda(double a){ return(a*0.33333); }
double pimilla(double a){	return(a*1.8939*pow(10,-4)); }

// De la yarda
double yaracm(double a){ return(a*91.44); }
double yarametro(double a){ return(a*0.9144); }
double yarapulgada(double a){ return(a*36); }
double yarapie(double a){ return(a*3); }
double yarayarda(double a){ return(a); }
double yaramilla(double a){ return(a*5.6818*pow(10,-4)); }

// De la milla
double miacm(double a){ return(a*1.6093*pow(10,5)); }
double miametro(double a){ return(a*1.6093*pow(10,3)); }
double miapulgada(double a){ return(a*6.336*pow(10,4)); }
double miapie(double a){ return(a*5); }
double miayarda(double a){ return(a*1760); }
double miamilla(double a){ return(a); }