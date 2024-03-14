/*******************************************************************************
 * CANAL INTERNET E COISAS                                                     *
 * ESP32-CAM                                                                   *
 * Controle de Acesso com Reconhecimento Facial e integração ao Jarvis         *
 * Baseado no Projeto de Andrew McCabe, uso autorizado                         *
 * https://robotzero.one/access-control-with-face-recognition/                 *
 * 04/2020 - Andre Michelon                                                    *
 * andremichelon@internetecoisas.com.br                                        *
 * https://internetecoisas.com.br                                              *
 ******************************************************************************/

// Inclui a Biblioteca JARVISduino V. 4.0 ---------------
#include <JARVISduino4.h>

// Setup ------------------------------------------------
void setup() {
  Serial.begin(115200);
  // Inicializa a Biblioteca JARVISduino
  JARVISduinoInit(&Serial, &Serial);

  // Inicializa pinos digitais
  pinMode(11, OUTPUT);    // LED Vermelho
  pinMode(12, OUTPUT);    // LED Verde
}

// Loop -------------------------------------------------
void loop() {
  JARVISduinoChkCmd();
}
