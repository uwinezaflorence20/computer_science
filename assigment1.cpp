#include<iostream>
using namespace std;
int main(){
	int start_time,end_time,used_time,total;
	cout<<"please enter the start time: ";
	cin>>start_time;
	cout<<"please enter the end time: ";
	cin>>end_time;
	used_time= end_time - start_time;
	
	if(0<=start_time && start_time< 24 && 0< end_time && end_time<=24 && start_time < end_time){
		if(start_time>=0 && end_time<7){
			total+=(end_time- start_time)*500;
		}	
	if(start_time>=0 && start_time<7 && end_time>=7){
		total+=(7-start_time)*500;
	}
	
	
	
	if(start_time>=7&& end_time < 14){
		total+=(end_time-start_time)*1000;	
	}
	if(start_time<=7 &&end_time>14){
		total+=1000*7;
	}
	if(start_time>=7 && start_time<14 && end_time>=14){
		total+=(14-start_time)*1000;
	}
	if(start_time<7 && end_time>7 && end_time<14){
		total+=(end_time - 7)* 1000;
	}
	
	
	
	
	if(start_time>=14 && end_time<19){
		total+=(end_time - start_time)*1500;
	}
	if(start_time<=14 &&end_time>19){
		total+=1500*5;
	}
	if(start_time>=14 && start_time<19 && end_time>=19){
		total+=(19-start_time)*1500;
	}
	if(start_time<14 && end_time>14 && end_time<19){
		total+=(end_time - 14)* 1500;
   } 
   
 
 
 if(start_time>=19 && end_time<21){
   total+=(end_time- start_time)*1000;
 }
 if(start_time<=19&& end_time>21){
 	total+=1000*2;
 }  
 if(start_time>=19 && start_time < 21 && end_time>=21){
 	total+=(21- start_time)*1000;
 }
 if(start_time<19 && end_time>19&& end_time <21){
 	total+=(end_time-19)*1000;
 }
   
   
   


if(start_time>=21 && end_time<24){
   total+=(end_time- start_time)*500;	
}
if(start_time<= 21 && end_time>24){
	total+=500*7;
}
if(start_time>=21&& end_time<24 && end_time>=24){
	total+=(24- start_time)*500;
}
if(start_time<21&& end_time>21 && end_time<24){
	total+=(end_time-21)*500;
}


cout<<"you have to pay"<<total<<"rwf"<<endl;
}
else{
	cout<<"you entered the wrong information";
}
}
   
   
