#include "LotusNanoBot.h"





void setup()
{
    pinMode(AIN1, OUTPUT);
	pinMode(AIN2, OUTPUT);
	pinMode(BIN1, OUTPUT);
	pinMode(BIN2, OUTPUT);
	pinMode(PWMA, OUTPUT);
	pinMode(PWMB, OUTPUT);
	pinMode(_BT,INPUT);
	display.begin(SSD1306_SWITCHCAPVCC, 0x3C); 
	//////////////
	display.clearDisplay();
	display.setTextColor(WHITE, BLACK); 
	display.setCursor(30, 10);
	display.setTextSize(2);
	display.println("Lotus");
	display.setCursor(15, 30);
	display.println("NanoBot");
	display.setTextSize(1);
	display.setCursor(0, 51);
	display.setTextColor(BLACK, WHITE);
	display.println(" lotus-arduibot.com");
	display.setTextColor(WHITE, BLACK);
	display.display();
	/////////////
	beep();beep();

  
  
}
void loop()
{
  
  
  
}