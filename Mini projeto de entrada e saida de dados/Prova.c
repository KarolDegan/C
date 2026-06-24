#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("Integrantes do Grupo\nKaroline Oliveira Degan\nRaquel Elvira Guerra");
    
    FILE *teste;
    FILE *saida;
    int tam, i=0;
    double *SalBruto, aux;
    double AliqINSS, ValINSS, AliqIR, ValIR, SalLiquido;
    double base;
   
    //Arquivo de entrada
    teste = fopen("salario.txt","r");

    //Arquivo de saída
    saida = fopen("calculos.txt","w");

    fprintf(saida, "%-15s %-15s %-15s %-15s %-15s %-15s %-15s", "Bruto", "AliqINSS", "VAl.INSS", "Base I.R.", "AliqIR", "Val.IR", "Liquido");
    
    if (teste == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }

    else{
        //Colocando os Salário Bruto no Vetor
        tam = 0;
        SalBruto = NULL;
 
        while (fscanf(teste,"%lf\n", &aux) != EOF){
            tam++;
            SalBruto = (double*)realloc(SalBruto, sizeof(double)* tam);
            SalBruto[tam-1] = aux;
        }

        //Ordenar o meu vetor
        int j;
        for(i=0;i<tam;i++){
            for(j=0;j<tam;j++){
                if(SalBruto[i]<SalBruto[j]){
                    aux = SalBruto[j];
                    SalBruto[j] = SalBruto[i];
                    SalBruto[i] = aux;
                }
                
            }
        }

        //Arquivo de saída

        
        //Calculos
        
        //AliqINSS
        for(i=0;i<tam;i++){
            if (SalBruto[i] <= 1751.81)
                AliqINSS = 8;
            else if (SalBruto[i] >= 1751.82 && SalBruto[i]<= 2919.7)
                AliqINSS = 9;
            else if (SalBruto[i] >= 2919.73 && SalBruto[i] <= 5839.45)
                AliqINSS = 11;
            else
                AliqINSS = 0;
            
            //ValINSS
            if (AliqINSS == 0)
                ValINSS = 642.34;
            else
                ValINSS = SalBruto[i] * AliqINSS/100;
            
            //Base I.R. é o valor do salário com o desconto
            base = (SalBruto[i] - ValINSS);
            
            //AliqIR e ValIR
            if ((SalBruto[i] - ValINSS) <= 1903.98){
                
                AliqIR = 0;
                ValIR = 0;
            }
                

            else if((SalBruto[i] - ValINSS) >= 1903.99 && (SalBruto[i] - ValINSS) <= 2826.65){

                AliqIR = 7.5;
                ValIR = (SalBruto[i] - ValINSS) * (AliqIR/100) - 142.80;
                //Se menor que dez zera
                if (ValIR < 10)
                    ValIR = 0;

            }
                
            else if((SalBruto[i] - ValINSS) >= 2826.66 && (SalBruto[i] - ValINSS) <= 3751.05){
                
                AliqIR = 15;
                ValIR = (SalBruto[i] - ValINSS) * (AliqIR/100) - 354.80;
            }
                   
            else if((SalBruto[i] - ValINSS) >= 3751.06 && (SalBruto[i] - ValINSS) <= 4664.68){

                AliqIR = 22.5;
                ValIR = (SalBruto[i] - ValINSS) * (AliqIR/100) - 636.13;
            }  

            else{

                AliqIR = 27.5;
                ValIR = (SalBruto[i] - ValINSS) * (AliqIR/100) - 869.36;
            }
            
            //SalLiquido
            SalLiquido = SalBruto[i] - ValINSS - ValIR;

            //Colocando dados no arquivo de saida
            fprintf(saida, "\n%-15.2lf %-15.1lf %-15.2lf %-15.2lf %-15.1lf %-15.2lf %-15.2lf", SalBruto[i], AliqINSS, ValINSS, base, AliqIR, ValIR, SalLiquido);
        
        
        }

        fclose(teste);
        fclose(saida);
        free(SalBruto);

    }
}