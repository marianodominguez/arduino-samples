//arduino clock

int clockPin = 5;
int buttonStop = 9;
int buttonManual = 8;

boolean clockOn = true;

void setup() 
{
  pinMode(clockPin, OUTPUT);
  pinMode(buttonStop, INPUT_PULLUP);  
  pinMode(buttonManual, INPUT_PULLUP);  
}

void sendPulse()
{
  digitalWrite(clockPin, HIGH);
  sleep(500)
  digitalWrite(clockPin, LOW);    
}

void loop() 
{
  if (digitalRead(buttonStop) == LOW)
  {
    clockOn=!clockOn
  }
  if (digitalRead(buttonBpin) == LOW)
  {
    clockOn=false;
    sendPulse();
  }

  if (clockOn) 
  {
    sendPulse();
  }
}
