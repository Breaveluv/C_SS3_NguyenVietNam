#include <stdio.h>

int main(int argc, const char * argv[]) {
    float num1, num2, num3, Sum, Avg;
    printf("hay nhap diem toan ");
    scanf("%f", &num1);
    printf("hay nhap diem van ");
    scanf("%f", &num2);
    printf("hay nhap diem anh ");
    scanf("%f", &num3);
    Sum = num1 +num2 +num3;
    Avg = Sum /3;
    printf("tong diem cua ba mon la %.2f\ndiem trung binh cong cua ba mon la %.2f\n", Sum,Avg );
    return 0;
}