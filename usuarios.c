#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

const char * str = "users.txt";
char* usuarioAcesso[10] = {""};

void verificarArquivo() {

  time_t rawtime = time(NULL);
  struct tm * ptm = localtime( & rawtime);

  FILE * arquivoTXT;
  arquivoTXT = fopen(str, "r");

  if (arquivoTXT == NULL) {
    arquivoTXT = fopen("users.txt", "w+");
  }

  //Precisa apagar e trocar apenas a primeira linha do arquivo e ajustar a hora
  //http://zetcode.com/articles/cdatetime/ Ajustar p DD/MM/YYYY hh:mm:ss
  fprintf(arquivoTXT, "%s|%02d:%02d:%02d", "Ultima Edição", ptm -> tm_hour, ptm -> tm_min, ptm -> tm_sec);

  fclose(arquivoTXT);

}

char** verificarUsuario(void){
  verificarArquivo();

  char senha[50];
  char senhaPadrao[50] = "pass::";
  char usuarioData[100];
  char * usuario;
  char * token;
  bool usuarioAceito;
  int controleLinhaUsuario = 0;

  FILE * arquivoTXT = fopen("users.txt", "rt");

  printf("%", center_print("Entre com sua credencial",120));
  scanf("%s", &senha);

  strcat(senhaPadrao, senha);

  while (!feof(arquivoTXT)) {
    usuario = fgets(usuarioData, 100, arquivoTXT);
    token = strtok(usuario, "|");

    while (token != NULL) {
      if (strcmp(token, senhaPadrao) == 0) {
        usuarioAceito = true;
        break;
      }

      token = strtok(NULL, "|");

    }

    if (usuarioAceito)
      break;

    controleLinhaUsuario++;
  }

  fclose(arquivoTXT);

  if (usuarioAceito) {
    arquivoTXT = fopen("users.txt", "r");
    char linhaUsuario[1024];

    int controleLinhaArquivo = 0;

    while (fgets(linhaUsuario, sizeof(linhaUsuario), arquivoTXT) != NULL) {

      if (controleLinhaUsuario == controleLinhaArquivo) {

        int i = 0;
        char * p = strtok(linhaUsuario, "|");

        while (p != NULL) {
          usuarioAcesso[i++] = p;
          p = strtok(NULL, "|");
        }
        break;
      }
      controleLinhaArquivo++;
    }
  }

    return (usuarioAcesso);
}
