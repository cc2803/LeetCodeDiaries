## Since this question in leetcode requires premium 
## and so I am posting 2 solutions both layman and a proper python
## shit
def arm(n):
    count=0
    n1=n; n2=n
    while n1>0:
        count+=1
        n1//=10
    res=0
    while n2>0:
        res+=(n2%10)**count
        n2//=10
    return res==n
  
def arm_py(n):
  count=len(str(n))
  li=list(str(n).strip(' '))
  res=0
  for i in li:
    res+=int(i)**count
  return res==n
print(arm(1634))
print(arm_py(1634))
print(arm(1635))
print(arm_py(1635))

##  A proper python thing
