/// week11-2.cpp
/// �禡�ŧi�B�禡�w�q�B�禡�I�s (���/�禡)
#include <stdio.h>

int addnum(int a, int b) /// �ŧi2�ӰѼƪ��Ϊ��W�r
{/// �e���� ���/�禡 ���w�q
    printf("�{�b�i�J addnum() �禡��, a:%d b:%d\n", a, b);
    int x;
    x = a + b;
    printf("�Ծ�ۥ[��, �o��ƭ� %d �N return �^��\n", x);
    return x; /// �^�Ǩ���I�s���a��
}

int main()
{
    int ans = addnum(10, 30); /// �ڴe�ϥ�/�I�s���u�ۭq�禡�v
    printf("%d", ans);
}
