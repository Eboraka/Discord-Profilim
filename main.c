#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *id = "1185495026344669266";
    char komut[256];

    snprintf(komut, sizeof(komut), "start https://discord.com/users/%s", id);
    printf("Discord profili aciliyor...\n");
    system(komut);

    return 0;
}