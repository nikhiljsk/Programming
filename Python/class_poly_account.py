class account:
    def __init__(self,eid,balance,intrate):
        self.__id, self.__balance, self.intrate = eid, balance, intrate

    def withdraw(self,amount):
        if self.__balance>=amount:
            self.__balance-=amount
            print("Cash Withdrawn")
        else:
            print("Not sufficient balance")

    def deposit(self,amount):
        self.__balance+=amount
        print("deposit done!")

    def checkbalance(self):
        print(self.__balance)


           
eid=191901
a=[""]*4
a[0]=account(eid,100,4)
a[1]=account(eid+5,200,4)
a[2]=account(eid+10,300,4)
a[3]=account(eid+15,400,4)
eid=int(input("Enter ID"))

for i in range(4):
    if eid==a[i]._account__id:
        a[i].checkbalance()

if i>3:
    print("Not found")
