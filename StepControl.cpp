#include "StepControl.h"


StepControl::StepControl(byte dirPin, byte stepPin, int speed, int stepsPR, int switchPin)
{
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(_switchPin, INPUT_PULLUP);

  _stepPin = stepPin;
  _dirPin = dirPin;
  _switchPin = switchPin;
  _speed = speed;
  _stepsPR = stepsPR;
  double movePR = 40.0; // Step motorun bir tur atması ile sağlanan hareketin mm cinsinden ölçüsü

  movePS = movePR/_stepsPR; // Step motorun bir adımdaki hareketinin mm cinsinden ölçüsü
  rotatePS = 360.0/_stepsPR;
  liftPS = 8.0/_stepsPR;
}

void StepControl::Move(double distance)
{
  linearLocation = linearLocation + distance;
  if(distance < 0)
  {
    _distance = distance*(-1.0);
    digitalWrite(_dirPin, LOW);
  }

  else
  {
    _distance = distance*1.0;
    digitalWrite(_dirPin, HIGH);
  }
  
  double forStep = _distance/movePS;

  for (int i = 1; i <= forStep; i++)
  {
    digitalWrite(_stepPin, HIGH);
    delayMicroseconds(_speed);
    digitalWrite(_stepPin, LOW);
    delayMicroseconds(_speed);
    
  }

}

void StepControl::MoveS(double distance, int speed)
{
  linearLocation = linearLocation + distance;
  if(distance < 0)
  {
    _distance = distance*(-1.0);
    digitalWrite(_dirPin, LOW);
  }

  else
  {
    _distance = distance*1.0;
    digitalWrite(_dirPin, HIGH);
  }
  
  double forStep = _distance/movePS;

  for (int i = 1; i <= forStep; i++)
  {
    digitalWrite(_stepPin, HIGH);
    delayMicroseconds(speed);
    digitalWrite(_stepPin, LOW);
    delayMicroseconds(speed);
    
  }
  //Serial.println(linearLocation);
}

void StepControl::Lift(double distance)
{
  zLocation = zLocation + distance;
  if(distance < 0)
  {
    _distanceZ = distance*(-1.0);
    digitalWrite(_dirPin, HIGH);
  }

  else
  {
    _distanceZ = distance*1.0;
    digitalWrite(_dirPin, LOW);
  }
  
  double forStep = _distanceZ/liftPS;

  for (int i = 1; i <= forStep; i++)
  {
    digitalWrite(_stepPin, HIGH);
    delayMicroseconds(_speed);
    digitalWrite(_stepPin, LOW);
    delayMicroseconds(_speed);
    
  }
}


void StepControl::LiftR(double distance)
{
  if(distance < 0)
  {
    _distanceZ = distance*(-1.0);
    digitalWrite(_dirPin, LOW);
  }

  else
  {
    _distanceZ = distance*1.0;
    digitalWrite(_dirPin, HIGH);
  }
  
  double forStep = _distanceZ/liftPS;

  for (int i = 1; i <= forStep; i++)
  {
    digitalWrite(_stepPin, HIGH);
    delayMicroseconds(_speed);
    digitalWrite(_stepPin, LOW);
    delayMicroseconds(_speed);
    
  }

}

void StepControl::Rotate(double angle)
{
  angularLocation = angularLocation + angle;

  if (angle < 0)
  {
    _angle = angle*(-1.0);
    digitalWrite(_dirPin, HIGH);
  }
  else
  {
    _angle = angle*(1.0);
    digitalWrite(_dirPin, LOW);
  }

  int forStepRotate = _angle/rotatePS;

  for (int i = 1; i <= forStepRotate; i++)
  {
    
    digitalWrite(_stepPin, HIGH);
    delayMicroseconds(_speed);
    digitalWrite(_stepPin, LOW);
    delayMicroseconds(_speed);
  }

}

void StepControl::RotateProcess(double angle)
{
  angularLocation = angularLocation + angle;
  digitalWrite(28, LOW);

  if (angle < 0)
  {
    _angle = angle*(-1.0);
    digitalWrite(_dirPin, HIGH);
  }
  else
  {
    _angle = angle*(1.0);
    digitalWrite(_dirPin, LOW);
  }

  int forStepRotate = _angle/rotatePS;

  for (int i = 1; i <= forStepRotate; i++)
  {
    
    digitalWrite(_stepPin, HIGH);
    digitalWrite(29, HIGH);
    delayMicroseconds(_speed);
    digitalWrite(29, LOW);
    digitalWrite(_stepPin, LOW);
    delayMicroseconds(_speed);
  }
}

void StepControl::RotateProcessR(double angle)
{
  angularLocation = angularLocation + angle;
  digitalWrite(28, LOW);

  if (angle < 0)
  {
    _angle = angle*(-1.0);
    digitalWrite(_dirPin, LOW);
  }
  else
  {
    _angle = angle*(1.0);
    digitalWrite(_dirPin, HIGH);
  }

  int forStepRotate = _angle/rotatePS;

  for (int i = 1; i <= forStepRotate; i++)
  {
    
    digitalWrite(_stepPin, HIGH);
    digitalWrite(29, HIGH);
    delayMicroseconds(_speed);
    digitalWrite(29, LOW);
    digitalWrite(_stepPin, LOW);
    delayMicroseconds(_speed);
  }
}



void StepControl::RotateS(double angle, int speed)
{
  angularLocation = angularLocation + angle;

  if (angle < 0)
  {
    _angle = angle*(-1.0);
    digitalWrite(_dirPin, HIGH);
  }
  else
  {
    _angle = angle*(1.0);
    digitalWrite(_dirPin, LOW);
  }

  double forStepRotate = _angle/rotatePS;

  for (int i = 1; i <= forStepRotate; i++)
  {
    digitalWrite(_stepPin, HIGH);
    delayMicroseconds(speed);
    digitalWrite(_stepPin, LOW);
    delayMicroseconds(speed);
  }
}



void StepControl::HomeLinear()
  {
    MoveS(1.5, 66);
    while(digitalRead(_switchPin))
    {
      MoveS(-movePS, 66);
    }

    while(!digitalRead(_switchPin))
    {
      MoveS(movePS, 66);
    }

    Move(5);

    while(digitalRead(_switchPin))
    {
      SlowMove();
    }

    linearLocation = 0.0;
  }

void StepControl::HomeLinearAll()
  {
   
    digitalWrite(26, LOW);//GERİ SOL
    digitalWrite(34, LOW);//GERİ SAĞ

    while(digitalRead(2) && digitalRead(44))//SWİTCH BASANA KADAR GERİ GEL
    {
      
      digitalWrite(27, HIGH);
      delayMicroseconds(33);
      digitalWrite(27, LOW);
      delayMicroseconds(33);
      digitalWrite(35, HIGH);
      delayMicroseconds(33);
      digitalWrite(35, LOW);
      delayMicroseconds(33);      
    }
    while(digitalRead(2))//SWİTCH BASANA KADAR GERİ GEL
    {
      digitalWrite(27, HIGH);
      delayMicroseconds(33);
      digitalWrite(27, LOW);
      delayMicroseconds(33);
    }

    while(digitalRead(44))//SWİTCH BASANA KADAR GERİ GEL
    {
      digitalWrite(35, HIGH);
      delayMicroseconds(33);
      digitalWrite(35, LOW);
      delayMicroseconds(33);
    }
/*
    digitalWrite(26, HIGH);//İLERİ SOL
    digitalWrite(34, HIGH);//İLERİ SAĞ

    while(!digitalRead(2) && !digitalRead(44))//SWİTCH KURTULANA KADAR İLERİ GİT
    {
      digitalWrite(27, HIGH);
      delayMicroseconds(100);
      digitalWrite(27, LOW);
      delayMicroseconds(100);
      digitalWrite(35, HIGH);
      delayMicroseconds(100);
      digitalWrite(35, LOW);
      delayMicroseconds(100);  
    }

    while(!digitalRead(2))//SWİTCH KURTULANA KADAR İLERİ GİT
    {
      digitalWrite(27, HIGH);
      delayMicroseconds(100);
      digitalWrite(27, LOW);
      delayMicroseconds(100);
    }

    while(!digitalRead(44))//SWİTCH KURTULANA KADAR İLERİ GİT
    {
      digitalWrite(35, HIGH);
      delayMicroseconds(100);
      digitalWrite(35, LOW);
      delayMicroseconds(100);
    }

    digitalWrite(26, LOW);//GERİ SOL
    digitalWrite(34, LOW);//GERİ SAĞ

    while(digitalRead(2) && digitalRead(44))
    {
      digitalWrite(27, HIGH);
      delayMicroseconds(500);
      digitalWrite(27, LOW);
      delayMicroseconds(500);
      digitalWrite(35, HIGH);
      delayMicroseconds(500);
      digitalWrite(35, LOW);
      delayMicroseconds(500);  
    }

    while(digitalRead(2))//SWİTCH BASANA KADAR GERİ GEL
    {
      digitalWrite(27, HIGH);
      delayMicroseconds(500);
      digitalWrite(27, LOW);
      delayMicroseconds(500);
    }

    while(digitalRead(44))//SWİTCH BASANA KADAR GERİ GEL
    {
      digitalWrite(35, HIGH);
      delayMicroseconds(500);
      digitalWrite(35, LOW);
      delayMicroseconds(500);
    }
*/
    linearLocation = 0.0;
  }
  
void StepControl::HomeZAll()
  {
   
    digitalWrite(22, LOW);//GERİ SOL
    digitalWrite(50, LOW);//GERİ SAĞ

    while(digitalRead(6) && digitalRead(42))//SWİTCH BASANA KADAR GERİ GEL
    {
      
      digitalWrite(23, HIGH);
      delayMicroseconds(50);
      digitalWrite(23, LOW);
      delayMicroseconds(50);
      digitalWrite(51, HIGH);
      delayMicroseconds(50);
      digitalWrite(51, LOW);
      delayMicroseconds(50);      
    }
    while(digitalRead(6))//SWİTCH BASANA KADAR GERİ GEL
    {
      digitalWrite(23, HIGH);
      delayMicroseconds(50);
      digitalWrite(23, LOW);
      delayMicroseconds(50);
    }

    while(digitalRead(42))//SWİTCH BASANA KADAR GERİ GEL
    {
      digitalWrite(51, HIGH);
      delayMicroseconds(50);
      digitalWrite(51, LOW);
      delayMicroseconds(50);  
    }
  }

void StepControl::HomeZ()
  {
    Lift(-3);
    while(digitalRead(_switchPin)) //switch basılı değilken
    {
      Lift(liftPS);
    }

    while(!digitalRead(_switchPin)) //switch basılıyken
    {
      Lift(-liftPS);

    }

    Lift(-2);

    while(digitalRead(_switchPin)) //switch basılı değilken
    {
      SlowMoveZ();
    }

  }

void StepControl::HomeAngular()
  {
    RotateS(5, 833);
    while(digitalRead(_switchPin))
    {
      RotateS(-rotatePS, 833);
    }

    while(!digitalRead(_switchPin))
    {
      RotateS(rotatePS, 833);
    }

    RotateS(5, 833);

    while(digitalRead(_switchPin))
    {
      SlowRotate();
    }

    angularLocation = 0.0;
  }

void StepControl::HomeAngularAll()
  {
    digitalWrite(11, HIGH);//GERİ SOL
    digitalWrite(52, HIGH);//GERİ SAĞ

    while(digitalRead(9) && digitalRead(46))//SWİTCH BASANA KADAR GERİ GEL
    {
      
      digitalWrite(12, HIGH);
      delayMicroseconds(833);
      digitalWrite(12, LOW);
      delayMicroseconds(833);
      digitalWrite(53, HIGH);
      delayMicroseconds(833);
      digitalWrite(53, LOW);
      delayMicroseconds(833);      
    }
    while(digitalRead(9))//SWİTCH BASANA KADAR GERİ GEL
    {
      digitalWrite(12, HIGH);
      delayMicroseconds(833);
      digitalWrite(12, LOW);
      delayMicroseconds(833);
    }

    while(digitalRead(46))//SWİTCH BASANA KADAR GERİ GEL
    {
      digitalWrite(53, HIGH);
      delayMicroseconds(833);
      digitalWrite(53, LOW);
      delayMicroseconds(833);  
    }
  }



void StepControl::SlowMove()
  {
    digitalWrite(_dirPin, LOW);
    digitalWrite(_stepPin, HIGH);
    delayMicroseconds(833);
    digitalWrite(_stepPin, LOW);
    delayMicroseconds(833);
  }

void StepControl::SlowMoveZ()
  {
    digitalWrite(_dirPin, LOW);
    digitalWrite(_stepPin, HIGH);
    delayMicroseconds(250);
    digitalWrite(_stepPin, LOW);
    delayMicroseconds(250);
  }

void StepControl::SlowMoveZR()
  {
    digitalWrite(_dirPin, HIGH);
    digitalWrite(_stepPin, HIGH);
    delayMicroseconds(250);
    digitalWrite(_stepPin, LOW);
    delayMicroseconds(250);
  }
void StepControl::SlowRotate()
  {
    digitalWrite(_dirPin, HIGH);
    digitalWrite(_stepPin, HIGH);
    delayMicroseconds(_speed*7);
    digitalWrite(_stepPin, LOW);
    delayMicroseconds(_speed*7);
  }

void StepControl::SlowRotateR()
  {
    digitalWrite(_dirPin, LOW);
    digitalWrite(_stepPin, HIGH);
    delayMicroseconds(_speed*7);
    digitalWrite(_stepPin, LOW);
    delayMicroseconds(_speed*7);
  }