// Este script baixa uma imagem do Google e a define como plano de fundo, porém de forma ainda muito manual.  
// Como meu teclado é ABNT2 (brasileiro) e a biblioteca DigiKeyboard.h funciona apenas com layout US,  
// o código primeiro altera o layout do teclado para US antes da execução.  
// No final, ele restaura o layout original.  
// O código ainda pode ser otimizado e melhor estruturado.  



#include "DigiKeyboard.h"

void setup() {
  // Inicialização vazia
}

void loop() {
  DigiKeyboard.sendKeyStroke(0); // Envia um "key stroke" vazio para inicializar

  // Abre o PowerShell (Win + R, digita "powershell", Enter)
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Win + R
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  // Navega até a pasta Pictures
  DigiKeyboard.print("Set-WinUserLanguageList -LanguageList en-US -Force");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);


  // BAIXAR IMAGEM
  DigiKeyboard.print("$url = 'https://placekitten.com/400/300'");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);  
  DigiKeyboard.delay(500);
  DigiKeyboard.print("$outputPath = 'C:\\Users\\Lenovo Ideapad\\Pictures\\imagem.jpg'");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);


  DigiKeyboard.print(" Invoke-WebRequest -Uri $url -OutFile $outputPath");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);

  // Define a imagem como papel de parede
  DigiKeyboard.print("cd Pictures ");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("start imagem.jpg");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  
  //DEFINE COMO PAPEL DE PAREDE
  DigiKeyboard.sendKeyStroke(KEY_B, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(2000);
  


  // Fecha a janela ativa (Alt + F4)
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT); // Alt + F4
  DigiKeyboard.delay(500);


  // Navega até a pasta Pictures
  DigiKeyboard.print("Set-WinUserLanguageList -LanguageList pt-BR -Force");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(800);

    // Fecha a janela
    DigiKeyboard.print("exit");
    DigiKeyboard.delay(500);  
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    

  // Finaliza o script
  for (;;) { /*empty*/ }
}
 
