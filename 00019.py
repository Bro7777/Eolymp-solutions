# Problem: Eolymp 19 - Degree of symmetry
# Link: https://basecamp.eolymp.com/en/problems/19

n=input()
p1=""
p2=""
cvb=0
if(len(n)%2==0):
    p1=n[:len(n)//2]
    p2=n[len(n)//2:]
    p2=p2[::-1]
    say=0
    for i in range(len(p1)):
        if(p1[i]==p2[i]):
            say+=1
        
        else:
            cvb=max(cvb,say)
    cvb=max(cvb,say)
    print(cvb)

else:
    p1=n[:len(n)//2]
    p2=n[len(n)//2+1:]
    p2=p2[::-1]
    say=0

    for i in range(len(p1)):
        if(p1[i]==p2[i]):
            say+=1
        
        else:
            cvb=max(cvb,say)
            say=0
    cvb=max(cvb,say)
    print(cvb+1)
    
