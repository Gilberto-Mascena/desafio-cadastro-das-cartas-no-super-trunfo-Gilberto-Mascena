#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída
#include <string.h> // Inclui a biblioteca para manipulação de strings
#include <stdlib.h> // Inclui a biblioteca padrão

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

// Definição da estrutura Cartas
typedef struct
{
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cartas;

void imprimeDadosCarta(Cartas carta) // Função para imprimir os dados da carta
{
    printf("Código: %d\n", carta.codigo);
    printf("Nome: %s\n", carta.nome);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontos_turisticos);
}

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Sugestão: Utilize um vetor de estruturas para armazenar as cartas cadastradas.
    // Exemplo: Carta cartas[4];

    int quantidadeCartas; // Variável para armazenar a quantidade de cartas que o usuário deseja cadastrar

    printf("Digite a quantidade de carta(s) que deseja cadastrar(ex.: 1 , 2, 3...) : ");
    scanf("%d", &quantidadeCartas);

    printf("\n");

    Cartas *carta = (Cartas *)malloc(quantidadeCartas * sizeof(Cartas)); // Alocando memória para o vetor de cartas

    if (carta == NULL) // If para testar se a memória foi alocada corretamente, caso contrário, exibe uma mensagem de erro
    {
        printf("Erro ao alocar memória");
        return 1;
    }

    printf("-------- Cadastro das cartas --------\n");

    // Laço para cadastrar as cartas
    for (int i = 0; i < quantidadeCartas; i++)
    {
        printf("Carta %d\n", i + 1);

        printf("Digite o código da cidade: ");
        scanf("%d", &carta[i].codigo);
        getchar(); // Limpa o buffer

        printf("Digite o nome da cidade: ");
        fgets(carta[i].nome, sizeof(carta[i].nome), stdin); // Lê a string com espaços
        carta[i].nome[strcspn(carta[i].nome, "\n")] = 0;    // Remove \n

        printf("Digite a população da cidade: ");
        scanf("%d", &carta[i].populacao);

        printf("Digite a área da cidade: ");
        scanf("%f", &carta[i].area);

        printf("Digite o PIB da cidade: ");
        scanf("%f", &carta[i].pib);

        printf("Digite o número de pontos turísticos da cidade: ");
        scanf("%d", &carta[i].pontos_turisticos);
        getchar(); // Limpa o buffer

        printf("\n");
    }

    printf("\n-------- Cartas cadastradas --------\n");

    // Laço para imprimir os dados das cartas
    for (int i = 0; i < quantidadeCartas; i++)
    {
        Cartas cartaAtual = carta[i];  // Atribui a carta atual a variável cartaAtual
        printf("\nCarta %d\n", i + 1); // Imprime o número da carta
        imprimeDadosCarta(cartaAtual); // Chama a função imprimeDadosCarta para imprimir os dados da carta
    }

    printf("\n");

    free(carta); // Libera a memória alocada no vetor de cartas

    return 0;
}
