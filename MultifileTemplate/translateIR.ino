
void translateIR(){  // takes action based on IR code received
  Serial1.print("translate IR: ");
  switch (IRresults.command){
    case 0x45:
      Serial.println("POWER");
      for(pos = 40; pos < 140; pos += 3){                                 
        myservo.write(pos); 
        delay(40);                      
      } 
      break;
    case 0x46:
      Serial.println("VOL+");
      enableMotor(BOTH_MOTORS);
      setMotorDirection(LEFT_MOTOR, MOTOR_DIR_FORWARD);
      setMotorDirection(RIGHT_MOTOR, MOTOR_DIR_BACKWARD);
      setMotorSpeed(RIGHT_MOTOR, fastSpeed);
      setMotorSpeed(LEFT_MOTOR, lowSpeed);
      break;

    case 0x47:
      Serial.println("FUNC");
      for(pos = 140; pos>=41; pos-=3){                                
        myservo.write(pos); 
        delay(50);
      }
      break;
      
    case 0x44:
      Serial.println("LEFT");
      enableMotor(BOTH_MOTORS);
      setMotorDirection(LEFT_MOTOR, MOTOR_DIR_FORWARD);
      setMotorDirection(RIGHT_MOTOR, MOTOR_DIR_FORWARD);
      setMotorSpeed(RIGHT_MOTOR, fastSpeed);
      setMotorSpeed(LEFT_MOTOR, lowSpeed);
      break;

    case 0x40:
      Serial.println("PLAY");
      disableMotor(BOTH_MOTORS);
      break;

    case 0x43:
      Serial.println("RIGHT");
      enableMotor(BOTH_MOTORS);
      setMotorDirection(LEFT_MOTOR, MOTOR_DIR_FORWARD);
      setMotorDirection(RIGHT_MOTOR, MOTOR_DIR_FORWARD);
      setMotorSpeed(RIGHT_MOTOR, lowSpeed);
      setMotorSpeed(LEFT_MOTOR, fastSpeed);
      break;

    case 0x9:
      Serial.println("UP");
      enableMotor(BOTH_MOTORS);
      setMotorDirection(LEFT_MOTOR, MOTOR_DIR_FORWARD);
      setMotorDirection(RIGHT_MOTOR, MOTOR_DIR_FORWARD);
      setMotorSpeed(BOTH_MOTORS, fastSpeed);
      break;

    case 0x15:
      Serial.println("VOL-");
      enableMotor(BOTH_MOTORS);
      setMotorDirection(LEFT_MOTOR, MOTOR_DIR_BACKWARD);
      setMotorDirection(RIGHT_MOTOR, MOTOR_DIR_FORWARD);
      setMotorSpeed(RIGHT_MOTOR, lowSpeed);
      setMotorSpeed(LEFT_MOTOR, fastSpeed);
      break;

    case 0x7:
      Serial.println("DOWN");
      enableMotor(BOTH_MOTORS);
      setMotorDirection(LEFT_MOTOR, MOTOR_DIR_BACKWARD);
      setMotorDirection(RIGHT_MOTOR, MOTOR_DIR_BACKWARD);
      setMotorSpeed(BOTH_MOTORS, lowSpeed);
      break;

    case 0x16:
      Serial.println("0");
      break;

    case 0x19:
      Serial.println("EQ");
      break;

    case 0xD:
      Serial.println("ST");
      break;

    case 0xC:
      Serial.println("1");
      break;

    case 0x18:
      Serial.println("2");
      break;

    case 0x5E:
      Serial.println("3");
      break;

    case 0x8:
      Serial1.println("4");
      break;

    case 0x1C:
      Serial.println("5");
      break;

    case 0x5A:
      Serial.println("6");
      break;

    case 0x42:
      Serial.println("7");
      break;

    case 0x52:
      Serial.println("8");
      break;

    case 0x4A:
      Serial.println("9");
      break;

    default:
      Serial.println("other button");
      break;

  }
  delay(100);
}