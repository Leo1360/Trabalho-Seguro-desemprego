/***********************************/
/* Aluno:Leonardo Henrique         */
/* Aluno:Pamela Ferreira           */
/* Aluno:Rhayssa Raimundo          */
/* Linguagem de Programacao        */
/* Prof. Eliane                    */
/***********************************/

#include <stdio.h>
#include <stdlib.h>


int main(){

    int opt,meses;
    opt = meses = 0;
    char optsn;
    float wages = 0;
    int validar = 0;
    float valorparcela = 0;

    printf("=== Seguro desemprego ===\nResponda as questoes e descubra se voce tem \ndireito ao seguro desemprego, o tempo e valor ;)");
    printf("\n\nEscolha a categoria na qual voce se encaixa\n [1] Trabalhador formal\n [2] Trabalhador Domestico\n [3] Pescador\n [4] Trabalhador resgatado de trabalho\n    escravo\n>>> ");
    scanf("%d",&opt);
    
    switch(opt){ // verificando a categoria
        case 1: //Caso ele seja trabalhador formal
            printf("\n\nShow de bola! Voce eh trabalhador formal\nAgora me diga, qual o motivo da sua saida da empresa:");
            printf("\n [1] Eu fui demitido sem justa causa :(\n [2] Fui demitido por justa causa\n [3] Demitido/sai por conta de um curso dado pelo empregador\n [4] Pedi para sair/outros motivos\n>>> ");
            scanf("%d",&opt);
            switch(opt){ // separando pelo motivo da demissao (só foi com switch por graca, podia ser um if hehehe)
                case 1: // caso tenha sido demitido sem justa causa
                    printf("\n\nFaz quanto tempo que voce saiu?\n>>> ");
                    scanf("%d",&opt);

                    if(opt <= 36){
                        printf("\n\nVoce era assalariado?[S/N]\n>>> ");
                        scanf("%s",&optsn);

                        if( (optsn == 's') || (optsn == 'S' ) ){
                            printf("\n\nPor quantos meses seguidos voce trabalhou la?\n>>> ");
                            scanf("%d", &meses); // captura dos meses trabalhados

                            if (meses >= 6){
                                printf("\n\nVoce esta trabalhando,recebendo o beneficio da prestacao \ncontinuada(exceto auxilio creche e pensao por morte), ou tem \nrenda sulficiente para sua manutencao?[S/N]\n>>> ");
                                scanf("%s",&optsn);

                                if ((optsn == 'n') || (optsn == 'N' )){ 
                                    printf("Qual o valor medio do seu salario dos ltimos 3 meses?\n**Media = (S1 + S2 + S3) / 3\n>>> ");
                                    scanf("%f",&wages); // captura do valor do salario

                                    printf("\n\nShow de bola!  Voce tem direito ao seguro desemprego");
                                    validar = 1; //caso tenha cumprido todas as exigencias ele e marcado como validado, o calculo e feito depois
                                            if (wages <= 1222.77){ //calculo do valor do beneficio
	                                           valorparcela = (wages * 0.8);
	                                           printf ("\nValor do beneficio = %0.2f", valorparcela); 
                                            }   
                                            if ((wages  >= 1222.77) && (wages < 2038.15)){
                                                  valorparcela = ((wages * 0.5) + 978.22);
                                           	       printf ("\nValor do beneficio = %0.2f", valorparcela);
                                            }
                                            else{ 
                                                 (wages >2038.15);
                                              	  valorparcela = 1385.91;
                                                  printf ("\nValor do beneficio = %0.2f", valorparcela);
                                            }
                                }
                                else{
                                    printf("Infelizmente voce nao tem direito ao seguro desemprego :(");
                                }
                            }

                            else{
                                printf("Infelizmente voce nao tem direito ao seguro desemprego \npor conta dos meses trabalhados,\nprecisa ser no minimo 6 meses");
                                }
                        }

                        else{
                        printf("Infelizmente voce nao tem direito ao seguro desemprego :(");
                        }
                    }

                    else{

                    }
                    break;

                case 3:
                    printf("\n\nVoce se matriculou no curso/programa de qualificacao?[S/N]\n>>> ");
                    scanf("%s",&optsn);
                    if( (optsn == 's') || (optsn == 'S') ){
                        printf("\n\nPor quantos meses seguidos voce trabalho la?\n>>> ");
                        scanf("%d",&meses);
                        printf("Qual o valor medio do seu salario dos ltimos 3 meses?\n**Media = (S1 + S2 + S3) / 3\n>>> ");
                        scanf("%f",&wages);
                        validar = 1;
                        printf("Show de bola, voce tem direito ao seguro desemprego");
                                            if (wages <= 1222.77){ //calculo do valor do beneficio
	                                           valorparcela = (wages * 0.8);
	                                           printf ("\nValor do beneficio = %0.2f", valorparcela); 
                                            }   
                                            if ((wages  >= 1222.77) && (wages < 2038.15)){
                                                  valorparcela = ((wages * 0.5) + 978.22);
                                           	       printf ("\nValor do beneficio = %0.2f", valorparcela);
                                            }
                                            else{ 
                                                 (wages >2038.15);
                                              	  valorparcela = 1385.91;
                                                  printf ("\nValor do beneficio = %0.2f", valorparcela);
                                            }
                    }
                    else{
                        printf("Infelizmente voce nao tem direito ao seguro desemprego, \nvoce precisa estar matriculado no curso para solicitar");
                    }
                    break;

                default:
                    printf("Infelizmente voce nao tem direito ao seguro desemprego");
                    break;
            }

            break;
        case 2: // caso seja trabalhador domestico
            printf("Foi demissao sem justa causa:\n>>> ");
            scanf("%s",&optsn);

            if((optsn == 's') || (optsn == 'S')){
                printf("Por quantos meses continuos voce trabalho \nexclusivamente como domestico(a):\n>>> ");
                scanf("%d",&meses); //capoturando meses trabalhados

                if (meses >= 15){
                    printf("Faz quantos meses que voce saiu:\n>>> ");
                    scanf("%d",&opt);

                    if (opt <= 24){
                        printf("\n\nVoce esta trabalhando,recebendo o beneficio da prestacao \ncontinuada(exceto auxilio creche e pensao por morte), ou tem \nrenda sulficiente para sua manutencao?[S/N]\n>>> ");
                        scanf("%s",&optsn);

                        if((optsn == 'n') || (optsn == 'N' )){
                            printf("Qual o valor medio do seu salario dos ltimos 3 meses?\n**Media = (S1 + S2 + S3) / 3\n>>> ");
                            scanf("%f",&wages); //capoturando salario
                            validar = 1; //caso tenha cumprido todas as exigencias ele e marcado como validado, o calculo e feito depois
                            printf("Show de bola, voce tem direito ao seguro desemprego");
                                            if (wages <= 1222.77){ //calculo do valor do beneficio
	                                           valorparcela = (wages * 0.8);
	                                           printf ("\nValor do beneficio = %0.2f", valorparcela); 
                                            }   
                                            if ((wages  >= 1222.77) && (wages < 2038.15)){
                                                  valorparcela = ((wages * 0.5) + 978.22);
                                           	       printf ("\nValor do beneficio = %0.2f", valorparcela);
                                            }
                                            else{ 
                                                 (wages >2038.15);
                                              	  valorparcela = 1385.91;
                                                  printf ("\nValor do beneficio = %0.2f", valorparcela);
                                            }
                        }
                        else{
                            printf("Infelizmente voce nao tem direito ao seguro desemprego");
                        }
                    }
                    else{
                        printf("Infelizmente voce nao tem direito ao seguro desemprego");
                    }
                }
                else{
                    printf("Infelizmente voce nao tem direito ao seguro desemprego");
                }
            }
            else{
                printf("Infelizmente voce nao tem direito ao seguro desemprego");
            }
            break;
        case 3: // caso seja pescador
            ;
            
            break;
        case 4: // caso seja trabalhador resgatado
            ;
            break;
        default:
            printf("Acho que opcao que voce digitou nao e valida, tenta de novo\n, mas dessa vez tem que se de 1 a 4 ;)");
            break;
            
    }
    return 0;
}
