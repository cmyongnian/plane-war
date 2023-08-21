class Cat:
    def eat(self):
        print(1)
    def __del__(self):
        print(2)
tom = Cat()
tom.eat()
print("_"*50)

text = open("7","w")
text.write("12435")
text.close()