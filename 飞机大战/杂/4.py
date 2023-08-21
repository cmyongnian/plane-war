class a:
    def __init__(self):
      self.num1 = 100
      self.__num2 = 200
    def test(self):
        print('%d'%(self.num2))




class b(a):
  def __test(self):
      super().test()
c =b()
c.test()


print(b)

