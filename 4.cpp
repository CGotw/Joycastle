#include <bits/stdc++.h>
using namespace std;

// 设置一个1-100的桶count，如果有分数的话count[1]=1
// 从后往前遍历，统计每个count[i]=1的排名
// 根据每个人的分数得到排名，时间复杂度O(n) 
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
