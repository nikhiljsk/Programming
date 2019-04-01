psw="hello"
count=0;
for i in range(3):
    str = input("Enter the password: ")
    count+=1;
    if(str==psw):
        print("You have successfully logged in")
        break;
    elif(count==3):
        print("Access Denied")
        break;
