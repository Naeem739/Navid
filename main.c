#include <stdio.h>

int main() {
    
    int a, b, c;
    printf("তিনটি সংখ্যা দিন: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("বৃহত্তম: %d\n", a);
    }
    else if (b >= a && b >= c) {
        printf("বৃহত্তম: %d\n", b);
    }
    else {
        printf("বৃহত্তম: %d\n", c);
    }



    return 0;
}