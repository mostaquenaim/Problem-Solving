

#include <iostream>

using namespace std;

bool check_prime(unsigned int n) {
  bool is_prime = true;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (unsigned int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}

int main()
{
    unsigned int y=100000000000001;
    int x[y],i=2;


    x[]=0;

    while(i++){
        unsigned int j=1;
      if(check_prime(i)){
          while(i*j<100000000000001){
         x[i*j++]=1;
          }
      }
    }

    int t;
    unsigned int n;



}
