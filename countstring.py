file = open('C:\\Users\\91982\\Desktop\\open.txt','r')
data = file.read()

count1=0 #alphabets
count2=0 #numbers
count3=0 #spaces

for i in data:
    if i.isalpha():
        count1=count1+1
    elif i.isdigit():
        count2=count2+1
    elif i.isspace():
        count3=count3+1
print("the text has alphabets= ")
print(count1)
print("the text has numbers= ")
print(count2)
print("the text has spaces= ")
print(count3)
