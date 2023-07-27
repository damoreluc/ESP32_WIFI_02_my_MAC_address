/*
 * WiFi Esempio 02: stampa il MAC address della scheda ESP32
 *
 * L'esempio impiega il metodo `macAddress()` dell'oggetto WiFi per stampare il MAC address della ESP32.
 * 
 * La conoscenza del MAC address della ESP32 è essenziale per associare la scheda ad Access Point che
 * dispongono di filtro sul MAC address per l'accesso dei dispositivi wireless.
 * 
 * 
*/

#include <Arduino.h>
#include <WiFi.h>


void setup() {
  Serial.begin(115200);
  Serial.println("WiFi Esempio 02: MAC address della scheda ESP32");

  // impiega il metodo macAddress() dell'oggetto WiFi
  Serial.println();
  Serial.print("MAC Address: ");
  Serial.println(WiFi.macAddress());
}

void loop() {
// lasciare vuoto
}