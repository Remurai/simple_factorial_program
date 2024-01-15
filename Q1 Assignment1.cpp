#include <iostream>
using namespace std;
double cal(int x, int n);
int main(){
	int x,n;
	double ans;
    cout<<"Please key in x value: ";
	cin>>x;
	cout<<"\nPlease key in n value: ";
	cin>>n;
	if(x>n){
		ans=cal(x,n);
		cout<<"1";
		for (int i= 2; i<=n; i++){
		if(i%2 == 0) cout<<" + "<<i<<"!/"<<(x-i);
		else cout<<" - "<<i<<"!/"<<(x-i);
	}cout<<" = "<<ans;
}
	else cout<<"Wrong input, x value must be greater than n!!";
	return 0;
}
double cal(int x,int n){
	double sum = 0; 
    double fact = 1; 
 for(int i = 2; i <= n; i++){ 
       fact *= i;
	   if (i%2 == 0)         // Update factorial 
       sum += fact/(x-i);
	   else
	   sum -= fact/(x-i);  // Update series sum 
    } sum=sum+1;
	return sum;
}
