#include <stdio.h>
#include <stdlib.h>

int main(){
    int opt1;
    int opt2;
    int qtd;
    int valor_compra;
    int valor_caixa;

    valor_caixa = 0;

    while(1){
        printf("deseja iniciar a compra?: \n\n1 - sim\n2 - fechar caixa\n\nopção:");
        scanf("%d", &opt1);

        if(opt1 == 1){//opção: sim
            valor_compra = 0;
            while(1){
            printf("\n\n");
            printf("1 - produto 1\t R$ 10,00\n");
            printf("2 - produto 2\t R$ 20,00\n");
            printf("3 - produto 3\t R$ 30,00\n");
            printf("4 - produto 4\t R$ 40,00\n");
            printf("5 - produto 5\t R$ 50,00\\n");
            printf("6 - produto 6\t R$ 60,00\n");
            printf("7 - produto 7\t R$ 70,00\n");
            printf("8 - produto 8\t R$ 80,00\n");
            printf("9 - produto 9\t R$ 90,00\n");
            printf("97 - fechar compra\n");
            printf("98 - CANCELAR COMPRA\n");

            scanf("%d", &opt2);

            if(opt2 == 1){
                printf("\n\nQuantiade do produto 1: ");
                scanf("%d", &qtd);
                valor_compra = valor_compra + qtd*10;
                printf("\n\nValor parcial: R$ %d,00", valor_compra);
            }
            else{
                if(opt2 == 98){
                    valor_compra = 0;
                    printf("**COMPRA CANCELADA**\n\n\n");
                    break;
                }
                else{
                    if(opt2 == 97){
                        printf("\nValor a pagar: R$ %d,00", valor_compra);
                        valor_caixa = valor_caixa + valor_compra;
                        break;
                    }
                    else{
                        if(opt2==2){
                            printf("\n\nQuantiade do produto 2: ");
                            scanf("%d", &qtd);
                            valor_compra = valor_compra + qtd*10;
                            printf("\n\nValor parcial: R$ %d,00", valor_compra);
                        }
                        else{
                            if(opt2==3){
                                printf("\n\nQuantiade do produto 3: ");
                                scanf("%d", &qtd);
                                valor_compra = valor_compra + qtd*10;
                                printf("\n\nValor parcial: R$ %d,00", valor_compra);
                            }
                        }
                    }
                }
            }
        }
        }
        else{
            if(opt1 == 2){//opção: fechar caixa
               printf("\n\n VALOR DO CAIXA: R$ d,00\n\n", valor_caixa);
                valor_caixa = 0;
                printf("***CAIXA zERADO***\n\n");
            }
            else{// opção invalida
                printf("***OPÇÃO INVALIDA***\n\n\n");
            }
        }
    }







}
