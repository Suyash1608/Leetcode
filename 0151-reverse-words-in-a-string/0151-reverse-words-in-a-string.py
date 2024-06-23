class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        word=""
        wordlist=[]
        for i in range(len(s)):
            if s[i]!=' ':
                word+=s[i]
            else:
                if word!="":
                    wordlist.append(word)
                    word=""
        if(word!=""):
            wordlist.append(word)
        
        result=' '.join(reversed(wordlist))
        return result