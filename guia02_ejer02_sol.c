#include <stdio.h>
#include <math.h>
float Sol_Sueldo_Base = 500000;
float Sol_Calcular_Sueldo(float Horas){
    if ((Horas <=30)&&(Horas >=25)){return Sol_Sueldo_Base*1.05f;}
    if ((Horas <=35)&&(Horas >=31)){return Sol_Sueldo_Base*1.1f;}
    if ((Horas <=40)&&(Horas >=36)){return Sol_Sueldo_Base*1.15f;}
    if ((Horas <=50)&&(Horas >=41)){return Sol_Sueldo_Base*1.25f;}
    else {return -1.0f;}
}