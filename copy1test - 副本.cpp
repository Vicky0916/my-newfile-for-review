package pakage1;

public class copy1test 
{

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		copy1 c=new copy1("����","��",21);
		c.setExperience("�Ͷ��������ƾ���ѧ");
		c.getExperience();
		c.display();
		copy1 c1=(copy1)c.clone();
		c1.display();
	}

}
