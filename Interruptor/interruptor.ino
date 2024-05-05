// C++ code
//
int led = 8;
int botao = 7;

int estadobotao = 0;
int estadoled = 0;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode (botao, INPUT);
}

void loop()
{
  estadobotao = digitalRead(botao);
  

  if (estadobotao != 0)
  {
    estadoled = 1 - estadoled;
    digitalWrite(led, estadoled);
                 
    delay(1000);
  }    
}
