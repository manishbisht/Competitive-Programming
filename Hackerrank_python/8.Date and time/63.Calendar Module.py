import calendar
m,d,y=map(int,input().split())
print(calendar.day_name[calendar.weekday(y,m,d)].upper())
####################another method#########################
import calendar
m,d,y=map(int,input().split())
c = calendar.weekday(y, m, d)
if c == 0:
    print("MONDAY")
elif c == 1:
    print("TUESDAY")
elif c == 2:
    print("WEDNESDAY")
elif c==3:
    print("THURSDAY")
elif c==4:
    print("FRIDAY")
elif c== 5:
    print("SATURDAY")
elif c==6:
    print("SUNDAY")
