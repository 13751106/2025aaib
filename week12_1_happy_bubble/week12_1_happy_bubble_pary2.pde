// week12_1_happy_bubble_pary2
void setup(){
  size(300, 300, P3D); // 開啟3D功能
}
void draw(){
  background(255, 255, 0); // 黃色的背景
  ortho(); // 垂直投影(就會全部都正正的)
  lights(); // 打光, 可讓3D模型更立體
  noStroke(); // 不要有線
  fill(#FF8BEA); // 球也是畫黃色
  
  for(int i=0; i<6; i++){
    for(int j=0; j<6; j++){
      pushMatrix(); // 備份矩陣
      translate( 25+j*50, 25+i*50); // 照著滑鼠的座標動
      sphere(23); // 半徑60的圓球
      popMatrix(); // 還原矩陣
    }
  }
}
