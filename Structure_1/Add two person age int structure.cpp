#include<stdio.h>
struct Height{
	int feet;
	float inch;

} saloni,rajput;
int main(){
	struct Height result;
	
printf("Enter the height in the feet for sanoli\n");
scanf("%d",&saloni.feet);
printf("Then in inches\n");
scanf("%f",&saloni.inch);
printf("Enter the height in the feet for rajput\n");
scanf("%d",&rajput.feet);
printf("Then in inches\n");
scanf("%f",&rajput.inch);

result.feet=saloni.feet+rajput.feet;
result.inch=saloni.inch + rajput.inch;
//printf("\n after adding height of both candidates is %d feet and %.2f inches\n",result.feet,result.inch);	
while(result.inch>=12.0){
	result.inch=result.inch-12.0;
	++result.feet;
}
printf("sum of the height = %d\ and %.2f",result.feet,result.inch);
}
