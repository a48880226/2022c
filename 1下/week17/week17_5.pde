import processing.sound.*;
SoundFile sound;
void setup() {
  size(200,200);
  sound = new SoundFile(this,"vibraphon.aiff");
  sound.loop();
}      
void draw() {
}
