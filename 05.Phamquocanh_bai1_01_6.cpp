#include<iostream>
#include<math.h>
int n,a,b;
void nhapn(){
printf("nhap 9 < n <= 35: ");
    do {
	scanf("%d",&n);
	if(n<=9||n>35)printf("nhap lai n: ");
     }while(n<=9||n>35);
    printf("nhap a: ");
    scanf("%d",&a);
    printf("nhap b:  ");
    scanf("%d",&b);   
}
int mu(int s,int t){
	int gt=s;
	for(int i=1;i<=t;i++)
		gt=s*gt;
	return gt;
}
float tinhp(){
	float giatri=sqrt(2106);
	for(int i=1;i<=n;i++){
		int tu =mu(-1,i)*mu(a,i+1)+i;
		int mau=b+mu(-1,i)*i;
		float ps=(float)tu/mau;
			giatri=giatri+ps;
	}

	return giatri;
}
int main(){
	nhapn();
	float kq=tinhp();
	printf("%f",kq);
}
