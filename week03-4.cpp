/// week03-4.cpp
/// M90H044 瘋狂程設不能打中文, 會變亂碼
#include <stdio.h>
int main()
{
	int ans = 0; /// 答案加道這
	///迴圈前面ans是0
	int N; ///有一個整數 N
	///人類迴圈從1開始 <=
	scanf("%d", &N);
	for(int i=1; i<=N; i++){
		ans +=i; ///迴圈中間 修改 ans
	}
	printf("%d", ans);
}/// 迴圈後面, 印出 ans
