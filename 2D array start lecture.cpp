#include<stdio.h>
int city=2;
int week=7;

int main(){
  int temprature[city][week];
  //enter
  for(int i=0;i<city;i++){
    for(int j=0;j<week;j++){
      printf("City %d, Day %d: ",i+1,j+1);
      scanf("%d",&temprature[i][j]);
    }
  }
  printf("\n Displaying value \n\n");
  
  for(int i=0;i<city;++i){
    for(int j=0;j<week;++j){
      printf("City %d, Day %d: %d\n",i+1,j+1,temprature[i][j]);
      
    }
  }
  
}
