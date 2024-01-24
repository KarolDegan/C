#  include<stdio.h>
int main(){
    int h1,m1,h2,m2, minutos=0, hora;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    
    while (h1!=0 || m1!=0 || h2!=0 || m2!=0){

        if(h1 == h2){
            if (m1 == m2){
                minutos = 24*60;
            }
            else if (m1 < m2)
                minutos = m2 - m1;
            else
                minutos = 23*60 + (60 - m1) + m2;
        }
        
        if (h1<h2){
            if (m1 == m2)
                minutos = (h2-h1)*60;
            else if (m1 < m2){
                hora = h2 - h1;
                minutos = ((60 - m1) + m2)%60;
                minutos = hora*60 + minutos;
            }
            else{
                hora = (h2 -h1) -1;
                minutos = (60 - m1) + m2;
                minutos = hora*60 + minutos; 
            }
            
        }
        if(h1>h2){
            if (m1 == m2){
                hora = (24-h1) + h2;
                minutos = (hora)*60 ;
            }
            else if (m1 < m2){
                hora = (24-h1) + h2;
                minutos = ((60 - m1) + m2)%60;
                minutos = hora*60 + minutos;
            }
            else{
                hora = (24-h1) + h2 -1;
                minutos = (60 - m1) + m2;
                minutos = hora*60 + minutos; 
            }
            
        }
        printf("%d\n", minutos);

        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    }
        

}