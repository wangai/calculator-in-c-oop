#include"class.h"
#include<iostream>
using namespace std;

void calc::sums(){
			this->sum = this->a + this->b;
        }
        
void calc::prods(){
			this->prod = this->a * this->b;
            
        }
        
void calc::compute(float v1, float v2){
            this->a = v1;
			this->b = v2;
            sums();
            prods();
        }
        
void calc::display(){
			float x,y;
			cout<<"Please enter the first number:  ";
			cin>>x;
			cout<<endl;
			cout<<"Please enter the second number:  ";
			cin>>y;
			cout<<endl;
			cout<<endl;
			compute(x,y);
			cout<<"The sum is: "<<this->sum<<endl;
			cout<<"The product is: "<<this->prod<<endl;
			cout<<endl;
			cout<<endl;
		}