card_list = []
def new_card():
    print("-"*50)
    print("新增名片")

    name = input("请输入姓名")
    phone = input("请输入电话号码")
    qq = input("请输入QQ")
    email = input("请输入邮箱地址")
    card_dict = {"name": name,
                 "phone": phone,
                 "QQ": qq,
                 "email": email }
    card_list.append(card_dict)
    print(card_list)
    print("添加%s成功"% name)


def show_all():
    print("-"*50)
    print("显示所有名片")
    if len(card_list) == 0 :
        print("无名片")
        return


    for name in ["姓名","电话","QQ","邮箱"]:
        print(name, end="\t\t")
    print(' ')

    for card_dict in card_list:
        print("%s\t\t%s\t\t%s\t\t%s"%(card_dict['name'],
                                      card_dict['phone'],
                                      card_dict['QQ'],
                                      card_dict['email']))


def card_search():
    print("_"*50)
    print("查询名片")
    find_name= input("请输入姓名")
    for card_dict in card_list:
        if card_dict["name"] == find_name:
            print('找到了%s'%find_name)
            print("姓名\t\t电话\t\tQQ\t\temail")
            print("="*50)
            print("%s\t\t%s\t\t%s\t\t%s"%(card_dict['name'],
                                      card_dict['phone'],
                                      card_dict['QQ'],
                                      card_dict['email']))
            # TODO
            deal_card(card_dict)
            break
    else:

        print("没找到%s"%find_name)

def deal_card(find_dict):
    print(find_dict)

    action_str =input("请选择操作"
                      "1修改 2删除 0返回上级菜单")
    if action_str == "1":
        find_dict["name"] = input("name")
        find_dict["phone"] = input('phone')
        find_dict["qq"]  = input('QQ')
        find_dict["email"]= input("email")
        print("修改名片")
    elif action_str == 2:
        card_list.remove(find_dict)
        print("删除名片")