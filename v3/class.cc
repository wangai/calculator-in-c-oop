#include<iostream>
using namespace std;
    
    class Calc{
        public:
        int a;
        int b;
        int sum;
        int prod;
        
        void sums(){
			this->sum = this->a + this->b;
        }
        
        void prods(){
			this->prod = this->a * this->b;
            
        }
        
        void compute(int v1, int v2){
            this->a = v1;
			this->b = v2;
            sums();
            prods();
        }
        
        void display(){
			int x,y;
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
    };