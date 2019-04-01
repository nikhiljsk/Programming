class B():
    def foo(self):
        super(B,self).foo()      
        print("b")
        super(B,self).foo()

class C():
    def foo(self):
        print('c')

class E():
    def foo(self):
        print("e")
        super(E,self).foo()

class D(B,E,C):
    def foo(self):
        print('d')
        super(D,self).foo()


d=D()
d.foo()
