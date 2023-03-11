const int sensorPin = 16; // Pino al que está conectado el sensor
int valorSensor = 0; // Variable para almacenar el valor del sensor

void setup() {
  pinMode(sensorPin, INPUT); // Establecer el pin como entrada
  Serial.begin(9600); // Iniciar la comunicación serial
}

void loop() {
  valorSensor = digitalRead(sensorPin); // Leer el valor del sensor

  if (valorSensor == HIGH) { // Si el sensor detecta un golpe
    Serial.println("¡Golpe detectado!"); // Imprimir un mensaje en la consola
  }

  delay(10); // Pequeña pausa entre lecturas del sensor
}