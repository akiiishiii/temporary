#include <cstdio>

double rate, pay, loan, a1, a2, a3;

int main() {
    printf("Enter amout of loan: ");
    scanf("%lf", &loan);
    printf("Enter interest rate: ");
    scanf("%lf", &rate);
    printf("Enter monthly payment: ");
    scanf("%lf", &pay);
    rate = (rate / 100.0) / 12.0;
    putchar('\n');
    a1 = (loan - pay) + loan * rate;
    a2 = (a1 - pay) + a1 * rate;
    a3 = (a2 - pay) + a2 * rate;
    printf("%lf %lf %lf %lf\n", rate, a1, a2, a3);
    printf("%lf ", rate);
    for (int i = 0; i < 3; i++) {
        loan *= (rate + 1.0);
        loan -= pay;
        printf("%lf ", loan);
    }
    putchar('\n');
    /*
    printf("Balance remaining after first payment: $%.2lf\n", calc());
    printf("Balance remaining after second payment: $%.2lf\n", calc());
    printf("Balance remaining after third payment: $%.2lf\n", calc());
    */
    return 0;
}
