import  card_tools
print('*'*30)
print('''名片管理系统1.0
1.新建名片
2.显示全部
3.查询名片
0.退出系统''')
print("*"*30)
while True:
      print(" ")
      action = int(input("请输入数字"))
      print("您选择的操作是%d" % action)
      if action in (1,2,3):
            if action == 1 :
                 card_tools.new_card()
            elif action == 2 :
                 card_tools.show_all()
            elif action == 3 :
                 card_tools.card_search()


      elif action == 0:
            print("退出系统")
            break
      else:
            print("您输入的不正确，请从新输入")




