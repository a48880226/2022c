PImage imgBG,img,img2;
void setup(){
  size(400,400);
  imgBG=loadImage("BG.png");
  img=loadImage("astro.png");
  img2=loadImage("image2.png");
}
void draw(){
  background(255,255,0);
  image(imgBG,0,0,400,400);
  image(img2,50,50);
  image(img,mouseX,mouseY);
}
