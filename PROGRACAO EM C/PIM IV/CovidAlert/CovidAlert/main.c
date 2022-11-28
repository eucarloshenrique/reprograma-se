#include <stdio.h>
#include <stdlib.h>

char *armazena(int, int);
int validarCPF(char *);
int validarCEL(char *);
int validarData(int, int, int);
//int validarEMAIL(char *);
//int validarESTD(char *);
//int validarCEP(char *);

char *armazena(int tamanhoDado, int idDado)
{
    char *ptr = malloc(tamanhoDado * sizeof(char)); // Reserva espaço na memôria para o vetor.
    int retornodia, retornomes, retornoano, validacao;

    switch (idDado)
    {
    case 1:
        for (int i = 0; i < tamanhoDado; i++) // Laço para armazena o que será digitado pelo usuário.
            scanf("%c", &ptr[i]);
        fflush(stdin); // Limpar o buffer.

        validacao = 0;
        return ptr;
        break;

    case 2:
        for (int i = 0; i < tamanhoDado; i++) // Laço para armazena o que será digitado pelo usuário.
            scanf("%c", &ptr[i]);
        fflush(stdin); // Limpar o buffer.
        validacao = validarCPF(ptr);

        while (validacao != 1)
        {
            printf(">>>>>CPF INVALIDO, DIGITE NOVAMENTE<<<<<<<<<\nCPF(Somente numeros): ");
            for (int i = 0; i < tamanhoDado; i++) // Laço para armazena o que será digitado pelo usuário.
                scanf("%c", &ptr[i]);
            fflush(stdin); // Limpar o buffer.
            validacao = validarCPF(ptr);
        }

        validacao = 0;
        return ptr; // retorno da função.
        break;

    case 3:
        scanf("%d/%d/%d", &retornodia, &retornomes, &retornoano);
        validacao = validarData(retornodia, retornomes, retornoano);
        while (validacao != 1)
        {
            printf(">>>>>DATA DE NASCIMENTO INVALIDA, DIGITE NOVAMENTE<<<<<\nFormato: DD/MM/AAAA: ");
            scanf("%d/%d/%d", &retornodia, &retornomes, &retornoano);
            fflush(stdin); // Limpar o buffer.
            validacao = validarData(retornodia, retornomes, retornoano);
        }

        ptr[0] = retornodia;
        ptr[1] = '/';
        ptr[2] = retornomes;
        ptr[3] = '/';
        ptr[4] = retornoano;

        validacao = 0;
        return ptr;
        break;
    case 4:
        for (int i = 0; i < tamanhoDado; i++){ // Laço para armazena o que será digitado pelo usuário.
            scanf("%c", &ptr[i]);
        }
       validacao = validarCEL(ptr);

        printf("TELEFONE ARMAZENADO: ");
        for (int i = 0; i < tamanhoDado; i++)
            {
        printf("%c", ptr[i]);
            }

        while (validacao != 1)
        {
            printf(">>>>>TELEFONE INVALIDO, DIGITE NOVAMENTE<<<<<<<<<\nTELEFONE (Somente numeros): ");
            for (int i = 0; i < tamanhoDado; i++) // Laço para armazena o que será digitado pelo usuário.
                scanf("%c", &ptr[i]);
            fflush(stdin); // Limpar o buffer.
            validacao = validarCEL(ptr);
        }
        validacao = 0;
        return ptr;
        break;
        /*
    case 5:
        for (int i = 0; i < tamanhoDado; i++) // Laço para armazena o que será digitado pelo usuário.
            scanf("%c", &ptr[i]);
        fflush(stdin); // Limpar o buffer.
        validacao = validarEMAIL(ptr);
        while (validacao != 1)
        {
            printf("\n>>>>>EMAIL INVALIDO, DIGITE NOVAMENTE<<<<<<<<<\nEMAIL ex: fulano@gmail.com): ");
            for (int i = 0; i < tamanhoDado; i++) // Laço para armazena o que será digitado pelo usuário.
                scanf("%c", &ptr[i]);
            fflush(stdin); // Limpar o buffer.
            validacao = validarEMAIL(ptr);
        }
        return ptr;
        break;
    case 6:
        getchar();
        for (int i = 0; i < tamanhoDado; i++)
        { // Laço para armazena o que será digitado pelo usuário.
            scanf("%c", &ptr[i]);
            if (ptr[i] == '\n')
            {
                break;
            }
        }
        fflush(stdin);
        return ptr;
        break;
    // case 7:
    // printf("PULEI\n");

            getchar();
            for (int i = 0; i < tamanhoDado; i++)
                scanf("%c", &ptr[i]);
            fflush(stdin);
            //printf("%d\n", validacao);
            //printf("%c%c", ptr[0], ptr[1]);
            validacao = validarESTD(ptr);
            while (validacao != 1)
            {
                printf("\n>>>>>ESTADO INVALIDO, DIGITE NOVAMENTE<<<<<<<<<\nESTADO: ");
                for (int i = 0; i < tamanhoDado; i++)
                    scanf("%c", &ptr[i]);
                fflush(stdin); // Limpar o buffer.
                validacao = validarESTD(ptr);
            }
            return ptr;
            break;
        }
        case 8:
            for (int i = 0; i < tamanhoDado; i++) // Laço para armazena o que será digitado pelo usuário.
                scanf("%c", &ptr[i]);
            fflush(stdin); // Limpar o buffer.
            validacao = validarCEP(ptr);

            while (validacao != 1)
            {
                printf(">>>>>CEP INVALIDO, DIGITE NOVAMENTE<<<<<<<<<\nCEP (Somente numeros): ");
                for (int i = 0; i < tamanhoDado; i++) // Laço para armazena o que será digitado pelo usuário.
                    scanf("%c", &ptr[i]);
                fflush(stdin); // Limpar o buffer.
                validacao = validarCEP(ptr);
            }
            return ptr;
            break;
        }*/
        default:
            break;

    }
}
void cadastraPaciente()
{
    int id = 0, tNome = 10, tCpf = 11, tNasci = 5, tCel = 11, tRua = 100, tBairro = 100, tCidade = 100, tEmail = 35, tEstado = 2, tCep = 8, tDiag = 5, tComorb = 3, diaNasci, mesNasci, anoNasci; // Variáveis para definir os tamanhos dos vetores.

    char nome[tNome], cpf[tCpf], tel[tCel], rua[tRua], bairro[tBairro], cidade[tCidade], estado[tEstado], cep[tCep], nasci[tNasci], email[tEmail], diag[tDiag], comorb[tComorb]; // Definição dos vetores

    /****************************************************************************************
    printf("\n---DADOS PESSOAIS---");
    printf("\nNOME: ");
    id = 1;
    // Aciona o ponteiro para armazenar o Nome.
    char *ptr = armazena(tNome, id); // VERIFICAR TAMANHO DO VETOR
    free(ptr);
    //*****************************************************************************************

    //*****************************************************************************************
    printf("\nCPF(Somente numeros): ");
    id = 2;
    // Aciona o ponteiro para armazenar o CPF.
    ptr = armazena(tCpf, id);
    free(ptr);
    //*****************************************************************************************

    //*****************************************************************************************
    printf("DATA DE NASCIMENTO, formato: DD/MM/AAAA: ");
    id = 3;
    // Aciona o ponteiro para armazenar a data de nascimento.
    ptr = armazena(tNasci, id); // O RETORNO DO PONTEIRO ESTA ERRADO
    free(ptr);
    //******************************************************************************************
*/
    //******************************************************************************************
    printf("\n\n---CONTATO---");
    printf("\nTELEFONE: ");
    id = 4;
    // Aciona o ponteiro para armazenar
    char *ptr = armazena(tCel, id);

    printf("TELEFONE ARMAZENADO: ");
    for (int i = 0; i < tCel; i++)
    {
        printf("%c", ptr[i]);
    }
    free(ptr);
    //******************************************************************************************
    /*
        //******************************************************************************************
        printf("EMAIL (EX: fulano@gmail.com): ");
        id = 5;
        // Aciona o ponteiro para armazenar
        ptr = armazena(tEmail, id);

        printf("EMAIL ARMAZENADO: ");
        for (int i = 0; i < tEmail; i++)
        {
            printf("%c", ptr[i]);
        }
        free(ptr);

        //******************************************************************************************

        //******************************************************************************************
        printf("\n\n---ENDERECO---");
        printf("\nRUA: ");
        id = 6;
        // Aciona o ponteiro para armazenar
        ptr = armazena(tRua, id);

        printf("RUA ARMAZENADA: ");
        for (int i = 0; ptr[i] != '\n'; i++)
        {
            printf("%c", ptr[i]);
        }
        free(ptr);
        //******************************************************************************************

        //*******************************************************************************************
        printf("BAIRRO: ");
        id = 6;
        // Aciona o ponteiro para armazenar
        ptr = armazena(tBairro, id);

        printf("BAIRRO ARMAZENADO: ");
        for (int i = 0; ptr[i] != '\n'; i++)
        {
            printf("%c", ptr[i]);
        }
        free(ptr);
        //********************************************************************************************

        //********************************************************************************************
        printf("CIDADE: ");
        // Aciona o ponteiro para armazenar
        id = 6;
        ptr = armazena(tBairro, id);

        printf("CIDADE ARMAZENADA: ");
        for (int i = 0; ptr[i] != '\n'; i++)
        {
            printf("%c", ptr[i]);
        }
        free(ptr);

        //********************************************************************************************

        //********************************************************************************************
        printf("ESTADO: ");
        // Aciona o ponteiro para armazenar
        id = 7;
        ptr = armazena(tEstado, id);

        printf("ESTADO ARMAZENADA: ");
        for (int i = 0; i < tEstado; i++)
        {
            printf("%c", ptr[i]);
        }
        free(ptr);

        //*********************************************************************************************

        //*********************************************************************************************
        printf("CEP(Somente numeros): ");
        // Aciona o ponteiro para armazenar
        id = 8;
        ptr = armazena(tCep, id);
        printf("CEP ARMAZENADO: ");
        for (int i = 0; i < tCep; i++)
        {
            printf("%c", ptr[i]);
        }
        free(ptr);

        //*********************************************************************************************
        printf("\n\n---DADOS MEDICOS---");
        printf("\nDATA DE DIAGNOSTICO (Formato EX: 29.06.1995): ");
        // Aciona o ponteiro para armazenar
        ptr = armazena(tDiag, id);

        printf("OBS: PACIENTE POSSUI ALGUMA DOENCA MORBITA (diabetes, obesidade, hipertensão, tuberculose etc...)\nDIGITE S PARA SIM ou N PARA NAO: ");
        // Aciona o ponteiro para armazenar
        ptr = armazena(tComorb, id);*/

    printf("\n\n!!!CADASTRO REALIZADO COM SUCESSO!!!\n\n");
}

int main()
{
    char usuario[50], senha[8], acao;

    /*printf("Digite usuario e senha para login no sistema:\n");
    printf("USUARIO:");
    scanf("%s", &usuario);
    fflush(stdin);
    printf("SENHA:");
    scanf("%s", &senha);
    fflush(stdin);

    printf("\n\nSeja bem vindo(a) ao Covid Alert %s! (%s)\n\n", usuario, senha);
*/
    while ((acao != '0') && (acao != '1'))
    {
        printf("DIGITE 0 PARA SAIR\n");
        printf("DIGITE 1 PARA NOVO CADASTRO\n");
        printf("OPCAO SELECIONADA: ");
        scanf("%c", &acao);
        if (acao == '0' || acao == '1')
        {
            switch (acao)
            {
            case '0':
                return 0;
                break;
            case '1':
                printf("\n!!!PROSSIGA COM O CADASTRO DO(A) PACIENTE!!!\n\n");
                cadastraPaciente();
                acao = 2;
            default:
                break;
            }
        }
        else
        {
            printf("\n>>>>>>>OPCAO SELECIONADA INVALIDA<<<<<<<\n\n");
        }
    }
    return 0;
}
