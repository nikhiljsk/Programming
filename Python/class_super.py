class A:
    def foo(self):
        print('a')


class B(A):
    def foo(self):
        #super(B,self).foo()      
        print("b")
        super(B,self).foo()


class E:
    def foo(self):
        print("e")

        
class C(E):
    def foo(self):
        print('c')
        super(C,self).foo()         


class D(B,C):
    def foo(self):
        print('d')
        super(D,self).foo()


d=D()
d.foo()
