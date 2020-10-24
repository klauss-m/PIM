#include <stdio.h>

//Tela de agendamentos.

int escolhaAgendamento;

void menuAgendamento(){
    cabecalho();
    printf("%", center_print("AGENDAMENTOS",120));
    printf("\n\n");
    headerLine();
    printf("\n\n");

    printf("\t\t\t\t\t\t    1 - NOVO\n");
    printf("\t\t\t\t\t\t    2 - CONSULTAR\n");
    printf("\n\n\n\n");
    scanf("\t\t\t\t\t\t%d", &escolhaAgendamento);
    agendamento(escolhaAgendamento);
}

int agendamento(escolhaAgendamento){

    switch(escolhaAgendamento){

        case 1:
            novoAgendamento();
            break;
        case 2:
            printf("Teste 2");
            break;
        default:
            system("cls");
            cabecalho();
            printf("\t\t\t\t\t\tOPCAO INVALIDA!\n");
            printf("\t\t\t\t\t\tRETORNANDO A TELA ANTERIOR...\n");
            sleep(2);
            menuAgendamento();
            break;
    }
    return 0;
}

void novoAgendamento(){
    system("cls");
    cabecalho();

}

void consultarAgendamento(){
    system("cls");
    cabecalho();
    printf("Teste consulta.");

}


