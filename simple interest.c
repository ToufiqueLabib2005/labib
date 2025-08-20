#include <stdio.h>
/*_*/
int main(){
    float A,B,C,Simple_interest;
    printf("Enter the ammount of principle: ");
    scanf("%f",&A);
    printf("Enter the ammount of intrast rate (in %%): ");
    scanf("%f",&B);
    printf("Enter the ammount of Time(in year): ");
    scanf("%f",&C);
    Simple_interest = A*(B/100)*C;
    printf("simple interest is: %.3f/-",Simple_interest);


return 0;
}
