#include <stdio.h>

// 1) Chapga tekislangan uchburchak
void left_triangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
}

// 2) O'ngga tekislangan uchburchak
void right_triangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) printf(" ");
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
}

// 3) To'liq piramida
void full_pyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) printf(" ");
        for (int k = 1; k <= 2*i - 1; k++) printf("*");
        printf("\n");
    }
}

// 4) Bo'sh (hollow) piramida
void hollow_pyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) printf(" ");
        for (int k = 1; k <= 2*i - 1; k++) {
            if (i == n || k == 1 || k == 2*i - 1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}

// 5) Romb (diamond)
void diamond(int n) {
    // yuqori qism (piramida)
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) printf(" ");
        for (int k = 1; k <= 2*i - 1; k++) printf("*");
        printf("\n");
    }
    // pastki qism (teskari piramida)
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) printf(" ");
        for (int k = 1; k <= 2*i - 1; k++) printf("*");
        printf("\n");
    }
}

// 6) Bo'sh to'rtburchak
void hollow_rectangle(int rows, int cols) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}

int main(void) {
    int n;
    printf("O'lcham n ni kiriting (masalan, 5): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Noto'g'ri qiymat.\n");
        return 1;
    }

    printf("\n1) Chapga tekislangan uchburchak:\n");
    left_triangle(n);

    printf("\n2) O'ngga tekislangan uchburchak:\n");
    right_triangle(n);

    printf("\n3) To'liq piramida:\n");
    full_pyramid(n);

    printf("\n4) Bo'sh (hollow) piramida:\n");
    hollow_pyramid(n);

    printf("\n5) Romb (diamond):\n");
    diamond(n);

    printf("\n6) Bo'sh to'rtburchak (n x 2n):\n");
    hollow_rectangle(n, 2*n);

    return 0;
}
