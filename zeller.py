def zeller(year,month,day):
    if month == 1 or month == 2:
        month += 12
        year  -= 1

    h = (year + year // 4 - year // 100 + year // 400 + (13 * month + 8) // 5 + day) % 7
    days = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"]
    return days[int(h)]

year = input("year : ")
year = int(year)

month = input("month : ")
month = int(month)

day = input("day : ")
day = int(day)

print(zeller(year,month,day))
