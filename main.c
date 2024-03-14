
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    float salario5;
    float descontoINSS;
    float descontoFGTS;
    float totalDescontos;
    float salarioFinal;
    float descIR1, descIR2, descIR3, descIR4;

    printf("Informe o salario: ");
    scanf("%f", &salario);
    printf("\n");

    printf("Salario Inicial: %.2f", salario);

    salario5 = (salario * 1.05);
    printf("\nSalario Reajustado: %.2f", salario5);


    descontoINSS = (salario5 * 0.11);
    printf("\nDesconto 11%% INSS: %.2f", descontoINSS);

    descontoFGTS = (salario5 * 0.08);
    printf("\nDesconto 8%% FGTS: %.2f", descontoFGTS);

    printf("\n");


    descIR1 = salario5 * 0.075;
    descIR2 = salario5 * 0.15;
    descIR3 = salario5 * 0.225;
    descIR4 = salario5 * 0.275;


    if(salario5< 1903.98){
        printf("Desconto IR: 0.00");
      totalDescontos = ((salario5 * 0.11) + (salario5 * 0.08));
    printf("\nTotal Descontos INSS+FGTS+IR: %.2f", totalDescontos);

    }
    else if(salario5>= 1903.99 && salario5<= 2826.65){
        printf("Desconto IR: %.2f", descIR1);
        totalDescontos = ((salario5 * 0.11) + (salario5 * 0.08) + descIR1);
    printf("\nTotal Descontos INSS+FGTS+IR: %.2f", totalDescontos);

    }
    else if(salario5>=2826.66 && salario5<= 3751.05){
        printf("Desconto IR: %.2f", descIR2);
        totalDescontos = ((salario5 * 0.11) + (salario5 * 0.08) + descIR2);
    printf("\nTotal Descontos INSS+FGTS+IR: %.2f", totalDescontos);

    }
    else if(salario5>=3751.06 && salario5<= 4664.68){
        printf("Desconto IR: %.2f", descIR3);
        totalDescontos = ((salario5 * 0.11) + (salario5 * 0.08) + descIR3);
    printf("\nTotal Descontos INSS+FGTS+IR: %.2f", totalDescontos);

    }
    else if(salario5> 4664.68){
        printf("Desconto IR: %.2f", descIR4);
        totalDescontos = ((salario5 * 0.11) + (salario5 * 0.08) + descIR4);
    printf("\nTotal Descontos INSS+FGTS+IR: %.2f", totalDescontos);

    }

    salarioFinal = salario5 - totalDescontos;
    printf("\nSalario Final: %.2f", salarioFinal);
    if(salarioFinal<salario){
        printf("\n O novo salario final e menor do que o salario recebido antes do aumento!");
    }
    printf("\n");


return 0;
}
