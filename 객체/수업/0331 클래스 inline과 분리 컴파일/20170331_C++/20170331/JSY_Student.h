#ifndef JSY_Student_h	//만약에 정의하지 않았다면
#define JSY_Student_h	//만약에 정의했다면
class Student   //클래스 선언
{
  private:
      int no;      //member variable(멤버 변수)
      string name;
  public:
     Student();  //프로토타입. 선언부
    ~Student();
     Student(int n,string na);
	void setNum(int n);	
	void setName(string na);
	int getNo();
	string getName();

#endif	//(1)끝내라 (2)위에 수행하고 끝내라
};