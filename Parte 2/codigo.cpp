void setup() {
  
  pinMode(3, OUTPUT); 
}


void loop() {
  digitalWrite(3, HIGH);  // Liga a saida digital 3 do arduino (high é a voltagem = 5V)
  delay(1000);   // espera 1 segundo
  digitalWrite(3, LOW);   // Desliga a saida digital 3 do arduino (low é a voltagem = 0V)
  delay(1000);   // espera 1 segundo
}