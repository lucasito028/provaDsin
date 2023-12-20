#include <stdio.h>

void questao01();

void questao02();

void questao03();

void questao04();

void questao05();

void questao06();

void questao07();




int main()
{
    questao07();

    return 0;
}

void questao01(){
    
    int horastrabalhadas, diasdomes;
    float salarioporhora, salario;
    
    printf("Dias trabalhados no mês:\n");
    scanf("%d", &diasdomes);
    printf("Horas Trabalhadas por dia:\n");
    scanf("%d", &horastrabalhadas);
    printf("Salario por hora:\n");
    scanf("%f", &salarioporhora);
    
    salario = horastrabalhadas * diasdomes * salarioporhora;
    printf("Salario Bruto: %f\n", salario);
    
    salario /= 1.03;
    printf("Salario Com desconto: %f\n", salario);
    
}

void questao02(){
    
    int A, B, C, D;
    
    printf("Valor de A:\n");
    scanf("%d", &A);
    printf("Valor de B:\n");
    scanf("%d", &B);
    printf("Valor de C:\n");
    scanf("%d", &C);
    printf("Valor de D:\n");
    scanf("%d", &D);
    
    if(A%2 == 0 && D > 0 && C > 0 && B > C && D > A && (D + C) > (A + B)){
        printf("Valores aceitos\n");
    }else{
        printf("Valores não aceitos\n");
    }
    
}

void questao03(){

    int notas[8] = {200, 100, 50, 20, 10, 5, 2, 1};
    int valor, i = 0, p = 0;

    printf("Fale um valor da nota:\n");
    scanf("%d", &valor);

    printf("Para %d\n", valor);

    while(i < 8){

        while((valor - notas[i]) > 0){
            valor -= notas[i];
            p++;
        }
        printf("%d Nota(s) de %d\n", p, notas[i]);
        
        p = 0;
        i++;

    }
}

void questao04(){
    
    int A, B, C, X;
    
    printf("Valor de A:\n");
    scanf("%d", &A);
    printf("Valor de B:\n");
    scanf("%d", &B);
    printf("Valor de C:\n");
    scanf("%d", &C);

    
    if(C != 1 && A == 0 && B == 0){
        printf("Solução Impossível\n");
    }else{

        X = (A + B);
        X /= (1 + -(C));

        printf("X é:%d\n", X);
    }
    
}

void questao05(){

    char padraomercosul[9] = "ABCDEFGHIJ", placa[7];

    int padraobrasil[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};

    int d;

    printf("Colocar valor da placa\n")
    scanf("%s", &placa);

    printf("Caso a placa MercoSul digite - 1\n 
    Caso a placa do Brasil digite - 2\n")
    scanf("%d", &d);

    switch (d)
    {
    case 1:
        break;

    case 2:
        break;
    
    default:
    printf("Não foi possivel escolher\n")
        break;
    }
}

void questao07(){

    char titulo1[45], titulo2[45];
    int i = 0;

    printf("Colocar valor da placa\n")
    scanf("%s", &titulo1);

    printf("Colocar valor da placa\n")
    scanf("%s", &titulo2);

    while(i < 4){
        
        i++;
    }
}