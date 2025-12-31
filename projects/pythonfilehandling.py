# file=open(r"C:\Users\GeetikSharma\c++programs\projects\demo.txt","r")
# data=file.read()
# print(file.readline())
# print(data)
# print(file.readlines()) # return lines in list
with open (r"C:\Users\GeetikSharma\c++programs\projects\demo2.txt","a+") as f:
    f.write("new added line\n")
    print(f.read())
