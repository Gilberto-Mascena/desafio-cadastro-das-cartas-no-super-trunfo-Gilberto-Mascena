#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <string.h> // Inclui a biblioteca para manipulação de strings

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

typedef struct
{
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

void ImprimePessoa(Carta c1)
{
    printf("Código: %d\n", c1.codigo);
    printf("Nome: %s\n", c1.nome);
    printf("População: %d\n", c1.populacao);
    printf("Área: %.2f\n", c1.area);
    printf("PIB: %.2f\n", c1.pib);
    printf("Pontos Turísticos: %d\n", c1.pontos_turisticos);
}

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    Carta c1;

    printf("Digite o código da cidade: ");
    scanf("%d", &c1.codigo);

    getchar(); // Consome o \n que ficou no buffer

    printf("Digite o nome da cidade: ");
    // fgets é utilizado para capturar strings com espaços, sizeof(c1.nome) é o tamanho máximo da string e stdin é a origem da string
    fgets(c1.nome, sizeof(c1.nome), stdin); 
    // strcspn é uma função que retorna o tamanho da string até o caractere especificado, neste caso, o \n
    c1.nome[strcspn(c1.nome, "\n")] = 0; // Substitui o \n por \0

    printf("Digite a população da cidade: ");
    scanf("%d", &c1.populacao);

    getchar();

    printf("Digite a área da cidade: ");
    scanf("%f", &c1.area);

    getchar();

    printf("Digite o PIB da cidade: ");
    scanf("%f", &c1.pib);

    getchar();

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &c1.pontos_turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n-------- Dados da carta --------\n");
    ImprimePessoa(c1);

    return 0;
}
