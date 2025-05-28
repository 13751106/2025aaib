/// week15-2.cpp
/// 騎車時, 觀察前方的車牌, 發現好像很多重複的數字
/// 有重複的數字, 機率有多高? 寫程式算算看
#include <stdio.h>
int helper(int n)
{
    int  a[10] = {};
    while(n>0){
        int now = n%10;
        a[now]++;
        if(a[now]>1) return 1;
        n = n / 10;
    }
    return 0;
}
int main()
{
    int ans = 0; /// 有幾個重複的數字?
    for(int i=0; i<=9999; i++){ /// 0000...9999
        if( helper(i)==1 ) ans++;
    }
    printf("%d", ans);
}
