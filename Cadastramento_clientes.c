#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração das variaveis
    char nome[15], sobrenome[15], cidade[25], estado[2], comorbidade[15], email[20];
    int senha, telefone, cpf, nascimento, diagnostico, idade;

    //Login
    printf("Antes de iniciar o programa digite a senha\n");
    printf("Digite a senha: ");
    scanf("%d", &senha);

    if(senha == 12345){

        //Começo do programa
        printf("Esse e o programa de cadastro do covid-19\n\n");
        printf("O paciente foi diagnosticado com covid-19, caso sim digite 0, caso nao digite qualquer outro numero: ");
        scanf("%d", &diagnostico);

        //Caso o paciênte tenha covid
        if(diagnostico == 0){
            printf("Digite o primeiro nome do paciente: ");
            scanf("%s", &nome);

            printf("Digite o sobrenome do paciente: ");
            scanf("%s", &sobrenome);

            printf("Digite a cidade do paciente: ");
            scanf("%s", &cidade);

            printf("Digite a sigla do estado: ");
            scanf("%s", &estado);

            printf("Digite o e-mail do paciente: ");
            scanf("%s", &email);

            printf("Digite aqui a comorbidade do paciente: ");
            scanf("%s", &comorbidade);

            printf("Digite o telefone do paciente[sem o digito]: ");
            scanf("%d", &telefone);

            printf("Digite o cpf do paciente[sem o digito]: ");
            scanf("%d", &cpf);

            printf("Digite em que ano o paciente nasceu: ");
            scanf("%d", &nascimento);
            idade = 2021 - nascimento;

            //Dados que foram digitados
            printf("O nome digitado foi: %s %s \n", nome, sobrenome);
            printf("A cidade digitada foi: %s \n", cidade);
            printf("O estado digitado foi: %s \n", estado);
            printf("O e-mail digitado foi: %s \n", email);
            printf("A comorbidade do paciênte: %s \n", comorbidade);
            printf("O numero digitado foi: %d \n", telefone);
            printf("O numero do cpf digitado foi: %d \n", cpf);
            printf("Ano de nascimento: %d \n", nascimento);
            printf("Sua idade: %d \n", idade);
            printf("Os dados foram salvos");

            //Salvar em outro arquivo
            char arquivo[100];
            int numeros;
            FILE * pfile;

            numeros = telefone, cpf, nascimento, idade;

            pfile = fopen("arquivo.txt", "a");
            scanf("%s %s %s \n %s \n %s \n %s \n %s \n", &nome, &sobrenome, &cidade, &estado, &comorbidade, &email);
            scanf("%d", &numeros);

            fclose(pfile);
            }
    }

    else{
        printf("Login invalido!");
    }

    return 0;
}
