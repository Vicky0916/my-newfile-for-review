class Circle:
	#构造方法
    def __init__(self,R):
        self._R=R  #半径
    def Get_area(self):
        return 3.14*self._R*self._R
    def Get_zc(self): 
        return 6.28*self._R
for i in range(10):
    cir=Circle(i+1)
    print("半径为%d的圆"%(i+1))
    print("圆的面积：%.2f"%(cir.Get_area()))
    print("圆的周长：%.2f"%(cir.Get_zc()))
