from pynput.keyboard import Key,Controller
import time
keyboard=Controller()
messages=input("请输入你要轰炸的信息：")
times=eval(input("请输入你要轰炸的次数："))
print("数据已被后台接受，请将光标移动至会话框")
time.sleep(2)
for i in range(3):
    print("距离信息轰炸还需要%d秒"%(3-i))
    time.sleep(1)
for i in range(times):
    keyboard.type(messages)
    keyboard.press(Key.enter)
    keyboard.release(Key.enter)
    time.sleep(0.1)
print("信息轰炸已经顺利完成，已退出！")