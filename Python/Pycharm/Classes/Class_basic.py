class Basic:
    number = int(0)

    def in_basic(self, number):
        self.number = number

    def out_basic(self):
        print(self.number)

object_basic = Basic()
object_basic.in_basic(12)
object_basic.out_basic()