// Implementação de risco em C
#include <stdio.h>

struct circulo {
    float raio;
};

struct retangulo {
    float largura;
    float altura;
};

union forma {
    struct circulo c;
    struct retangulo r;
};

enum tipo {
    circulo,
    retangulo,
};

float area(union forma f, enum tipo t) {
    // calculo da area dependendo do tipo
    if (t == circulo) {
        return 3.14 * f.c.raio * f.c.raio;
    } else if (t == retangulo) {
        return f.r.largura * f.r.altura;
    } else {
        return 0;
    }
}

int main() {
    union forma f1, f2;

    printf("Exemplo correto - Circulo\n");
    printf("Raio: ");
    scanf("%f", &f1.c.raio); 
    float area_C = area(f1, circulo);
    printf("Area do circulo: %.2f\n", area_C);
        
    printf("\nExemplo correto - Retangulo\n");
    printf("Largura: ");
    scanf("%f", &f2.r.largura);
    printf("Altura: ");
    scanf("%f", &f2.r.altura);
    float area_R = area(f2, retangulo);
    printf("Area do retangulo: %.2f\n", area_R);
    
    //undefined behavior (comportamento indefinido em C)
    printf("\nExemplo incorreto - Erro Logico\n");
    float area_errada = area(f1, retangulo);
    printf("Area incorreta (erro de tipo): %.2f\n", area_errada);

    return 0;
}