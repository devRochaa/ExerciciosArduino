// C++ code
//
// C++ code
//
const int led = 8;
const int botao = 7;
const int led2 = 12;
const int botao2 = 4;

int estadoBotao = 0;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
  pinMode(led2, OUTPUT);
  pinMode(botao2, INPUT);
}

void loop()
{
 estadoBotao = digitalRead(botao);
 
  if (estadoBotao == HIGH){
    digitalWrite(led, HIGH);
  }else {
    digitalWrite(led,LOW);
  } 

  estadoBotao = digitalRead(botao2);
  
  if (estadoBotao == HIGH){
    digitalWrite(led2,HIGH);
  }else
  {
    digitalWrite(led2,LOW);
  } 
    
}
