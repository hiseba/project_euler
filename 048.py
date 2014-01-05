
result = 0
modulo = 10000000000
n = 1000

# Using (a*b)%c = ((a%c)*(b%c))%c
#       (a+b)%c = ((a%c)+(b%c))%c

for i in range(1,n+1):
    temp = i
    for j in range(1,i):
        temp = (temp * i) % modulo
    result = (temp + result) % modulo
print (result)
