/* lmfao diskette */
/*
 * This code is made by Team Number One yay
 * Modify this as you wish
 */

#include <SoftwareSerial.h>
SoftwareSerial BTSerial(4,5);
#include <LiquidCrystal.h>
String a;
int btData;
bool bahasa = true;
int langPin = 7;
LiquidCrystal lcd (12, 11, 10, 9, 8, 7);

void setup() {
  // yerr:
  Serial.begin(9600);
  BTSerial.begin(38400);
  
  lcd.begin(16,2);
  lcd.print("Loading...done");
  delay(1500);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Init complete");
}

void start() {
  // yerr + 2
  delay(1000);
  lcd.clear();
  lcd.print("WeatherBox pre1/0");
  lcd.setCursor(0,1);
  lcd.print("(C)Team Number 1");
  selectLang();
  if (bahasa = false){
    english();
  }
  else{
    bm();
  }
 
}

void selectLang(){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Hold for English");
  lcd.setCursor(1,0);
  lcd.print("Tunggu untuk BM");
  delay(3000);
}

void english(){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.write("Turn on your");
  lcd.setCursor(1,0);
  lcd.write("phone's Bluetooth");
  delay(4000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.write("Select a device")
  lcd.setCursor(1,0);
  lcd.write("named bigdino");
  delay(4000);
  lcd.clear();
  lcd.setCursor(0,0);
  if(BTSerial.available()){
    lcd.write("Connected");
    enProgram();
  }
  else{
    lcd.write("ERROR")
    lcd.setCursor(1,0);
    lcd.write("ERR:FAILED_1")
  }

  void enProgram(){
    lcd.clear();
    btData = BTSerial.read();
    if (btdata = "storm"){
      lcd.setCursor(0,0);
      lcd.write
    }
  }
}
