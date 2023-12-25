const int pinoLed = 12; //PINO DIGITAL UTILIZADO PELO LED
const int pinoLDR = A5; //PINO ANALÓGICO UTILIZADO PELO LDR
  
void setup(){  
  pinMode(pinoLed, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(pinoLDR, INPUT); //DEFINE O PINO COMO ENTRADA
}    
void loop(){
  
  if(analogRead(pinoLDR) > 600){ //SE O VALOR LIDO FOR MAIOR QUE X, FAZ
    digitalWrite(pinoLed, HIGH); //ACENDE O LED
}  
  else{ //SENÃO, FAZ
     digitalWrite(pinoLed, LOW); //APAGA O LED
  }  
}
