#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    char *nama1 = "Ade";
    char *nama2 = "Kaka";
    if (argc < 2) {
        printf("Argumen program Anda kurang\n");
        printf("Tambahkan argumen  seperti %s %s %s", argv[0], nama1, nama2);
        return -1;
    }

    printf("Halo %s\n", argv[1]);
    printf("Halo juga %s\n", argv[2]);
    return 0;
}   