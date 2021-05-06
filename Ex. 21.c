#include <stdio.h>
int main(){

int primo=0;
int a = 92;
int b = 1478;
int tem_primo = 0;
int x, i;
long long int produto=1;

for(i=a; i<=b; i++){
  primo=0;

  for( x = 1; x <=i; x++){
    if(i % x == 0){
      primo++;
    }
  }
  if(primo==2){
      produto = produto*i;
  }

}
printf("Produto: %lld", produto);
return 0;
}