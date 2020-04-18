score=int(input('请输入成绩：'))
if score>100:
    grade="输入错误!"
elif score>=90:
    grade="优秀"
elif score>=80:
    grade="良好"
elif score>=70:
    grade="中"
elif score>=60:
    grade="及格"
elif score<60:
    grade="不及格"
else:
    grade="输入错误！"
print(grade)
