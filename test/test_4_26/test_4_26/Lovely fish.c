#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//�˱��ˣ������ˣ�����㣬�����㡣С������μ���һ�����ȿɰ����������ȵ���ÿֻ��Ŀɰ��̶ȡ��������㱻�������ų�һ�ţ�ͷ��������ߣ�Ȼ��ÿֻ���õ�һ��������ֵ����ʾ��ֻ��Ŀɰ��̶ȣ�����Ȼ����Խ�󣬱�ʾ��ֻ��Խ�ɰ�������������ֻ��Ŀɰ��̶ȿ���һ�����������е���ͷ��������ߣ�����ÿֻ��ֻ�ܿ���������ߵ���Ŀɰ��̶ȣ��������ﶼ�ڼ��㣬���Լ���������Χ���ж���ֻ�㲻���Լ��ɰ��ء��������Щ�ɰ��������Բ����õ�С���Ǽ���һ�¡�
//
//���������ʽ
//�����ʽ��
//��һ������һ������n����ʾ�����Ŀ��
//
//�ڶ���������n���������ÿո��������α�ʾ������ÿֻС��Ŀɰ��̶ȡ�
//
//�����ʽ��
//�������n���������ÿո��������α�ʾÿֻС�������ж���ֻ�㲻���Լ��ɰ���

//����

int main(){
	int n = 0;
	int i = 0;
	
	int num[] = { 0 };
	int num2[]={ 0 };
	scanf("%d", &n);
	int j = n;
	while (j-- > 0){
		scanf("%d", num);
	}
	for (i = 0; i < n; i++){
		int count = 0;
		int tmp = i;
		while (tmp--){
			if (num[i] > num[tmp])
				count++;
		}
		num2[i] = count;
	}
	for (i = 0; i < n; i++){
		printf("%d ", num2[i]);
	}

	system("pause");
	return 0;
}