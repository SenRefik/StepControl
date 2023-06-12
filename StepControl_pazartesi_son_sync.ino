#include "StepControl.h"
#include <math.h>

StepControl upLeft(22,23, 30, 6400, 6); //dirPin, stepPin, speed, stepsPR, switch
StepControl rotateLeft(11,12, 416, 6400, 9); //dirPin, stepPin, speed, stepsPR, switch
StepControl forwardLeft(26,27, 33, 6400, 2); //dirPin, stepPin, speed, stepsPR, switch

StepControl rollLeft(28,29, 250, 3200, 41);

StepControl upRight(50,51, 30, 6400, 42); //dirPin, stepPin, speed, stepsPR, switch
StepControl rotateRight(52,53, 416, 6400, 46); //dirPin, stepPin, speed, stepsPR, switch
StepControl forwardRight(34,35, 33, 6400, 44); //dirPin, stepPin, speed, stepsPR, switch

StepControl rollRight(24,25, 250, 3200, 45);


  double r[446] = {0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128,
  0.28128};

  double f[446] = {0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.5,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.5,
  0.0,
  0.5,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.5,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  -0.5,
  0.0,
  0.0,
  0.0,
  -0.5,
  0.0,
  -1.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  -0.5,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  -0.5,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  -1.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  -1.0,
  -1.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  -1.0,
  -0.5,
  0.0,
  0.0,
  0.0,
  -1.0,
  0.0,
  -1.0,
  0.0,
  -1.0,
  0.0,
  -1.0,
  0.0,
  -1.0,
  0.0,
  -1.0,
  0.0,
  0.0,
  -1.0,
  0.0,
  -0.5,
  -0.5,
  0.0,
  -1.0,
  0.0,
  -0.5,
  -0.5,
  -0.5,
  -1.0,
  -1.0,
  0.0,
  -1.0,
  -0.5,
  0.0,
  -1.0,
  -0.5,
  0.0,
  -1.0,
  0.0,
  -1.0,
  -0.5,
  0.0,
  -1.5,
  0.0,
  -1.0,
  0.0,
  -0.5,
  0.0,
  -1.0,
  0.0,
  -1.5,
  -0.5,
  -0.5,
  -1.5,
  0.0,
  -0.5,
  -1.0,
  0.0,
  0.0,
  -0.5,
  -1.0,
  -0.5,
  0.0,
  -0.5,
  0.0,
  -1.0,
  0.0,
  -1.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  -1.0,
  -1.0,
  0.0,
  0.0,
  0.0,
  0.0,
  -1.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  -1.5,
  0.0};

  /*double forwardY[166] = {150.00,
  1.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  -0.50,
  0.00,
  0.00,
  -0.50,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  -0.50,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.50,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.50,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  0.00,
  -0.50,
  0.00,
  0.00,
  0.00,
  -0.50,
  0.00,
  -0.50,
  0.00,
  -0.50,
  0.00,
  -1.00,
  0.00,
  -0.50,
  0.00,
  0.00,
  0.00,
  0.00,
  -1.00,
  0.00,
  0.00,
  -1.00,
  0.00,
  -0.50,
  -0.50,
  -0.50,
  -0.50,
  -0.50,
  -0.50,
  -0.50,
  -1.00,
  -0.50,
  -0.50,
  -0.50,
  -0.50,
  -0.50,
  -1.00,
  -1.50,
  0.00,
  -1.00,
  0.00,
  -0.50,
  -0.50,
  -0.50,
  0.00,
  -1.00,
  -0.50,
  -0.50,
  -1.00,
  0.00,
  -1.00,
  0.00,
  -1.00,
  0.00,
  -0.50,
  -1.00,
  -1.00,
  0.00,
  -0.50,
  0.00,
  -1.00,
  0.00,
  0.00,
  0.00,
  0.00,
  -1.00,
  -0.50,
  0.00,
  -1.50,
  0.00,
  -0.50,
  -0.50,
  0.00,
  -0.50,
  -0.50,
  0.00,
  0.00,
  0.00,
  0.00};


  double angleY[166] = {71.0, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3};
  */
  /*double forward[235] = {156.0000
  , -0.6288
  , -0.6269
  , -0.6250
  , -0.6230
  , -0.6211
  , -0.6192
  , -0.6173
  , -0.6153
  , -0.6138
  , -0.6100
  , -0.6149
  , -0.5926
  , -0.6403
  , -0.5818
  , -0.6975
  , -0.6955
  , -0.6935
  , -0.6915
  , -0.6895
  , -0.6876
  , -0.6857
  , -0.6886
  , -0.7325
  , -0.7238
  , -0.7238
  , -0.7212
  , -0.7194
  , -0.7170
  , -0.7165
  , -0.7191
  , -0.7304
  , -0.7283
  , -0.7263
  , -0.7245
  , -0.7329
  , -0.7751
  , -0.7682
  , -0.7695
  , -0.7664
  , -0.7713
  , -0.8600
  , -0.8580
  , -0.8555
  , -0.8530
  , -0.8506
  , -0.8483
  , -0.8459
  , -0.8884
  , -0.8800
  , -0.8853
  , -0.8807
  , -0.8788
  , -0.8762
  , -0.8738
  , -0.8874
  , -0.8926
  , -0.8903
  , -0.8878
  , -0.8853
  , -0.8829
  , -0.8805
  , -0.8780
  , -0.8760
  , -0.8725
  , -0.8733
  , -0.8830
  , -0.8809
  , -0.8786
  , -0.8769
  , -0.8737
  , -0.8875
  , -0.8864
  , -0.8841
  , -0.8818
  , -0.8796
  , -0.8773
  , -0.8751
  , -0.8729
  , -0.8708
  , -0.8686
  , -0.8665
  , -0.8644
  , -0.8624
  , -0.8604
  , -0.8583
  , -0.8632
  , -0.8943
  , -0.8919
  , -0.8898
  , -0.8877
  , -0.8855
  , -0.8834
  , -0.8813
  , -0.8792
  , -0.8772
  , -0.8752
  , -0.8732
  , -0.8712
  , -0.8693
  , -0.8674
  , -0.8655
  , -0.8636
  , -0.8830
  , -0.8826
  , -0.8803
  , -0.8785
  , -0.8766
  , -0.8747
  , -0.8728
  , -0.8710
  , -0.8692
  , -0.8673
  , -0.8656
  , -0.8863
  , -0.8880
  , -0.8919
  , -0.8882
  , -0.8870
  , -0.8848
  , -0.8831
  , -0.8815
  , -0.9016
  , -0.8996
  , -0.8979
  , -0.8960
  , -0.8941
  , -0.8923
  , -0.8905
  , -0.8887
  , -0.8870
  , -0.8853
  , -0.8836
  , -0.8819
  , -0.9515
  , -0.9175
  , -0.9460
  , -0.9333
  , -0.9343
  , -0.9315
  , -0.9293
  , -0.9413
  , -0.9396
  , -0.9392
  , -0.9367
  , -0.9346
  , -0.9329
  , -1.0757
  , -1.1019
  , -1.1019
  , -1.0942
  , -1.0913
  , -1.0866
  , -1.0828
  , -1.1038
  , -1.1021
  , -1.0984
  , -1.0936
  , -1.0891
  , -1.0847
  , -1.0803
  , -1.0759
  , -1.0717
  , -1.0774
  , -1.0998
  , -1.0926
  , -1.0897
  , -1.0841
  , -1.0797
  , -1.0750
  , -1.0704
  , -1.0659
  , -1.0615
  , -1.0571
  , -1.0528
  , -1.0485
  , -1.0444
  , -1.0401
  , -1.0629
  , -1.0680
  , -1.0690
  , -1.0630
  , -1.0588
  , -1.0534
  , -1.0489
  , -1.0325
  , -1.0239
  , -1.0185
  , -1.0148
  , -1.0105
  , -1.0069
  , -1.0023
  , -0.9991
  , -0.9970
  , -0.9960
  , -1.0044
  , -1.0002
  , -0.9961
  , -0.9920
  , -0.9881
  , -0.9841
  , -0.9803
  , -0.9764
  , -0.9727
  , -0.9690
  , -0.9653
  , -0.9617
  , -0.9582
  , -0.9600
  , -0.9610
  , -0.9567
  , -0.9532
  , -0.9494
  , -0.9458
  , -0.9423
  , -0.9388
  , -0.9353
  , -0.9321
  , -0.9293
  , -0.9355
  , -0.9325
  , -0.9288
  , -0.9251
  , -0.9215
  , -0.9177
  , -0.9155
  , -0.9058
  , -0.9001
  , -0.8971
  , -0.8942
  , -0.8914
  , -0.8885
  , -0.8857
  , -0.8830
  , -0.8803};

  double angle[235] = {62.39, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115,  0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115,  0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115,  0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115, 0.24115,  0.24115, 0.24115, 0.24115, 0.24115, 0.24115};
  */

double distanceSync;
double angleSync;


void setup(){
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(43, OUTPUT);
  pinMode(45, OUTPUT);
  pinMode(47, OUTPUT);
  digitalWrite(3, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(43, HIGH);
  digitalWrite(45, HIGH);
  digitalWrite(47, HIGH);
}

void loop(){
  while (Serial.available() == 0) {}     //wait for data available
  String command = Serial.readString();  //read until timeout
  command.trim();                        // remove any \r \n whitespace at the end of the String

  if(command == "q"){
    HomeAll();
    Serial.println("Yükseklik : " + (String)upLeft.zLocation);
    Serial.println("İlerleme : " + (String)forwardLeft.linearLocation);
    Serial.println("Açı : " + (String)rotateLeft.angularLocation);
  }

  else if(command == "dene"){
    rotateLeft.RotateS(71.0, 12150);
  }

  else if(command == "r68"){
    double forStep = 68.0/rotateLeft.rotatePS;

    for (int i = 1; i<= forStep ; i++)
    {
      rotateLeft.Rotate(rotateLeft.rotatePS);
    }
    Serial.println("Açı : " + (String)rotateLeft.angularLocation);

  }

  else if(command == "rr68"){
    double forStep = 68.0/rotateRight.rotatePS;

    for (int i = 1; i<= forStep ; i++)
    {
      rotateRight.Rotate(rotateRight.rotatePS);
    }
    Serial.println("Açı : " + (String)rotateRight.angularLocation);

  }

    else if(command == "r3a"){
    double forStep = 0.84675/rotateLeft.rotatePS;

    for (int i = 1; i<= forStep ; i++)
    {
      rotateLeft.Rotate(rotateLeft.rotatePS);
    }
    Serial.println("Açı : " + (String)rotateLeft.angularLocation);

  }

  else if(command == "r1a"){
    double forStep = 0.28125/rotateLeft.rotatePS;

    for (int i = 1; i<= forStep ; i++)
    {
      rotateLeft.Rotate(rotateLeft.rotatePS);
      rotateRight.Rotate(rotateRight.rotatePS);
    }
    Serial.println("AçıL : " + (String)rotateLeft.angularLocation);
    Serial.println("AçıR : " + (String)rotateRight.angularLocation);

  }

else if(command == "-r1a"){
    double forStep = 0.28125/rotateLeft.rotatePS;

    for (int i = 1; i<= forStep ; i++)
    {
      rotateLeft.Rotate(-rotateLeft.rotatePS);
      rotateRight.Rotate(-rotateRight.rotatePS);
    }
    Serial.println("AçıL : " + (String)rotateLeft.angularLocation);
    Serial.println("AçıR : " + (String)rotateRight.angularLocation);

  }

  else if(command == "-r3a"){
    double forStep = 0.84675/rotateLeft.rotatePS;

    for (int i = 1; i<= forStep ; i++)
    {
      rotateLeft.Rotate(-rotateLeft.rotatePS);
    }
    Serial.println("Açı : " + (String)rotateLeft.angularLocation);

  }

  else if(command == "f1"){
    double forStep = 0.5/forwardLeft.movePS;

    for (int i = 1; i<= forStep ; i++)
    {
      forwardLeft.Move(forwardLeft.movePS);
      forwardRight.Move(forwardRight.movePS);
    }
    Serial.println("İlerlemeL : " + (String)forwardLeft.linearLocation);
    Serial.println("İlerlemeR : " + (String)forwardRight.linearLocation);

    
  }

  else if(command == "-f1"){
    double forStep = 0.5/forwardLeft.movePS;

    for (int i = 1; i<= forStep ; i++)
    {
      forwardLeft.Move(-forwardLeft.movePS);
      forwardRight.Move(-forwardRight.movePS);
    }
    Serial.println("İlerleme : " + (String)forwardLeft.linearLocation);
    Serial.println("İlerleme : " + (String)forwardRight.linearLocation);

  }
  else if(command == "f40")
  {
    double forStep = 20.0/forwardLeft.movePS;

    for (int i = 1; i<= forStep ; i++)
    {
      forwardLeft.Move(forwardLeft.movePS);
    }
    Serial.println("İlerleme : " + (String)forwardLeft.linearLocation);

  }
else if(command == "fr40")
  {
    double forStep = 20.0/forwardRight.movePS;

    for (int i = 1; i<= forStep ; i++)
    {
      forwardRight.Move(forwardRight.movePS);
    }
    Serial.println("İlerleme : " + (String)forwardRight.linearLocation);

  }

  else if(command == "-f40")
  {
    double forStep = 20.0/forwardLeft.movePS;

    for (int i = 1; i<= forStep ; i++)
    {
      forwardLeft.Move(-forwardLeft.movePS);
    }
    Serial.println("İlerleme : " + (String)forwardLeft.linearLocation);

  }

  else if(command == "f200")
  {
    double forStep = 100.0/forwardLeft.movePS;

    for (int i = 1; i<= forStep ; i++)
    {
      forwardLeft.Move(forwardLeft.movePS);
    }
    Serial.println("İlerleme : " + (String)forwardLeft.linearLocation);

  }

    else if(command == "-f200")
  {
    double forStep = 100.0/forwardLeft.movePS;

    for (int i = 1; i<= forStep ; i++)
    {
      forwardLeft.Move(-forwardLeft.movePS);
    }
    Serial.println("İlerleme : " + (String)forwardLeft.linearLocation);

  }
    else if(command == "z1a")
  {
    double forStep = 0.00125/upLeft.liftPS;

    for (int i = 1; i<= forStep ; i++)
    {
      upLeft.Lift(upLeft.liftPS);
      upRight.Lift(upRight.liftPS);
    }
    Serial.println("YükseklikL : " + (String)upLeft.zLocation);
    Serial.println("YükseklikR : " + (String)upRight.zLocation);

  }
  else if(command == "-z1a")
  {
    double forStep = 0.00125/upLeft.liftPS;

    for (int i = 1; i<= forStep ; i++)
    {
      upLeft.Lift(-upLeft.liftPS);
      upRight.Lift(-upRight.liftPS);
    }
    Serial.println("YükseklikL : " + (String)upLeft.zLocation);
    Serial.println("YükseklikR : " + (String)upRight.zLocation);

  }
    else if(command == "-f10")
  {
    double forStep = 5.0/forwardLeft.movePS;

    for (int i = 1; i<= forStep ; i++)
    {
      forwardLeft.Move(-forwardLeft.movePS);
    }
    Serial.println("İlerleme : " + (String)forwardLeft.linearLocation);

  }

      else if(command == "f10")
  {
    double forStep = 5.0/forwardLeft.movePS;

    for (int i = 1; i<= forStep ; i++)
    {
      forwardLeft.Move(forwardLeft.movePS);
    }
    Serial.println("İlerleme : " + (String)forwardLeft.linearLocation);

  }
  else if(command == "-z1"){
    double forStep = 1.0/upLeft.liftPS;

    for (int i = 1; i<= forStep ; i++)
    {
      upLeft.Lift(-upLeft.liftPS);
    }
    Serial.println("Yükseklik : " + (String)upLeft.zLocation);

  }
  else if(command == "-z20")
  {
    double forStep = 20.0/upLeft.liftPS;

    for (int i = 1; i<= forStep ; i++)
    {
      upLeft.Lift(-upLeft.liftPS);
    }
    Serial.println("Yükseklik : " + (String)upLeft.zLocation);

  }
    else if(command == "-z10")
  {
    double forStep = 10.0/upLeft.liftPS;

    for (int i = 1; i<= forStep ; i++)
    {
      upLeft.Lift(-upLeft.liftPS);
    }
    Serial.println("Yükseklik : " + (String)upLeft.zLocation);

  }
 else if(command == "-z50")
  {
    double forStep = 50.0/upLeft.liftPS;

    for (int i = 1; i<= forStep ; i++)
    {
      upLeft.Lift(-upLeft.liftPS);
    }
    Serial.println("Yükseklik : " + (String)upLeft.zLocation);

  }


  else if(command == "z1"){
    double forStep = 1.0/upLeft.liftPS;

    for (int i = 1; i<= forStep ; i++)
    {
      upLeft.Lift(upLeft.liftPS);
    }
    Serial.println("Yükseklik : " + (String)upLeft.zLocation);

  }
  else if(command == "z20")
  {
    double forStep = 20.0/upLeft.liftPS;

    for (int i = 1; i<= forStep ; i++)
    {
      upLeft.Lift(upLeft.liftPS);
    }
    Serial.println("Yükseklik : " + (String)upLeft.zLocation);

  }
    else if(command == "z10")
  {
    double forStep = 10.0/upLeft.liftPS;

    for (int i = 1; i<= forStep ; i++)
    {
      upLeft.Lift(upLeft.liftPS);
    }
    Serial.println("Yükseklik : " + (String)upLeft.zLocation);

  }

///////////zr
else if(command == "-zr1"){
    double forStep = 1.0/upLeft.liftPS;

    for (int i = 1; i<= forStep ; i++)
    {
      upRight.Lift(-upLeft.liftPS);
    }
    Serial.println("Yükseklik : " + (String)upRight.zLocation);

  }
  else if(command == "-zr20")
  {
    double forStep = 20.0/upRight.liftPS;

    for (int i = 1; i<= forStep ; i++)
    {
      upRight.Lift(-upLeft.liftPS);
    }
    Serial.println("Yükseklik : " + (String)upRight.zLocation);

  }
    else if(command == "-zr10")
  {
    double forStep = 10.0/upRight.liftPS;

    for (int i = 1; i<= forStep ; i++)
    {
      upRight.Lift(-upRight.liftPS);
    }
    Serial.println("Yükseklik : " + (String)upRight.zLocation);

  }
 else if(command == "-zr50")
  {
    double forStep = 50.0/upRight.liftPS;

    for (int i = 1; i<= forStep ; i++)
    {
      upRight.Lift(-upRight.liftPS);
    }
    Serial.println("Yükseklik : " + (String)upRight.zLocation);

  }


  else if(command == "zr1"){
    double forStep = 1.0/upRight.liftPS;

    for (int i = 1; i<= forStep ; i++)
    {
      upRight.Lift(upRight.liftPS);
    }
    Serial.println("Yükseklik : " + (String)upRight.zLocation);

  }
  else if(command == "zr20")
  {
    double forStep = 20.0/upRight.liftPS;

    for (int i = 1; i<= forStep ; i++)
    {
      upRight.Lift(upRight.liftPS);
    }
    Serial.println("Yükseklik : " + (String)upRight.zLocation);

  }
    else if(command == "zr10")
  {
    double forStep = 10.0/upRight.liftPS;

    for (int i = 1; i<= forStep ; i++)
    {
      upRight.Lift(upRight.liftPS);
    }
    Serial.println("Yükseklik : " + (String)upRight.zLocation);

  }
  ///////zr

  else if(command =="a"){

    HomeAll();
    double forUp = 32.0/upLeft.liftPS;
    double forUpR = 30.0/upLeft.liftPS;
    double fr = forUp-forUpR;

    double forStep = 72/rotateLeft.rotatePS;

    for (int i = 1; i<= forStep ; i++)
    {
      rotateLeft.Rotate(rotateLeft.rotatePS);
      rotateRight.Rotate(rotateLeft.rotatePS);
    }

    double forForward = 109.89/forwardLeft.movePS;
    double forForwardR = 95.89/forwardLeft.movePS;
    double fr2 = forForward - forForwardR;

    for (int i = 1; i<= forForwardR; i++)
    {
      forwardLeft.Move(forwardLeft.movePS);
      forwardRight.Move(forwardLeft.movePS);
    }
    
    for (int i = 1; i<= fr2; i++)
    {
      forwardLeft.Move(forwardLeft.movePS);
    }


//zzzzz

    for (int i = 1; i<= forUp; i++)
    {
      upRight.Lift(-upLeft.liftPS);
      upLeft.Lift(-upLeft.liftPS);
    }
    
    for (int i = 1; i<= fr; i++)
    {
      upLeft.Lift(-upLeft.liftPS);
    }
//zzzzz

    delay(4000);

    forStep = 53.09/rotateLeft.rotatePS;
    for (int i = 1; i<= forStep ; i++)
    {
      rotateLeft.Rotate(rotateLeft.rotatePS);
      rotateRight.Rotate(rotateLeft.rotatePS);
    }
    for (int i = 1; i<= 5/upLeft.liftPS; i++)
    {
      upLeft.Lift(upLeft.liftPS);
      upRight.Lift(upLeft.liftPS);
    }
  }

  else if(command == "home")
  {
    forwardLeft.HomeLinearAll();
    forwardLeft.HomeLinear();
    forwardRight.HomeLinear();
  }

  else if(command == "z"){
    upLeft.HomeZAll();
    upLeft.HomeZ();
    upRight.HomeZ();
  }
  else if(command =="rhome"){
    rotateLeft.HomeAngularAll();
    rotateLeft.HomeAngular();
    rotateRight.HomeAngular();
  }
  
  else if(command == "i10")
  {
    forwardLeft.MoveS(10, 200);
  }
  
  else if(command == "i1")
  {
    forwardLeft.MoveS(1, 200);
  }

  else if(command == "ir10")
  {
    forwardRight.MoveS(10, 200);
  }
  
  else if(command == "ir1")
  {
    forwardRight.MoveS(1, 200);
  }

  else if(command == "y10")
  {
    upLeft.Lift(-10);
  }
  
  else if(command == "y1")
  {
    upLeft.Lift(-1);
  }

  else if(command == "yr10")
  {
    upRight.Lift(-10);

  }
  
  else if(command == "yr1")
  {
    upRight.Lift(-1);
  }



  else if(command == "s")
  {
    HomeAll();

 for (int i = 0; i < 265; i++)
    {
      rotateLeft.Rotate(r[i]);
      rotateRight.Rotate(r[i]);
      forwardLeft.Move(f[i]);
      forwardRight.Move(f[i]);
      
    }
    for (int i = 1; i <= 12010; i++)
    {
      upLeft.Lift(-0.00125);
      upRight.Lift(-0.00125);
    }

    delay(1500);

    for (int i = 265; i < 446; i++)
    {
      rollLeft.Move((-3)*(rollLeft.rotatePS));
      rotateLeft.Rotate(r[i]);
      forwardLeft.Move(f[i]);
      rollRight.Move((3)*(rollLeft.rotatePS));
      rotateRight.Rotate(r[i]);
      forwardRight.Move(f[i]);
    }

    for (int i = 1; i <= 12010; i++)
    {
      upLeft.Lift(0.00125);
      upRight.Lift(0.00125);
    }

  }

  else if(command == "ss"){
    for (int j = 1; j <= 181; j++)
    {
      rotateLeft.Rotate(-0.28125);
      rotateRight.Rotate(-0.28125);
      if(j < 86)
      {
        forwardLeft.Move(0.5);
        forwardRight.Move(0.5);
      }
    }
    for (int i = 1; i <= 12010; i++)
    {
      upLeft.Lift(-0.00125);
      upRight.Lift(-0.00125);
    }
    delay(1500);

    for (int i = 265; i < 446; i++)
    {
      rollLeft.Move((-3)*(rollLeft.rotatePS));
      rotateLeft.Rotate(r[i]);
      forwardLeft.Move(f[i]);
      rollRight.Move((3)*(rollLeft.rotatePS));
      rotateRight.Rotate(r[i]);
      forwardRight.Move(f[i]);

    }

for (int i = 1; i <= 12010; i++)
    {
      upLeft.Lift(0.00125);
      upRight.Lift(0.00125);
    }
  }

else if(command == "denemes")
  {
    HomeAll();
    
    //MoveSyncLeft(forwardY[0], angleY[0]);
    //MoveSyncRight(forwardY[0]-17.0, angleY[0]);
    upLeft.Lift(-7.0);
    upRight.Lift(-13.0);
    
  }


}






void MoveSyncLeft(double distance, double angle)
{
  distanceSync = abs(distance);
  angleSync = abs(angle);
  double _movePS = forwardLeft.movePS;
  double _rotatePS = rotateLeft.rotatePS;
  float stepLinear = distanceSync/_movePS;
  float stepAngular = angleSync/_rotatePS;
  int speedAccelerationFL = forwardLeft._speed;
  int speedAccelerationRL = rotateLeft._speed;
  int maxSpeedFL = speedAccelerationFL/10;
  int maxSpeedRL = speedAccelerationRL/10;
  if (stepLinear != 0.0){
   if (stepLinear > stepAngular)
    {
      for(int i = 0; i < stepAngular; i++)
      {
        if(i < stepAngular/10 && speedAccelerationRL>maxSpeedRL)
        {
          speedAccelerationRL = speedAccelerationRL-((9*maxSpeedRL)/(stepAngular/10));
          speedAccelerationFL = speedAccelerationFL-((9*maxSpeedFL)/(stepAngular/10));
        }
        else if(i > 9*(stepAngular/10) && speedAccelerationRL<rotateLeft._speed)
        {
          speedAccelerationRL = speedAccelerationRL+((9*maxSpeedRL)/(stepAngular/10));
          speedAccelerationFL = speedAccelerationFL+((9*maxSpeedFL)/(stepAngular/10));
        }
  
        int ratio = stepLinear/stepAngular;
        //rotateLeft.RotateS(_rotatePS*(angle/angleSync), speedAccelerationRL);
        //forwardLeft.MoveS(ratio*_movePS*(distance/distanceSync), speedAccelerationFL);  
        rotateLeft.RotateS(_rotatePS*(angle/angleSync), 750);
        forwardLeft.MoveS(ratio*_movePS*(distance/distanceSync), 300);  
      }
    }

    else
    {      
      for(int i = 0; i < stepAngular; i++)
      {
        if(speedAccelerationRL>rotateLeft._speed/10)
        {
          speedAccelerationRL = speedAccelerationRL-3;
        }
        if(speedAccelerationFL>forwardLeft._speed/10)
        {
          speedAccelerationFL = speedAccelerationFL-3;
        }
        int ratio = stepAngular/stepLinear;
        rotateLeft.RotateS(ratio*_rotatePS*(angle/angleSync), 750);
        forwardLeft.MoveS(_movePS*(distance/distanceSync), 300);      
      }
    }
  }
  else{
    for(int i = 0; i < stepAngular; i++)
      {
        if(speedAccelerationRL>rotateLeft._speed/10)
        {
          speedAccelerationRL = speedAccelerationRL-3;
        }
        if(speedAccelerationFL>forwardLeft._speed/10)
        {
          speedAccelerationFL = speedAccelerationFL-3;
        }
        rotateLeft.RotateS(_rotatePS*(angle/angleSync), 750);
      }
  }
    
}



void MoveSyncL(double distance, double angle)
{
  distanceSync = abs(distance);
  angleSync = abs(angle);
  double _movePS = forwardLeft.movePS;
  double _rotatePS = rotateLeft.rotatePS;
  float stepLinear = distanceSync/_movePS;
  float stepAngular = angleSync/_rotatePS;
  if(stepLinear != 0.0)
  {
   if (stepLinear > stepAngular)
    {
      for(int i = 0; i < stepAngular; i++)
      {
        int ratio = stepLinear/stepAngular;
        rotateLeft.RotateProcess(_rotatePS*(angle/angleSync));
        forwardLeft.Move(ratio*_movePS*(distance/distanceSync));
        Serial.println(ratio*_movePS*(distance/distanceSync));
      }
    }

    else
    {      
      for(int i = 0; i < stepAngular; i++)
      {
        int ratio = stepAngular/stepLinear;
        rotateLeft.RotateProcess(ratio*_rotatePS*(angleSync));
        forwardLeft.Move(_movePS*(distance/distanceSync));      
      }
    }

  }
  else{
    for(int i = 0; i < stepAngular; i++)
      {
        rotateLeft.RotateProcess(_rotatePS*(angleSync));
      }
  }
}

void MoveSyncRight(double distance, double angle)
{
  distanceSync = abs(distance);
  angleSync = abs(angle);
  double _movePS = forwardRight.movePS;
  double _rotatePS = rotateRight.rotatePS;
  float stepLinear = distanceSync/_movePS;
  float stepAngular = angleSync/_rotatePS;
  int speedAccelerationFL = forwardRight._speed;
  int speedAccelerationRL = rotateRight._speed;
  int maxSpeedFL = speedAccelerationFL/10;
  int maxSpeedRL = speedAccelerationRL/10;
  if (stepLinear != 0.0){
   if (stepLinear > stepAngular)
    {
      for(int i = 0; i < stepAngular; i++)
      {
        if(i < stepAngular/10 && speedAccelerationRL>maxSpeedRL)
        {
          speedAccelerationRL = speedAccelerationRL-((9*maxSpeedRL)/(stepAngular/10));
          speedAccelerationFL = speedAccelerationFL-((9*maxSpeedFL)/(stepAngular/10));
        }
        else if(i > 9*(stepAngular/10) && speedAccelerationRL<rotateRight._speed)
        {
          speedAccelerationRL = speedAccelerationRL+((9*maxSpeedRL)/(stepAngular/10));
          speedAccelerationFL = speedAccelerationFL+((9*maxSpeedFL)/(stepAngular/10));
        }
  
        int ratio = stepLinear/stepAngular;
        //rotateLeft.RotateS(_rotatePS*(angle/angleSync), speedAccelerationRL);
        //forwardLeft.MoveS(ratio*_movePS*(distance/distanceSync), speedAccelerationFL);  
        rotateRight.RotateS(_rotatePS*(angle/angleSync), 750);
        forwardRight.MoveS(ratio*_movePS*(distance/distanceSync), 300);  
      }
    }

    else
    {      
      for(int i = 0; i < stepAngular; i++)
      {
        if(speedAccelerationRL>rotateRight._speed/10)
        {
          speedAccelerationRL = speedAccelerationRL-3;
        }
        if(speedAccelerationFL>forwardRight._speed/10)
        {
          speedAccelerationFL = speedAccelerationFL-3;
        }
        int ratio = stepAngular/stepLinear;
        rotateRight.RotateS(ratio*_rotatePS*(angle/angleSync), 750);
        forwardRight.MoveS(_movePS*(distance/distanceSync), 300);      
      }
    }
  }
  else{
    for(int i = 0; i < stepAngular; i++)
      {
        if(speedAccelerationRL>rotateRight._speed/10)
        {
          speedAccelerationRL = speedAccelerationRL-3;
        }
        if(speedAccelerationFL>forwardRight._speed/10)
        {
          speedAccelerationFL = speedAccelerationFL-3;
        }
        rotateRight.RotateS(_rotatePS*(angle/angleSync), 750);
      }
  }

    
}


void HomeAll()
{
    upLeft.HomeZAll();
    upLeft.HomeZ();
    upRight.HomeZ();
    forwardLeft.HomeLinearAll();
    forwardLeft.HomeLinear();
    forwardRight.HomeLinear();
    rotateLeft.HomeAngulasrAll();
    rotateLeft.HomeAngular();
    rotateRight.HomeAngular();

}