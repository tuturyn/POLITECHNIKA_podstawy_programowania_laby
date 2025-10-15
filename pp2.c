
#include <stdio.h>
int suma = 0;
void odwrotnie(int n) {
    if (n == 0) return;
    int liczba;
    scanf("%d", &liczba);
    suma += liczba;
    odwrotnie(n - 1);
    printf("%d ", liczba);
}
int main(void) {
    int n;    
    printf("podaj liczbe n: ");
    scanf("%d", &n);
    odwrotnie(n);
    printf("\nsuma to %d\n", suma);
    return 0;
}