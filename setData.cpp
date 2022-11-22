#include<iostream>
using namespace std;
class EMPLOYEE{
private:
	int emp_id,emp_age;
	string emp_name;
	
	void get(){
		cout<<"Enter name : "<<emp_name<<endl; 
		cout<<"Enter Id : "<<emp_id<<endl;
		cout<<"Enter age : "<<emp_age<<endl;	
	}
	
public:
	void set(int emp_id,int emp_age){
		this->emp_id = emp_id;
		this->emp_age = emp_age;
		get();
	}
	
};
main()
{
	EMPLOYEE emp1;
	emp1.set(1,15);
}
