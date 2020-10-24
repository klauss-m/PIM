int escolhaPaciente;


void menuPaciente(){
    cabecalho();
    printf("%", center_print("PACIENTES",120));
    printf("\n\n");
    headerLine();
    printf("\n\n");

    printf("\t\t\t\t\t\t    1 - NOVO\n");
    printf("\t\t\t\t\t\t    2 - CONSULTAR\n");
    printf("\n\n\n\n");
    scanf("\t\t\t\t\t\t%d", &escolhaPaciente);
    paciente(escolhaPaciente);
}

int paciente(escolhaPaciente){

    switch(escolhaPaciente){

        case 1:
            novoPaciente();
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
            menuPaciente();
            break;
    }
    return 0;
}

void novoPaciente(){
    system("cls");
    cabecalho();

}

void consultarPaciente(){
    system("cls");
    cabecalho();
    printf("Teste consulta.");

}
