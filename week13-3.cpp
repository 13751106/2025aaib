/// week13-3.cpp
/// �Ρu����۰��k�v�䵪��(�̤j���]��)
#include <stdio.h>>
int gcd(int a, int b) /// �Q�Ρu�[���I�s�禡�v�ѥ�
{ /// �Ѥj a, �ѤGb
    if(a==0) return b; /// �J��0, �t�@��O����
    if(b==0) return a;
    return gcd(b, a%b);
} /// �ѤG�ܦѤj, �ѤT�ܦ�=��
int main()
{
    printf("�п�J2�ӼƦr(ex. 51 68)");
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = gcd(b, a%b);
    printf("�����̤j���]�ƬO:%d\n", ans);
}
