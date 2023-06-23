def checkPalindrome(s):
    # Write your code here
	# Return a boolean
	s=s.lower()
	si=0
	ei=len(s)-1
	while(si<=ei):
		if s[si]>="0" and s[si]<="9" or s[si]>="A" and s[si]<="Z" or s[si]>="a" and s[si]<="z":
			if s[ei]>="0" and s[ei]<="9" or s[ei]>="A" and s[ei]<="Z" or s[ei]>="a" and s[ei]<="z":
				if(s[si]!=s[ei]):
					print(s[si],s[ei])
					return False
			else:
				ei-=1
		else:
			si+=1
		si+=1
		ei-=1
			

	return True

# a=[]
# for i in range(10):
#     a.append(input())

# for i in a:
# 	print(checkPalindrome(i))

print(checkPalindrome("z&%@ G$vgZ-@"))