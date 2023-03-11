
const int relayPin = 5; // Pin del m�dulo de rel�


bool relayState = false; // Variable para almacenar el estado del rel�



void setup() {

  pinMode(relayPin, OUTPUT); // Configurar el pin del rel� como salida

  Serial.begin(9600); // Inicializar la comunicaci�n serial

}



void loop() {

  if (relayState == false) { // Si el rel� est� apagado

    digitalWrite(relayPin, HIGH); // Encender el rel�

    Serial.println("Rel� encendido"); // Imprimir un mensaje por el puerto serial

    relayState = true; // Actualizar el estado del rel�

  } else { // Si el rel� est� encendido

    digitalWrite(relayPin, LOW); // Apagar el rel�

    Serial.println("Rel� apagado"); // Imprimir un mensaje por el puerto serial

    relayState = false; // Actualizar el estado del rel�

  }



  delay(1000); // Peque�a pausa para que se pueda apreciar el cambio de estado del rel�

}
