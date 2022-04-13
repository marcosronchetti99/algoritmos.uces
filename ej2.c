#include <stdio.h>
#define MAX_YEAR 5000
#define MIN_YEAR 1900

#define MIN_DAYS 1
#define MAX_DAYS 30

#define MIN_MONTH 1
#define MAX_MONTH 12
#define DATE_FORMAT "%d/%d/%d \n"

int main(){
    int days;
    int month;
    int year;

    printf("ingrese los dias: \n");
    if (scanf("%d", &days) == 0){
        printf("ingresó mal los dias \n");
        return 1;
    }

    if(days < MIN_DAYS || days > MAX_DAYS){
        printf("Los dias ingresados no son validos");
        return 1;
    }

    printf("ingrese los meses: \n");
    if (scanf("%d", &month) == 0){
        printf("ingresó mal los meses \n");
        return 1;
    }
    if(month < MIN_MONTH || month > MAX_MONTH){
        printf("Los meses ingresados no son validos");
        return 1;
    }

    printf("ingrese los años: \n");
    if (scanf("%d", &year) == 0){
        printf("ingresó mal los años \n");
        return 1;
    }
    if(year < MIN_YEAR || year > MAX_YEAR){
        printf("Los años ingresados no son validos");
        return 1;
    }

    printf(DATE_FORMAT,days, month,year);
    return 0;
}