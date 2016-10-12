#include"classs.cc"

int main(){
	int a, b;
	cout<<"Please enter the first number"<<endl;
	cin>>a;
	cout<<"Please enter the second number"<<endl;
	cin>>b;
	clock_t start, end;
			start = clock();
	cout<<"The sum is: "<< sum(a,b)<<endl;
	cout<<"The product is: "<< product(a,b)<<endl;
		end = clock();
		cout<<(double)(end-start);
	return 0;
}
