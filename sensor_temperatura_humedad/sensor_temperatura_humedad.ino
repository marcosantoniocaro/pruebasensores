#include <dht.h>
dht DHT;

#define DHT11_PIN 7

void setup() {
Serial.begin(9600);

}

void loop() {
  int chk=DHT.read11(DHT11_PIN);
  switch (chk)
  {
    case DHTLIB_OK:  
    Serial.print("OK,\t"); 
    break;
    case DHTLIB_ERROR_CHECKSUM: 
    Serial.print("Checksum error,\t"); 
    break;
    case DHTLIB_ERROR_TIMEOUT: 
    Serial.print("Time out error,\t"); 
    break;
    default: 
    Serial.print("Unknown error,\t"); 
    break;
  }
  Serial.print("Temperatura = ");
  Serial.print(DHT.temperature);
  Serial.print("Humedad = ");
  Serial.print(DHT.humidity);
  delay(1000); 

}
