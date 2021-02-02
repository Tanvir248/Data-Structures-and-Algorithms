#include<iostream>
#include<cstdio>
#include <iomanip>
using namespace std;
void solve(){
  int productCode1, productCode2;
  double unit1, unit2, price1,price2,ans, ans1, ans2;

  scanf("%d %lf%lf", &productCode1, &unit1, &price1);

  scanf("%d %lf %lf", &productCode2, &unit2, &price2);
  ans1 = unit1*price1;
  ans2 = unit2*price2;
  ans = ans1+ans2;
  printf("VALOR A PAGAR: R$ %0.2lf \n", ans);
}
int main(){
  solve();
  return 0;
}