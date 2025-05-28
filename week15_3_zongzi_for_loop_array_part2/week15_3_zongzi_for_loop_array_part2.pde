// week15_3_zongzi_for_loop_array_part2
// 記得, 圖檔要再拉進來一次
PImage zongzi; // 模仿 week10
void setup(){
  size(600, 400); // 模仿 week04
  zongzi = loadImage("zongzi.png");
  imageMode(CENTER); // 畫圖時, 用正中心座標
} // 要把圖檔 zongzi.png 先拉到程式裡
float []x = new float[100]; // 模仿 week06
float []y = new float[100];
int N = 0; // 
void draw(){
   background(#C0ffee); // 模仿 week04
   for(int i=0; i<N; i++){ // 模仿 week06
     image(zongzi, x[i], y[i], 60, 50);
     y[i]++; // 粽子會往下掉
     if(y[i]>400){ // 粽子掉到底部 模仿 week06
         for(int k=i; k<N+1; k++){ // 模仿 week06
             x[k] = x[k+1]; // 模仿 week06
             y[k] = y[k+1];
         }
         N--;
      }
   }
   println(N);
}
void mousePressed(){
   x[N] = mouseX;
   y[N] = mouseY;
   N++;
}
