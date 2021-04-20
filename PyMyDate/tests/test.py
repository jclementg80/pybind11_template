import pymydate

print("Testing pymydate inside test.py")

c = pymydate.MyDate_add(2, 2)

print("2 + 2 = ", c)

mydate = pymydate.MyDate(20, 4, 21)

print(f"My date is: {mydate.getDay()} / {mydate.getMonth()} / {mydate.getYear()}")
