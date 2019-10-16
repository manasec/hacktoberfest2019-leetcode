n=int(  input('enter a number'))
rev=0
sum=0
for i in range(len(str(n))):
    rev=n%10+rev*10
    sum=sum+n%10
    n=n//10
print('rev=',rev,'sum=',sum)    