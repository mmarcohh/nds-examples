#include <nds.h>
#include <stdio.h>
#include <fat.h>

int main(void) {
    // Inizializza la console video
    consoleDemoInit();

    // Inizializza il file system/DLDI per l'avvio con nds-bootstrap
    fatInitDefault();

    // Messaggio d'auguri
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
