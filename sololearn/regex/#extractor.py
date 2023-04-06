import re
# text = input()
text='''
Finally received the #gccp #swags after completing a month long Google cloud campaign which consists of 4 courses and 3 quests based on cloud by Qwiklabs .
.
.
.
It is really fun and not possible without our facilitator Dipayan Sarkar and lead Debarun Acharya as well as my friends. Thanks to everyone. Also, I helped many juniors to complete this event. Some face problems in creating bucket some, creating IAM.. and so many things. At the end it's a great journey indeed.

Looking forward to more such events 🚀🚀 Google Cloud

#gdsc #gccp #technology #team #google #cloud #career #learning #share #cloudcomputing

'''
#your code goes here
#use re.findall() with r"#\w+" as the regex
# import re
import re
text= input()
pattern=r"#\w+"
match=re.findall(pattern,text)
for i in match:
      print(i,end=" ")