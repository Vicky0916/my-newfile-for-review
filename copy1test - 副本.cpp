package pakage1;

public class copy1test 
{

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		copy1 c=new copy1("张三","男",21);
		c.setExperience("就读于西安财经大学");
		c.getExperience();
		c.display();
		copy1 c1=(copy1)c.clone();
		c1.display();
	}

}
