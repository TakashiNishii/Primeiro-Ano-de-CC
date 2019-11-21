#include <stdio.h>
int main() {
    double a, b, f;
    
    scanf("%f %f", &a,&b);
    b = b*100;
	printf("%f%%",b/a);
    return 0;
}
