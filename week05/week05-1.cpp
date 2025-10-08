/// week05-1.cpp
/// LeetCode 學習計畫58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); /// 把字串 string 當 iostream 的 cin 來用
        string word; /// 字串
        /// ss >> word;
        while( ss >> word ){
            /// 裡面什麼都沒有
        }
        cout << word;

        return word.length() ;
    }
};
