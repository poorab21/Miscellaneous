#include<iostream>
#ifndef OREO_H
#define OREO_H
class oreo{
	protected:
	   std::string type;
	public:
	   oreo()
	     {
		this->name="";
	     }
	   ~oreo()
             {
		this->name="";
	     }
	    void call()
		{
		  std::cout<<"Call from oreo"<<std::endl;
		}
            virtual void details()
		{
		std::cout<<"type = "<<this->type<<std::endl;
		}
};  
#endif