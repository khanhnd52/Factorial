#include <stdio.h>
#include <stdlib.h>

//viết hàm tính n!
//IPO
//I: n
//P: 1.2.3.4...n -> nhồi heo đất
//O: kết quản nhân dồn 
//chọn hàm loại mấy =)))

void getFactorialV1();
void getFactorialV2(int n);
int getFactorialV3();
int getFactorialV4(int n);  //soái ca y = f(x) = x^2...

int main(int argc, char const *argv[])
{
  //getFactorialV1();
  //getFactorialV2(6); //1.2.3.4.5.6 = 720
  getFactorialV3();
  return 0;
}

int getFactorialV3(){
  int n, acc = 1;
  printf("Input a number (>= 0) to get the factorial: ");
  scanf("%d", &n);

  if(n == 0 || n == 1)
    acc = 1;
  else //tạm thời chưa chặn n < 0
    for(int i = 2; i <= n; i++)
      acc *= i;
  
  //printf("%d! = %d\n", n, acc);
  return acc;  //do ham ko return
  printf("%d! = %d\n", n, acc);
}

void getFactorialV2(int n){
  int acc = 1;

  if(n == 0 || n == 1)
    acc = 1;
  else //tạm thời chưa chặn n < 0
    for(int i = 2; i <= n; i++)
      acc *= i;
  
  //return acc;  do ham ko return
  printf("%d! = %d\n", n, acc);
}

void getFactorialV1(){
  int n, acc = 1;
  printf("Input a number (>= 0) to get the factorial: ");
  scanf("%d", &n);

  if(n == 0 || n == 1)
    acc = 1;
  else //tạm thời chưa chặn n < 0
    for(int i = 2; i <= n; i++)
      acc *= i;
  
  //return acc;  do ham ko return
  printf("%d! = %d\n", n, acc);
}