int uyariLED = 7;
int flame_sensor = 4;

void setup()
{
Serial.begin(9600);
pinMode(uyariLED, OUTPUT);
pinMode(flame_sensor, INPUT);
}
void loop()
{
int flame_data = digitalRead(flame_sensor); // flame_sensorden gelen dijital veriyi okuyarak flame_data degiskenine atayacak.
if (flame_data == 1) // flame_data icerisindeki veri 1 ise 
{
Serial.println("No Flame"); // Seri monitore No Flame yazacak.
}
else // flame_data da ki veri 0 ise   
{
Serial.println("Flame Detected"); // Seri monitore Flame Detected yazacak. 
digitalWrite(uyariLED, HIGH); // uyarini LEDini  200ms aralıklar ile yakıp söndürecek.
delay(200);
digitalWrite(uyariLED, LOW);
delay(200);
}
delay(1000);
}
