#include<stdio.h>

int main(){
    printf("nhap vao nhiet do(C): ");
    float C;
    scanf("%f",&C);
    float F = C * 9/5 + 32;
    printf("%f(C) = %f(F)", C, F);
}