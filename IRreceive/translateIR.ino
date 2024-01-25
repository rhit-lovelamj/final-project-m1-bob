/*
 * Function which demonstrates mapping of command values to buttons on the
 * Elegoo IR remote 
 */

void translateIR() {                        // takes action based on IR code received
  Serial.print("translate IR: ");
  switch (IRresults.command) {
    case 0x45:
      Serial.println("POWER");
      break;
    case 0x46:
      Serial.println("VOL+");
      break;
    case 0x47:
      Serial.println("FUNC");
      break;
    case 0x44:
      Serial.println("LEFT");
      break;
    case 0x40:
      Serial.println("PLAY");
      break;
    case 0x43:
      Serial.println("RIGHT");
      break;
    case 0x9:
      Serial.println("UP");
      break;
    case 0x15:
      Serial.println("VOL-");
      break;
    case 0x7:
      Serial.println("DOWN");
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
      Serial.println("4");
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