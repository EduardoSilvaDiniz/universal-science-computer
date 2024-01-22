double CalculaMedia(double arr[], double len)
{
    double media = 0;

    for (int i = 0; i < len; i++)
        media+=arr[i];

    return media/len;
}

int EncontraMaior(int arr[], int len)
{
    int maior = arr[0];
    for (int i = 0; i < len; i++) {
        if (arr[i] > maior)
            maior = arr[i];
    }
    return maior;
}
int EncontraMenor(int arr[], int len)
{
    int menor = arr[0];
    for (int i = 0; i < len; i++) {
        if (arr[i] < menor)
            menor = arr[i];
    }
    return menor;
}

void InverteArray(int arr[], int len)
{
    int swap, j=len;
    for (int i = 0; i < len/2; i++)
    {
        swap = arr[i];
        j -= 1;
        arr[i] = arr[j];
        arr[j] = swap;
    }
    printf("Funcao InverteArray\n");
    for (int i = 0; i < len; i++) {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

void OrdenaArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len-1; j++)
        {
            if (arr[i] < arr[j])
            {
                int swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
    printf("Funcao OrdenarArray\n");
    for (int i = 0; i < len; i++) {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

int SomaArr(int arr[], int len)
{
    int soma = 0;
    for (int i = 0; i < len; i++) {
        soma+=arr[i];
    }
    return soma;
}


int ProdutoArr(int arr[], int len)
{
    int produto = 1;
    for (int i = 0; i < len; i++) {
        produto*=arr[i];
    }
    return produto;
}
