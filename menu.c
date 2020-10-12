int menuEscolhido;

void menuRoot(){
    printf("\t\t\t\t\t\t    1 - AGENDAMENTO\n");
    printf("\t\t\t\t\t\t    2 - PACIENTES\n");
    printf("\t\t\t\t\t\t    3 - MEDICOS\n");
    printf("\t\t\t\t\t\t    4 - ADMINISTRATIVO\n");
    printf("\t\t\t\t\t\t    5 - CONTROLE\n");
    printf("\n\n\n\n");
    printf("%", center_print("Status: Digite uma opcao desejada",120));
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
