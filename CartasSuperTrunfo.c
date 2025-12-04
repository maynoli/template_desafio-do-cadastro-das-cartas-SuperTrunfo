
#include <stdio.h>
#include <string.h> // Incluído para futuras operações com strings, se necessário

// Definição da estrutura (struct) para uma Carta
// Uma struct é um tipo de dado definido pelo usuário que agrupa variáveis
// de diferentes tipos sob um único nome.
typedef struct {
    char estado[8];      // Nome do estado (até 7 letras + '\0')
    char cidade[50];     // Nome da cidade
    int populacao;       // Número de habitantes
    float area;          // Área em km²
    float pib;           // PIB da cidade (em bilhões)
    int pontosTuristicos; // Pontos turísticos
} Carta; // Agora, "Carta" é um novo tipo de dado

// Função para exibir os detalhes de uma carta específica
void exibirCarta(const Carta *c, int numero) {
    printf("-------------------------\n");
    printf("Carta %d \n", numero);
    printf("Estado: %s\n", c->estado);
    printf("Codigo: %s%d\n", c->estado, numero); // Exibe o estado seguido do número da carta
    printf("Nome da Cidade: %s\n", c->cidade);
    printf("Populacao: %d habitantes\n", c->populacao);
    printf("Area: %.2f km\n", c->area);
    printf("PIB: %.2f bilhoes de reais\n", c->pib);
    printf("Pontos Turisticos: %d pontos\n", c->pontosTuristicos);
    printf("-------------------------\n");
}

int main() {
    // Declaração das variáveis utilizando a struct
    // cartaA e cartaB são agora variáveis do tipo "Carta",
    // contendo automaticamente todos os campos definidos na struct.
    Carta cartaA; 
    Carta cartaB;

    // Mensagem inicial de boas-vindas
    printf("\n");
    printf("=========================\n");
    printf("Bem vindo ao super trunfo\n");
    printf("=========================\n");
    printf("\n");

    // --- Cadastro da primeira carta (Carta 1) ---
    printf("## Vamos iniciar o cadastro da Carta 1\n");
    printf("Informe o Estado (sem espaços): ");
    scanf("%7s", cartaA.estado); // Usando %7s para prevenir overflow no array de 8 chars

    printf("Informe a cidade (sem espaços): ");
    scanf("%49s", cartaA.cidade); 

    printf("Informe o numero de habitantes: ");
    scanf("%d", &cartaA.populacao);

    printf("Informe a area da cidade (km²): ");
    scanf("%f", &cartaA.area);

    printf("Informe o pib da cidade (em bilhoes de reais): ");
    scanf("%f", &cartaA.pib);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &cartaA.pontosTuristicos);


    // --- Cadastro da segunda carta (Carta 2) ---
    printf("\n");
    printf("## Vamos iniciar o cadastro da Carta 2\n");
    printf("Informe o Estado (sem espaços): ");
    scanf("%7s", cartaB.estado);

    printf("Informe a cidade (sem espaços): ");
    scanf("%49s", cartaB.cidade);

    printf("Informe o numero de habitantes: ");
    scanf("%d", &cartaB.populacao);

    printf("Informe a area da cidade (km²): ");
    scanf("%f", &cartaB.area);

    printf("Informe o pib da cidade (em bilhoes de reais): ");
    scanf("%f", &cartaB.pib);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &cartaB.pontosTuristicos);
    printf("\n");
    

    // --- Exibe os resultados das cartas cadastradas ---
    printf("## Vamos aos resultados \n");

    // Chamada à função para exibir a Carta 1
    exibirCarta(&cartaA, 1);
    printf("\n");
    
    // Chamada à função para exibir a Carta 2
    exibirCarta(&cartaB, 2);

    return 0; // Finaliza o programa com sucesso
}