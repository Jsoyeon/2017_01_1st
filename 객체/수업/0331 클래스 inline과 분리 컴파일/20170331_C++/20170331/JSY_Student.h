#ifndef JSY_Student_h	//���࿡ �������� �ʾҴٸ�
#define JSY_Student_h	//���࿡ �����ߴٸ�
class Student   //Ŭ���� ����
{
  private:
      int no;      //member variable(��� ����)
      string name;
  public:
     Student();  //������Ÿ��. �����
    ~Student();
     Student(int n,string na);
	void setNum(int n);	
	void setName(string na);
	int getNo();
	string getName();

#endif	//(1)������ (2)���� �����ϰ� ������
};