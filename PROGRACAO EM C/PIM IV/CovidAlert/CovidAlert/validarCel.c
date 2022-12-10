int validarCEL(char *cel)
{
    int aux = 0;
    if (strlen(cel) != 11)
        return 0;
    else if ((strcmp(cel, "00000000000") == 0) || (strcmp(cel, "11111111111") == 0) || (strcmp(cel, "22222222222") == 0) ||
             (strcmp(cel, "33333333333") == 0) || (strcmp(cel, "44444444444") == 0) || (strcmp(cel, "55555555555") == 0) ||
             (strcmp(cel, "66666666666") == 0) || (strcmp(cel, "77777777777") == 0) || (strcmp(cel, "88888888888") == 0) ||
             (strcmp(cel, "99999999999") == 0) || (strcmp(cel, "12345678912") == 0) || (strcmp(cel, "98765431298") == 0) ||
             (strcmp(cel, "01234567890") == 0) || (strcmp(cel, "09876543210") == 0))
        return 0;
    else
    {
        for (int i = 0; i < 11; i++)
        {
            aux = 0;
            for (int j = 0; j < 10; j++)
            {
                if (cel[i] == j + '0'){
                    aux = 1;
                }
            }
            if (aux != 1)
                return 0;
        }
        return 1;
    }
}
