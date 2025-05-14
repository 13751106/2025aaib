/// week13-4.cpp
/// LeetCode 3335. Total Characters in String After Transformations I
class Solution {
public:
    int a[2000000] = {};
    int helper(int t){ /// �ϥΡu�禡�I�s�禡�v
        if( a[t] > 0 ) return a[t];
        if( t < 26 ) return 1;
        a[t] = (helper(t-26) + helper(t-26+1)) % 1000000007;  /// �̭���8��0
        return a[t];
    }
    int lengthAfterTransformations(string s, int t) {
        int ans = 0;
        for(char c : s){ /// C++ ���y�k, �i�H��C�Ӧr���B�X��
            ans = (ans + helper( t+c-'a' )) % 1000000007; /// �̭���8��0
        }
        return ans;
    }
};
