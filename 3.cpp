#include <bits/stdc++.h>
using namespace std;

int rand5(){
	// �������������Ĺ�һ��������������12-13��1���������ȡ�µ������
	// 2,3->1  4,5->2  6,7->3  8,9->4  10,11->5
	while(true) {
		int num=rand13();
		if(num<=11&&num>=2){
			return num/2;
		} 
	} 
}
