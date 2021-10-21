#include<iostream>
int n,a;
float x;
void nhap(){
	printf("nhap 2 <=n <= 15: ");
	do{
		scanf("%d",&n);
		if(n<2||n>15)printf("nhap lai n: ");
	}
	while(n<2||n>15);
	printf("nhap a: ");
	scanf("%d",&a);
		printf("nhap x: ");
		scanf("%f",&x);
}

float tinh(){
	int i=1;
	float y=0.0;
	float s=x*x*x*x,d=x;
	int t=1;
	while((n+1)!=i){
		float tu=(float)a+d*s;
		int mau=2*i;
		d=d*x;
			y=y+(float)t*tu/mau;
		t=t*(-1);
	
		i++;
	}
	return y;
}
int main(){
	nhap();
	float kq=tinh();
	printf("%f",kq);
}
