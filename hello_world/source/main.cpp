#include <nds.h>
#include <stdio.h>

int main(void) {
    consoleDemoInit();

    // Stampa il messaggio sullo schermo superiore del Nintendo DS
    iprintf("\n\n");
    iprintf("  ==========================\n");
    iprintf("   Tanti Auguri di\n");
    iprintf("   Buon Anniversario! <3\n");
    iprintf("  ==========================\n\n");
    iprintf("  Premi START per uscire...");

    while(pmMainLoop()) {
        swiWaitForVBlank();
        scanKeys();
        
        int keys = keysDown();
        if (keys & KEY_START) break;
    }

    return 0;
}
