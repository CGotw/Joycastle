#include <bits/stdc++.h>
using namespace std;

// ����һ��1-100��Ͱcount������з����Ļ�count[1]=1
// �Ӻ���ǰ������ͳ��ÿ��count[i]=1������
// ����ÿ���˵ķ����õ�������ʱ�临�Ӷ�O(n) 
void rank(int *score,int *rank){
	int count[101];
	memset(count,0,sizeof(count));
	for(int i=0;i<100;i++) count[score[i]]=1;
	int now=1;
	for(int i=99;i>=0;i--) if(count[i]==1) count[i]=now++;
	for(int i=0;i<100;i++){
		rank[i]=count[score[i]];
	}
} 

int main(){
	int score[100],r[100];
	memset(score,0,sizeof(score));
	memset(r,0,sizeof(r));	
	rank(score,r);
	for(int i=0;i<100;i++){
		cout <<r[i]<<endl;
	}
}
