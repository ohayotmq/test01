#include <stdio.h>
#include <math.h>
int main(){
int t;
scanf("%d",&t);
for(int z=0;z<t;z++){
	int n,a[100],c=0,count=0,d=0;
scanf("%d",&n);
for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
	c+=a[i];
}
for(int i=0;i<n;i++){
	for(int j=0;j<i;j++){
		d=d+a[j];
	}
	if(d*2+a[i]==c){
		printf("Yes\n");
		count=1; 
		break;
	}
	else{
		d=0;
	}
}
if(count==0){
	printf("No\n");
}
}
return 0;
}
