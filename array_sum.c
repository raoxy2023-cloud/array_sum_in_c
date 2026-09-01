#include <stdio.h>gcc --version

int main(void) {
    int sum = 0;
    int len;
    printf("Number of element:");
    scanf("%d", &len);

    int a[len];
    printf("enter integers:\n");
    for (int i = 0; i < len; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("The sum of array is: %d\n", sum);

    return 0;
}