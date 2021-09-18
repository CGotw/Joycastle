#include <bits/stdc++.h>
using namespace std;

int rand5(){
	// 策略是有舍弃的归一法，如果随机数是12-13或1，则继续获取新的随机数
	// 2,3->1  4,5->2  6,7->3  8,9->4  10,11->5
	while(true) {
		int num=rand13();
		if(num<=11&&num>=2){
			return num/2;
		} 
	} 
}
