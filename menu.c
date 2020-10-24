int menuEscolhido;
char **usuarioAcesso;

void menuRoot(){

    usuarioAcesso =  verificarUsuario();

    while(!usuarioAcesso[1]){

        cabecalho();
        printf("%", center_print("Credencial Invalida",120));
        printf("\n");
        usuarioAcesso =  verificarUsuario();

    }

    printf("Bem vindo %s\n\n", usuarioAcesso[1]);

    if (atoi(usuarioAcesso[3]) != 5)
        printf("\t\t\t\t\t\t    1 - AGENDAMENTO\n");

    if (atoi(usuarioAcesso[4]) != 5)
        printf("\t\t\t\t\t\t    2 - PACIENTES\n");

    if (atoi(usuarioAcesso[5]) != 5)
        printf("\t\t\t\t\t\t    3 - MEDICOS\n");

    if (atoi(usuarioAcesso[6]) != 5)
        printf("\t\t\t\t\t\t    4 - ADMINISTRATIVO\n");

    if (atoi(usuarioAcesso[7]) != 5)
        printf("\t\t\t\t\t\t    5 - CONTROLE\n");

    printf("\n\n\n\n");
    scanf ("%d", &menuEscolhido);
    menu(menuEscolhido);

}

void menu(menuEscolhido)
{
    switch (menuEscolhido)
    {
    case 1:
        menuAgendamento();
        break;
    case 2:
        menuPaciente();
        break;
    case 3:
        menuMedicos();
        break;
    case 4:
        menuAdministrativo();
        break;
    case 5:
        menuControle();
        break;
        default:
        menuRoot();
    }
}
