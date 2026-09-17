// กำหนดขาควบคุมมอเตอร์ (ปรับเปลี่ยนตัวเลขได้ตามที่ต่อสายจริง)
#define MOTOR_A_IN1 12  // ล้อซ้าย เดินหน้า
#define MOTOR_A_IN2 13  // ล้อซ้าย ถอยหลัง
#define MOTOR_B_IN3 14  // ล้อขวา ถอยหลัง
#define MOTOR_B_IN4 15  // ล้อขวา เดินหน้า
 
void setup() {
  // ตั้งค่าให้ขาควบคุมมอเตอร์ทั้งหมดเป็นเอาต์พุต
  pinMode(MOTOR_A_IN1, OUTPUT);
  pinMode(MOTOR_A_IN2, OUTPUT);
  pinMode(MOTOR_B_IN3, OUTPUT);
  pinMode(MOTOR_B_IN4, OUTPUT);
 
  // สั่งให้รถหยุดนิ่งตอนเริ่มต้น
  stopRobot();

  moveForward();
  delay(250);

  stopRobot();
  delay(500);

  turnL();
  delay(325);

  stopRobot();
  delay(500);

  moveBackward();
  delay(350);

  stopRobot();
  delay(500);

  moveForward();
  delay(350);

  stopRobot();
  delay(500);

  turnR();
  delay(325);

  stopRobot();
  delay(500);

  moveForward();
  delay(250);

  stopRobot();
  delay(500);

  moveForward();
  delay(250);

  stopRobot();
  delay(500);

  turnR();
  delay(325);

  stopRobot();
  delay(500);

  moveForward();
  delay(110);

  stopRobot();
  delay(1000);

  moveBackward();
  delay(110);

  stopRobot();
  delay(500);

  turnR();
  delay(325);

  stopRobot();
  delay(500);

  moveForward();
  delay(250);

  stopRobot();
  delay(500);

  turnR();
  delay(325);

  stopRobot();
  delay(500);

  moveForward();
  delay(450);

  stopRobot();
  delay(500);

  turnL();
  delay(325);

  stopRobot();
  delay(500);

  moveForward();
  delay(250);

  stopRobot();
}
// ------ ฟังก์ชันควบคุมทิศทาง ------
 
void moveForward() {
  digitalWrite(MOTOR_A_IN1, HIGH);
  digitalWrite(MOTOR_A_IN2, LOW);
  digitalWrite(MOTOR_B_IN3, LOW);
  digitalWrite(MOTOR_B_IN4, HIGH);
}
 
void moveBackward() {
  digitalWrite(MOTOR_A_IN1, LOW);
  digitalWrite(MOTOR_A_IN2, HIGH);
  digitalWrite(MOTOR_B_IN3, HIGH);
  digitalWrite(MOTOR_B_IN4, LOW);
}
 
void stopRobot() {
  digitalWrite(MOTOR_A_IN1, LOW);
  digitalWrite(MOTOR_A_IN2, LOW);
  digitalWrite(MOTOR_B_IN3, LOW);
  digitalWrite(MOTOR_B_IN4, LOW);
}
 
void turnR() {
  digitalWrite(MOTOR_A_IN1, HIGH);
  digitalWrite(MOTOR_A_IN2, LOW);
  digitalWrite(MOTOR_B_IN3, HIGH);
  digitalWrite(MOTOR_B_IN4, LOW);
}
 
void turnL() {
  digitalWrite(MOTOR_A_IN1, LOW);
  digitalWrite(MOTOR_A_IN2, HIGH);
  digitalWrite(MOTOR_B_IN3, LOW);
  digitalWrite(MOTOR_B_IN4, HIGH);
}