#include"task3.h"
#ifndef NOKIA_H
#define NOKIA_H
class nokia:public oreo{
	protected:
		std::string model;
	public:
		nokia()
		{
			this->model="";
		}
		~nokia()
		{
			this->model="";
		}
		void call()
		{
			std::cout<<"Call from Nokia"<<std::endl;
		}
		void details()
		{
			std::cout<<"Model = "<<this->model<<std::endl;		
}
};
