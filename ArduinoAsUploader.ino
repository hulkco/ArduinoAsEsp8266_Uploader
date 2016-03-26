//sketch para cargar firmware a ESP8266 por medio de Arduino
//Nota: RX<=>RX TX<=>TX Colocarlos depsues de cargar el Sketch
int ch_pd = 3; 
int io0 = 2; //GPIO0

void setup() {
  pinMode(ch_pd, OUTPUT);
  pinMode(io0, OUTPUT);
  digitalWrite(io0,LOW);
  digitalWrite(ch_pd, LOW);
  delay(1000);
  digitalWrite(ch_pd, HIGH);
}

void loop()
{
      
}
