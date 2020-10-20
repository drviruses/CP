s=input()
li=[]
c=0
for x in s:
    if(x!='{' and x!='}' and x!=',' and x!=' '):
        if(x not in li):
            li.append(x)
print(len(li))