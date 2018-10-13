#include <stdio.h>




void Informacja_o_programie() {
    printf("Program rozwiązuje układ dwóch równań liniowych.");
    printf("\na1*x + b1*y = c1\n");
    printf("a2*x + b2*y = c2\n");
    printf("Podaj współczynniki.\n");
}
void Wprowadzanie_danych(double *c1, double *c2, double *a1, double *a2, double *b1, double *b2) {
    printf("Podaj a1: ");
    scanf("%lf", a1);
    printf("\nPodaj b1: ");
    scanf("%lf", b1);
    printf("\nPodaj c1: ");
    scanf("%lf", c1);
    printf("\nPodaj a2: ");
    scanf("%lf", a2);
    printf("\nPodaj b2: ");
    scanf("%lf", b2);
    printf("\nPodaj c2: ");
    scanf("%lf", c2);
}
void Uklad_rownan(double a1, double a2, double b1, double b2, double c1, double c2) {
    printf("Twój układ równań: \n");
    printf("%5.2lf*x +%5.2lf*y = %5.2lf\n", a1, b1, c1);
    printf("%5.2lf*x +%5.2lf*y = %5.2lf\n", a2, b2, c2);
    printf("\n");
}

double wyznacznik(double k, double l, double m, double n){
    return k * n - l * m;

}

int main() {
    double a1, a2, b1, b2, c1, c2;
    double W, Wx, Wy;
    double x, y;
    Informacja_o_programie();
    Wprowadzanie_danych(&c1, &c2, &a1, &a2, &b1, &b2);
    Uklad_rownan(a1, a2, b1, b2, c1, c2);

    W = wyznacznik(a1, a2, b1, b2);
    Wx = wyznacznik(c1, c2, b1, b2);
    Wy = wyznacznik(a1, a2, c1, c2);

    printf("wyznacznik W= %5.2lf ", W);
    printf("\nwyznacznik Wx= %5.2lf ", Wx);
    printf("\nwyznacznik Wy= %5.2lf ", Wy);



    if(W!=0.0){
      x = Wx / W;
      y = Wy / W;

      printf("\nRozwiązanie:\t ");
        printf("x = %5.2lf, y = %5.2lf", x, y);
        printf("\n");


    }else {

    if(Wx!=0.0 || Wy!=0.0)
    {
    printf("\nUkład równań sprzeczny - nie ma rozwiązania. ");
    }else
        {
        printf("\nUkład równań nieoznaczony - nieskończenie wiele rozwiązań.");
    }
}





    return 0;
}





