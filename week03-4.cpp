/// week03-4.cpp
/// M90H044 �ƨg�{�]���ॴ����, �|�ܶýX
#include <stdio.h>
int main()
{
	int ans = 0; /// ���ץ[�D�o
	///�j��e��ans�O0
	int N; ///���@�Ӿ�� N
	///�H���j��q1�}�l <=
	scanf("%d", &N);
	for(int i=1; i<=N; i++){
		ans +=i; ///�j�餤�� �ק� ans
	}
	printf("%d", ans);
}/// �j��᭱, �L�X ans
