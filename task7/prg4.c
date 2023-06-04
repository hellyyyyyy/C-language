#include<stdio.h>
int main(){
	int a,b,c,d,e;
	printf("Enter A:");
	scanf("%d",&a);
	printf("enter B:");
	scanf("%d",&b);
	printf("enter C:");
	scanf("%d",&c);
	printf("enter D:");
	scanf("%d",&d);
	printf("enter E:");
	scanf("%d",&e);
	
	if(a<b){
		if(a<c){
			if(a<d){
			if(a<e){
			printf("A is min");
		}
		else{
			printf("E is min");
		}
		}
		else{
			if(d<b){
			if(d<c){
			if(d<e){
			printf("D is min");
		}
		else{
			printf("E is min");
		}
		}
		else{
			if(c<e){
			printf("C is min");
		}
		else{
			printf("E is min");
		}
		}
		}
		else{
			if(b<e){
			printf("B is min");
		}
		else{
			printf("E is min");
		}
		}
		}
		}
		else{
			if(c<d){
			if(c<e){
			printf("C is min");
		}
		else{
			printf("E is min");
		}
		}
		else{
			if(d<e){
			printf("D is min");
		}
		else{
			printf("E is min");
		}
		}
		}
	}
	else{
		if(b<c){
			if(b<d){
			if(b<e){
			printf("B is min");
		}
		else{
			printf("E is min");
		}
		}
		else{
			if(d<c){
			if(d<e){
			printf("D is min");
		}
		else{
			printf("E is min");
		}
		}
		else{
		if(c<e){
			printf("C is min");
		}
		else{
			printf("E is min");
		}
		}
		}
		}
		else{
			if(c<d){
			if(c<e){
			printf("C is min");
		}
		else{
			printf("E is min");
		}
		}
		else{
			if(d<e){
			printf("D is min");
		}
		else{
			printf("E is min");
		}
		}
		}
	}
	
	
	
	
	
	
	
	
	return 0;
}