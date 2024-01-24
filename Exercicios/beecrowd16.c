#include <stdio.h>
#include <stdlib.h> 

 
int main() {
 
    int hi, hf,mi, mf, hora=0, minuto;
    
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    minuto = (60 - mi) + mf;

    if (hi == hf){
        if(mf<=mi){    
            if(minuto < 60){
                hora = 23;
            }
            else{
                hora = 24;
                minuto = 0;
            }
        }
        else{
            hora = 0;
            minuto = mf - mi;
        }   
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);

    }
    else if(hi<hf){
        if (minuto > 60){
            minuto = minuto%60;
        }
        else if (minuto ==60)
            minuto = 0;
        else 
            hora += -1;
        hora += hf-hi;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);
    }
    
    else{
        if (minuto > 60){
            minuto = minuto%60;
        }
        else if (minuto ==60)
            minuto = 0;
        else 
            hora += -1;
        
        hora += (24-hi)+hf;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);
    }
 
    return 0;
}