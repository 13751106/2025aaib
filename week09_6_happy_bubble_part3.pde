// week09_6_happy_bubble_pary3
// 先劃出基礎的形狀,. 等遺下要複製
void setup(){
  size (400, 400);
}
int [][] a = new int[4][4]; // Java的陣列
void draw(){
  stroke(182, 74, 113); // 線的色彩
  strokeWeight(10); // 線的粗細
  fill(200, 21, 77); // 填充色彩
  rect(0, 0, 400, 400, 50); // 多了50弧度
  for(int i=100; i<=300; i+=100) line(0, i, 400, i); // 橫線1
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
	
      stroke(179, 32, 75); // 線的色彩
      if(a[i][j]==0){
        fill(220, 21, 77); // 填充色彩
        strokeWeight(4);
        ellipse( x, y, 60, 60);
        noStroke();
        fill(228, 71, 41);
        ellipse( x, y, 25, 25);
      }else{
        fill(142, 21, 54); // 填充色彩
        strokeWeight(4);
        ellipse( x, y, 60, 60);
      }
    }
  }
}
