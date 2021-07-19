//Given the three numbers a(=8), b(=4),c and constant value PI=3.1415, 
//calculate and display the following result using macros (preprocessor directives)
// c= PI * mult(a,b) //the macro mult(a,b) perform the multiplication of a & b(a*b)
// c= PI * sum(a,b) //the macro sum(a,b) perform the sum of a & b (a+b)
// c= PI * sub(a,b) //the macro sub(a,b) perform the subtraction of a & b (a-b)
// c= PI * div(a,b) //the macro div(a,b) perform the division of a & b (a/b)
#include <stdio.h>
#define circleArea(r) (3.1415*(r)*(r))
#define PI 3.1415
#define mult(a,b) (a*b)
#define sum(a,b) (a+b)
#define sub(a,b) (a-b)
#define div(a,b) (a/b)

int main(){
    int a = 8;
    int b = 4;
    float c;

    c = PI * mult(a,b); // expands to (3.1415*(8*4))
    printf("%.4f * (%d * %d) = %.2f\n", PI, a, b, c);

    c = PI * sum(a,b); // expands to (3.1415*(8+4))
    printf("%.4f * (%d + %d) = %.2f\n", PI, a, b, c);

    c = PI * sub(a,b); // expands to (3.1415*(8-4))
    printf("%.4f * (%d - %d) = %.2f\n", PI, a, b, c);

    c = PI * div(a,b); // expands to (3.1415*(8/4))
    printf("%.4f * (%d / %d) = %.2f\n", PI, a, b, c);

    return 0;
}