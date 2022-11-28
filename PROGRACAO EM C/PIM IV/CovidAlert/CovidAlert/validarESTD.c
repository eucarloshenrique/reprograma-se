int validarEstado(char *estado)
{
   //char estado[2] = {"ES"};
if (strlen(estado) != 2)
        return 0;
    else if ((strcmp(estado,"AC") == 0) || (strcmp(estado,"AL") == 0) || (strcmp(estado,"AP") == 0) ||
             (strcmp(estado,"AM") == 0) || (strcmp(estado,"BA") == 0) || (strcmp(estado,"CE") == 0) ||
             (strcmp(estado,"DF") == 0) || (strcmp(estado,"ES") == 0) || (strcmp(estado,"GO") == 0) ||
             (strcmp(estado,"MA") == 0))
    {
      printf("ok\n");
      return 1;
      }
    else
    {
        printf("nao foi\n");
        return 0;
    }
}

