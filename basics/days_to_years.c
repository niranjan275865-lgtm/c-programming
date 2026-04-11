#include <stdio.h>
int main(){
    int days = 800;
    int years = days / 365;
    int rem_days = days % 365;

    printf("Years: %d\n", years);
    printf("Remaining Days: %d", rem_days);

    return 0;
}