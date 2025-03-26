// week06_4_fishX_fishY_for_many_x_y_for_k_N
// File-Prefrenece
void setup(){
  size(600, 400);
}
float fishX = 300, fishY = 200; // 魚座標
float [] x = new float[100]; // Java 的陣列
float [] y = new float[100]; // 最多有100個飼料
int N = 0; // 目前是0顆飼料
void draw(){
  background(#C0ffee);
  for(int i=0; i<N; i++){ // for迴圈
    ellipse(x[i], y[i], 8, 8); // 飼料的陣列
    y[i]++;
    if(y[i]>400){ // 飼料掉到底部, 要回收x[i]及y[i]
      for(int k=i; k<N-1; k++){ // 把右邊逐一左撇
        x[k] = x[k+1]; // 格子的值,往左移
        y[k] = y[k+1];
      }
      N--; // 更新飼料的總數N
    }
  }
  ellipse(fishX, fishY, 30, 10); // 魚
}
void mousePressed(){
  x[N] = mouseX;
  y[N] = mouseY;
  N++;
}
  //if(x>0){
   // y += 2;
    //if(y>400) x = 0;
    //ellipse(x, y, 8, 8);
    //float dx = x - fishX, dy = y - fishY;
    //float d = dist(x, y, fishX, fishY);
    //fishX += dx / d * 4;
    //fishY += dx / d * 4;
  //}
//}
