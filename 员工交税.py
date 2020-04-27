salary=float(input('请输工资：'))
if salary<5000:
    money=0
elif salary<=36000:
    money=(salary-5000)*0.3
elif salary<=144000:
    money=(salary-5000)*0.1-2520
else: 
    money=(salary-5000)*0.2-16920

print('应交税款为:%f' %money)
