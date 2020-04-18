#输入三角形的三边长并输出边长和面积
a=float(input('请输入三角形的边长a: '))

b=float(input('请输入三角形的边长b: '))

c=float(input('请输入三角形的边长c: '))

s=( a + b + c ) / 2

area=( s *( s - a ) * ( s - b ) * ( s - c )) ** 0.5

print('三角形的三边分别为:  a=%0.1f ,' %a,'b= %0.1f,' % b,'c= %0.1f' % c)

print('三角形的面积=',round(area,15))
