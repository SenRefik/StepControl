#ifndef StepControl_h
#define StepControl_h

#include "Arduino.h"

class StepControl
{
  protected:
  byte _stepPin;
  byte _dirPin;
  

  public:
  int _switchPin;
  int _speed;
  int _stepsPR;
  double movePS;
  double rotatePS;
  double liftPS;
  float stepLinear;
  float stepAngular;
  double _distance;
  double _angle;
  double _distanceZ;



  double linearLocation = 0.0;
  double angularLocation = 0.0;
  double zLocation = 0.0;
  
  
  StepControl(byte dirPin, byte stepPin, int speed, int stepsPR, int switchPin);
  void Move(double distance);
  void MoveS(double distance, int speed);
  void Lift(double distance);
  void LiftR(double distance);
  void RotateS(double angle, int speed);
  void Rotate(double angle);
  void RotateProcess(double angle);
  void RotateProcessR(double angle);
  void MoveSync(double distance, double angle);
  void HomeLinear();
  void HomeLinearAll();
  void HomeZ();
  void HomeZR();
  void HomeAngular();
  void HomeAngularAll();
  void SlowMove();
  void SlowMoveZ();
  void SlowMoveZR();
  void SlowRotate();
  void SlowRotateR();
  void HomeZAll();

  
};



#endif