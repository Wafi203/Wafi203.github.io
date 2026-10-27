#define Trig 18
#define Echo 5
#define SoilMoisture 35
#define LDR 15
#define AirMoist 2

float TimeTaken;
float Distance;
float SoilMoisture;
float LDR;
float AirMoist;


#define SoundSpeed 0.34



void setup() {
  // put your setup code here, to run once:
pinMode(Trig,OUTPUT);
pinMode(Echo,INPUT);
Serial.begin(115200);

}

void sensors(){
 pinMode(SoilMoisture,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (Trig,LOW);
delay(2);
digitalWrite(Trig,HIGH);
delay(10);
digitalWrite(Trig,LOW);

TimeTaken = pulseIn(Echo,HIGH);

Distance = SoundSpeed*TimeTaken;

Serial.print("Distance =");
Serial.print(Distance);
Serial.println("Cm");
}






