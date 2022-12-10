int validarCEP(char *cep)
{
    int aux = 0;
    if (strlen(cep) != 8)
        return 0;
    else if ((strcmp(cep, "00000000") == 0) || (strcmp(cep, "11111111") == 0) || (strcmp(cep, "22222222") == 0) ||
             (strcmp(cep, "33333333") == 0) || (strcmp(cep, "44444444") == 0) || (strcmp(cep, "55555555") == 0) ||
             (strcmp(cep, "66666666") == 0) || (strcmp(cep, "77777777") == 0) || (strcmp(cep, "88888888") == 0) ||
             (strcmp(cep, "99999999") == 0) || (strcmp(cep, "12345672") == 0) || (strcmp(cep, "98765431") == 0) ||
             (strcmp(cep, "01234567") == 0) || (strcmp(cep, "09876543") == 0))
        return 0;
    else
    {
        for (int i = 0; i < 8; i++)
        {
            aux = 0;
            for (int j = 0; j < 10; j++)
            {
                if (cep[i] == j + '0')
                {
                    aux = 1;
                }
            }
            if (aux != 1)
                return 0;
        }
        return 1;
    }
}
