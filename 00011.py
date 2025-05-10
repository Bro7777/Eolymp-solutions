# Problem: Eolymp 11 - Big accuracy
# Link: https://basecamp.eolymp.com/en/problems/11

m,n,k=map(int,input().split())
print(m//n,end="")


if k!=0:


 print(".",end="")
 eded=m%n
 while(k>0):
    eded*=10
    print(eded//n,end="")
    eded-=eded//n*n
    
    k-=1
    
