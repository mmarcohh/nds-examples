#include <nds.h>
#include <stdio.h>
#include <fat.h>

int main(void) {
    // Inizializza la console e il file system per nds-bootstrap
    consoleDemoInit();
    fatInitDefault();

    // Visualizza il messaggio
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
