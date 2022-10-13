float Sol_Calcular_Nota_Necesaria(float Solemne1, float Solemne2, float Solemne3,
                        float Control1, float Control2, float Control3){
    return (4-((Solemne1*0.2+Solemne2*0.25+Solemne3*0.3+((Control1+Control2+Control3)/3)*0.25)*0.7))/0.3;
                        }
