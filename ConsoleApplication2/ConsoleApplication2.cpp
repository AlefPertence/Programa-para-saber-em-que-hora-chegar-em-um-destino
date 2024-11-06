//3- Uma família em um carro estava indo viajar para um lugar a 500 km de distância na velocidade de 70km/h.  
// Quanto tempo esta família irá demorar pra chegar no seu destino? 


/*
#include <stdio.h>;

int main() {

    float v = 70, d = 500, tempo;
    int minutos, horas;

    tempo = d / v;

    horas = tempo;
    minutos = (tempo - horas) * 60;

    printf("o tempo decorrido para chegra ao seu destino sera de %d horas e %d minutos", h, m);


}
Esse é o programa que o exercício pediu, mas acho que um programa sem valores definidos fica algo mais legal, para que o usuário coloque oque quiser
então farei unma segunda versão com valores para serem inseridos.
*/

#include <stdio.h>;

int main() {

    float d, v, t;

    int h, m;

    printf("insira a distancia do destino: \n");
    scanf_s("%f", &d);
    printf("insira a velocidade que planeja percorrer ate o seu destino: \n");
    scanf_s("%f", &v);

    t = d / v;

    h = (int)t;

    m = (t - h) * 60;



    printf("o tempo decorrido para chegra ao seu destino sera de %d horas e %d minutos", h, m);

}