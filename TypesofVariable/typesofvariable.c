#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4532;
    char initial = 'A';
    char first_name[] = "Zed";
    char last_name[] = "Shaw";
    long longvar = 1L * 1024L * 1024L * 1024L;
    char nul_byte = '\0';


    printf("%d\n", distance);
    printf("%f\n", power);
    printf("%f\n", super_power);
    printf("%c\n", initial);
    printf("%s\n", first_name);
    printf("%s\n", last_name);
    printf("%ld\n",longvar);


    return 0;
}
