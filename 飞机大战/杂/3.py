class Item:
    def __init__(self, name, space):
       self.name= name
       self.space= space
    def __str__(self):
        return "[%s] 占地 %.2f"%(self.name,self.space)


class House:
    def __init__(self, area):
        self.area = area
        self.free_area = area
        self.item_list = []
    def __str__(self):
        return("总面积：%.2f\n [剩余面积:%.2f]\n 家具: %s"\
               %(self.area, self.free_area, self.item_list))
    def add_item(self, item):
       print("要添加%s"% item)
       if item.space > self.free_area:
           print("ddsf")
           return
       self.item_list.append(item.name)
       self.free_area -= item.space





bed= Item("床",4)
chair= Item("椅子",200)
print(chair)
print(bed)

home = House(60)
home.add_item(bed)
home.add_item(chair)
print(home)
