#include<iostream>
int main()
{
	float number;
	float sub;
	float sum=0;
	float answer;
	int start=1;
	std::cout<<"enter number:"<<std::endl;
	std::cin>>number;
	do{
		sub=start*start*start;
		answer=1/sub;
		std::cout<<"1 / "<<start<<"*"<<start<<"*"<<start<<" = "<<answer<<std::endl;
		sum=sum+answer;
		start++;
	}
	while(start<=number);
	std::cout<<"the sum is "<<sum<<std::endl;
}
