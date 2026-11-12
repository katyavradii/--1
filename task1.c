#include <stdio.h>
int main() {
    //оголошення змінних
    double a;
    int N;
    //введення даних 
    printf("Enter a number: ");
    scanf("%lf", &a);
    printf("Enter the number of iterations: ");
    scanf("%d", &N);

    double sum = 0.0;
    double term = 1.0; 

    for (int n = 0; n < N; n++) {
        sum += term;
        term = -term * a / (n + 1); 
    }
    printf("Sum: %lf\n", sum);
    return 0;
}
