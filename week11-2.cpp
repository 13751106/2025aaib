/// week11-2.cpp
/// ㄧΑㄧΑ﹚竡ㄧΑ㊣ (ㄧ计/ㄧΑ)
#include <stdio.h>

int addnum(int a, int b) /// 2把计
{/// 玡Α ㄧ计/ㄧΑ ﹚竡
    printf("瞷秈 addnum() ㄧΑ柑, a:%d b:%d\n", a, b);
    int x;
    x = a + b;
    printf("攫, 眔计 %d 盢 return 肚\n", x);
    return x; /// 肚㊣よ
}

int main()
{
    int ans = addnum(10, 30); /// и磂ㄏノ/㊣璹ㄧΑ
    printf("%d", ans);
}
