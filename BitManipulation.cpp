/*
bit manipulation..
*/
#include<bits/stdc++.h>
using namespace std;

class Bits{

private:

public:
 Bits(){

 }

 void sub_without_entries(){
 	int a,b;
 	cin>>a>>b;
 	cout<<sub_without(a,b)<<endl;
 }
 int sub_without(int x,int y){
 	 while(y!=0){
 	 	int brw=(~x)&y; //borrow
 	 	 x=x^y; //
 	 	 y=brw<<1;
 	 }
    return x;
 }
// given a number find a number which is greater than a number and a power of 2

 int next_power_of_2(int n){
  int temp=1;
  while(temp<n){
  	 temp=temp<<1;
  } 
   return temp;
 }	

 void next_power_of_2_entries(){
 	int n;
 	cin>>n;
 	cout<<next_power_of_2(n)<<endl;
 }

//O(logn)
 int parity_type(int n){
   int ct=0;
   while(n){
   	 n=n&(n-1);
   	 ct++;
     //ct+=n&1;
     //n=n>>1;
   }
  return ct;
 }
 void parity_type_entries(){
 	int n;
 	cin>>n;
 	cout<<parity_type(n)<<endl;
 }

};
int main(){

	Bits b;
	//b.sub_without_entries();
    //b.next_power_of_2_entries();
    b.parity_type_entries();


return 0;
}