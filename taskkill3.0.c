#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void menu() {
    system("cls");
    
    printf("============================================\n");
    printf("  Desenvolvido por Luiz Gumz - Versao 3.0\n");
    printf("============================================\n\n");
}

int main() {
    
    char escolha, escolha_2;
    int i;
    
	menu();  
    printf("Deseja iniciar o encerramento das aplicacoes?\n");
    printf("\nInput: (S) sim ou (N) nao\n");
    scanf(" %c", &escolha);
    
    	// Loop para garantir que o input seja válido
    while (escolha != 'S' && escolha != 'N') {
    	menu();
        printf("\nInput invalido! Tente novamente.\n");
        printf("\nInput: (S) sim ou (N) nao\n");
        scanf(" %c", &escolha);
    }

    if (escolha == 'N') {
        printf("\nOperacao cancelada!\n");
    } else if (escolha == 'S') {
        // Fechar todas as tarefas listadas
        const char *programas[] = {
            "TeamViewer_Service.exe", "Dropbox.exe", "GoogleDriveSync.exe",
            "AdobeARM.exe", "EpicgamesLauncher.exe", "Spotify.exe", "chrome.exe",
            "Skype.exe", "Cortana.exe", "AnyDesk.exe", "Code.exe", "devcpp.exe",
            "RustDesk.exe", "BakkesMod.exe", "Rainmeter.exe", "scpbradguard.exe",
            "TranslucentTB.exe", "steamwebhelper.exe", "msedgewebview2.exe",
            "notepad++.exe", "kpm_service.exe", "msedge.exe", "mysqld.exe",
            "Overlay.exe", "PresentMon_x64.exe", "LockApp.exe", "sihost.exe",
            "spoolsv.exe"
        };
        
        int total_programas = sizeof(programas) / sizeof(programas[0]);
        for (i = 0; i < total_programas; i++) {
            char comando[128];
            snprintf(comando, sizeof(comando), "taskkill /F /IM %s /T", programas[i]);
            system(comando);
        }
        
        printf("\nOperacao realizada com sucesso!\n");
    }
    
    	//Fecha o discord
    menu();
    printf("\nDeseja finalizar o discord.exe?\n");
    printf("\nInput: (S) sim ou (N) nao\n");
    scanf(" %c", &escolha_2);
    
    	// Loop para garantir que o input seja válido
    while (escolha_2 != 'S' && escolha_2 != 'N') {
    	menu();
        printf("\nInput invalido! Tente novamente.\n");
        printf("\nInput: (S) sim ou (N) nao\n");
        scanf(" %c", &escolha_2);
    }
    
    if (escolha_2 == 'N') {
    	menu();
    	printf("\nOperacao cancelada!\n");
	} else if (escolha_2 == 'S') {
		system("taskkill /F /IM Discord.exe /T");
	}
	menu();
	printf("\nOperacao realizada com sucesso!\n");
	
	printf("\nAperte quanquer tecla para encerrar o programa.");
	getchar();
    
    return 0;
}

