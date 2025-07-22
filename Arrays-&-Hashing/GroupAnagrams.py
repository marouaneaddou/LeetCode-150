
class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        dic = {}
        for i in range( len(strs)):
            sort = ''.join(sorted(strs[i]))
            value = dic.get( sort)
            if value == None:
                dic[sort] =[int(i)]
            else :
                dic[sort].append(int(i))
        result = []
        for key, value in dic.items():
            lst = []
            for i in range( len(value)):
                lst.append( strs[value[i]])
            result.append( lst )
         
        print( result )

def main():
    lst = ["act","pots","tops","cat","stop","hat"]
    print( ''.join(sorted("cat")))
    s = Solution()
    s.groupAnagrams( lst )
main()