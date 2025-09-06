#include<stdio.h>

// bir qatorli
/*

420
455

*/

int main() {
    // int - bu butin son 4 bayt - 32 bit - print("%d")
    // float -bu m: 2.024557 son 4 bayt - 32 bit - print("%f")
    // char - bu 1 bayt - 8 bit -print("%c")
    // char * - string va 32 bit yoki 64 bit - print("%s")

    // int
    int x = 0;
    int z = sizeof(x);
    printf("x=%d;\n %d bayt\n", x, z); // print(f"x={x}")

    // float
    float y = 25.256175;
    int g = sizeof(y);
    printf("y=%.2f;\n %d bayt\n", y, g); // print(f"x={x}")

    // char
    char a = 'a';
    int a_size = sizeof(a);
    printf("a=%c;\n %d bayt\n", a, a_size);
    // char * -string
    char *name = "Asadbek";
    int name_size = sizeof(name);
    printf("name=%s;\n %d bayt\n", name, name_size);

    return 0;
}