class Solution:
    def compress(self, chars: list[str]) -> int:
        i=0
        newIndex=0
        n=len(chars)
        # checking when first repeat end
        while i<n:
            j=i+1
            while(j<n and chars[i]==chars[j]):
                j+=1
            
            # agar string khatam ho gyi
            # ya phir neya char encounter kar liya

            # store old char
            chars[newIndex]=chars[i]
            newIndex+=1


            count=j-i # count of present character in 

            if count>1:
                count=str(count)
                for v in count:
                    chars[newIndex]=v
                    newIndex+=1
            
            i=j



        return newIndex