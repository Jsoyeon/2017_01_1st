#include <iostream>
#include <string>
using namespace std;
#include "JSY_Student.h"	//using 아래에다 안 쓰면 오류!!

int main()     //메인 시작
 {  
	 Student S1(4260,"JSY");  
       cout<<"My school number is "<<S1.getNo()<<endl;
       cout<<"My name is "<<S1.getName()<<endl;

    Student S2(3221,"SY");
       cout<<"My school number is "<<S2.getNo()<<endl;
	   cout<<"My name is "<<S2.getName()<<endl;

    Student S3; 
      S3.setNum(1000);
      S3.setName("KSR");
        cout<<"My school number is "<<S3.getNo()<<endl;
        cout<<"My name is "<<S3.getName()<<endl; return 0;
}