
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len( s ) != len( t ) : return False
        dic = {}
        for i in range(len(s)):
            c = dic.get(s[i]) 
            if c is not None:
                dic[s[i]] = c + 1
            else : 
                dic[s[i]] = 1
        for i in range( len(t) ):
            c = dic.get( t[i] ) 
            if c is not None and c != 0:
                dic[t[i]] = c - 1
                if c - 1 == 0:
                    dic.pop(t[i])
            else : return False 
        if len( dic ) != 0: return False
        return True
        

def main(): 
    s = "jar"
    t = "jara"
    so = Solution()
    print( so.isAnagram(s, t) )

main()