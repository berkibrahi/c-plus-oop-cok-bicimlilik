#include <iostream>

using namespace std;
class nokta{
	public:
	 void ciz(){
		cout<<"nokta ciziliyor"<<endl;
	}
};
class kare:public nokta{
		public:
	virtual void ciz(){
		cout<<"kare ciziliyor"<<endl;
	}
};
class daire:public nokta{
		public:
	void ciz(){
		cout<<"daire ciziliyor"<<endl;
	}
};

int main(int argc, char** argv) {
	nokta n;
	kare k;
	daire d;
	nokta *ptr;
	ptr=&d;
	ptr->ciz();
	ptr=&k;
	ptr->ciz();
		ptr=&n;
	ptr->ciz();


	return 0;
}
