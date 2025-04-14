year=int(input())
while 1:
    year+=1
    dic=str(year)
    if len(set(dic))==len(dic):
        break
print(year)
