class Solution {
public:
    bool wordPattern(string pattern, string s){      
        map<char, string>chToWordMap;
        map<string, char>wordToChMap;
        s.push_back(' ');
        string currWord = "";
        int chIdx = 0;
        //===============================================================================================
        for (int  i = 0; i < s.size(); i++)
        {
            if(s[i] == ' ') //recording words from string
            {
                char currCh = pattern[chIdx++];
                //==============================================
                if (chToWordMap.count(currCh))
                {
                    string alreadyMappedWord = chToWordMap[currCh];
                    if (alreadyMappedWord != currWord) return false; //one character map's to two words
                }
                else if (wordToChMap.count(currWord))
                {
                    char alreadyMappedCh = wordToChMap[currWord];
                    if (alreadyMappedCh != currCh) return false; //one word map's to two characters
                }
                else
                {
                    chToWordMap[currCh] = currWord;
                    wordToChMap[currWord] = currCh;
                }
                //=================================================
                currWord = "";
            }
            else currWord.push_back(s[i]);
        }
        //===============================================================================================
        return (chIdx == pattern.size());
          
    }
};