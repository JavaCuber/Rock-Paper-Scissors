#include <iostream>
char* p[] = {"Player wins","Draw","Computer wins","Rock","Paper","Scissors","Enter your choice:"};
int main(){
  printf("Rock=1 , Paper=2, and Scissors=3:\n%s",p[6]);
  int s,a=0,b=0,i=0;
  while(i<5){
    std::cin>>s;
    srand(time(0));
    s = "120012201"[3*(s-1)+rand()%3]&7;
    a+=(s==0)?1:0;
    b+=(s==2)?1:0;
    printf("%s!\n%s",p[s],(i<4)?p[6]:"");
    i++;
  }
  return printf("%s %d to %d\n",p["122222012222001222000122000012000001"[6*a+b]&7],a,b);
}
