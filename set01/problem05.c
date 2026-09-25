
#include <stdio.h>
int input_size() {
	int n;
	printf("enter the number of numbers you want to add\n");
	scanf("%d",&n);
	return n;
}

void input_numbers(int n,int a[n])
{
	printf("enter numbers: ");
	for(int i=0; i<n; i++) {
		printf("enter number %d: ",i);
		scanf("%d",&a[i]);}

}

int sum_of_numbers(int n,int a[n])
{
	int sum=0;
	for(int i=0; i<n; i++) {
		sum=sum+a[i];
	}
	return sum;
}
void output_numbers(int n,int a[n],int sum)
{for(int i=0; i<n-1; i++) {
		printf("%d+",a[i]);
	}
	printf("%d=%d",a[n-1],sum);
}
int main() {
	int n;
	int sum;
	n=input_size();
	int a[n];
	input_numbers(n,a);
	sum=sum_of_numbers(n,a);
	output_numbers(n,a,sum);
	return 0; }