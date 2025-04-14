ltr=input().strip()
ltr=ltr[1:-1]
if ltr=="":
    print(len(ltr))
else:
    let=set(ltr.split(", "))
    print(len(let))