// Rajan Robotics
// Arduino-Based 4-Way Traffic Light System

// North
#define NR 2
#define NY 3
#define NG 4

// East
#define ER 5
#define EY 6
#define EG 7

// South
#define SR 8
#define SY 9
#define SG 10

// West
#define WR 11
#define WY 12
#define WG 13

void setup()
{
  pinMode(NR, OUTPUT);
  pinMode(NY, OUTPUT);
  pinMode(NG, OUTPUT);

  pinMode(ER, OUTPUT);
  pinMode(EY, OUTPUT);
  pinMode(EG, OUTPUT);

  pinMode(SR, OUTPUT);
  pinMode(SY, OUTPUT);
  pinMode(SG, OUTPUT);

  pinMode(WR, OUTPUT);
  pinMode(WY, OUTPUT);
  pinMode(WG, OUTPUT);

  allRed();
}

void allRed()
{
  digitalWrite(NR, HIGH);
  digitalWrite(ER, HIGH);
  digitalWrite(SR, HIGH);
  digitalWrite(WR, HIGH);

  digitalWrite(NY, LOW);
  digitalWrite(NG, LOW);
  digitalWrite(EY, LOW);
  digitalWrite(EG, LOW);
  digitalWrite(SY, LOW);
  digitalWrite(SG, LOW);
  digitalWrite(WY, LOW);
  digitalWrite(WG, LOW);
}

void loop()
{
  // NORTH GREEN
  allRed();
  digitalWrite(NR, LOW);
  digitalWrite(NG, HIGH);
  delay(5000);

  // NORTH YELLOW
  digitalWrite(NG, LOW);
  digitalWrite(NY, HIGH);
  delay(2000);

  // EAST GREEN
  allRed();
  digitalWrite(ER, LOW);
  digitalWrite(EG, HIGH);
  delay(5000);

  // EAST YELLOW
  digitalWrite(EG, LOW);
  digitalWrite(EY, HIGH);
  delay(2000);

  // SOUTH GREEN
  allRed();
  digitalWrite(SR, LOW);
  digitalWrite(SG, HIGH);
  delay(5000);

  // SOUTH YELLOW
  digitalWrite(SG, LOW);
  digitalWrite(SY, HIGH);
  delay(2000);

  // WEST GREEN
  allRed();
  digitalWrite(WR, LOW);
  digitalWrite(WG, HIGH);
  delay(5000);

  // WEST YELLOW
  digitalWrite(WG, LOW);
  digitalWrite(WY, HIGH);
  delay(2000);
}
