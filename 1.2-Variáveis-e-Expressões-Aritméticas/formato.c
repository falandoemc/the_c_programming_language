#include<stdio.h>

main() {
    printf("printf(\"%%d\\n\", 3);\n");
    printf("%d\n", 3);
    printf("----------\n");
    printf("printf(\"%%d\\n\", 3333333);\n");
    printf("%d\n", 3333333);
    printf("----------\n");
    printf("printf(\"%%6d\\n\", 3333333);\n");
    printf("%6d\n", 3333333);
    printf("----------\n");
    printf("printf(\"%%6d\\n\", 333);\n");
    printf("%6d\n", 333);
    printf("----------\n");
    printf("printf(\"%%f\\n\", 3.123);\n");
    printf("%f\n", 3.123);
    printf("----------\n");
    printf("printf(\"%%6f\\n\", 4444444.123);\n");
    printf("%6f\n", 4444444.123);
    printf("----------\n");
    printf("printf(\"%%10f\\n\", 44.123);\n");
    printf("%10f\n", 44.123);
    printf("----------\n");
    printf("printf(\"%%.2f\\n\", 4444444.123);\n");
    printf("%.2f\n", 4444444.123);
    printf("----------\n");
    printf("printf(\"%%6.2f\\n\", 5.123);\n");
    printf("%6.2f\n", 5.123);
}
