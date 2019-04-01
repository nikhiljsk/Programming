class count:
    count1=0
    def inp(self):
        self.count1+=1     #count.count1+=1 can be used
    def disp(self):
        print("%d" % self.count1)  #count.count1   can be used

obj=count()

obj.inp()
obj.inp()
obj.inp()
obj.inp()

obj.disp()
