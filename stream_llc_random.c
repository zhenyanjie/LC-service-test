#include <stdio.h>
#include <stdlib.h>
#include<cstdlib>
#include<ctime>
#define random(a,b) (rand()%(b-a+1)+a)

void cache_access(int **array,int row){
	int i,j,k;
    srand((unsigned)time(NULL));
    for(k=0;k<row*16;k++){
        i=random(0,row-1);
        j=random(0,15);
        array[i][j]=i+j;
        //printf("%d' '%d\n",i,j);
        
}      
/*	for(j=0;j<16;j++){
		for(i=0;i<row;i++){
			printf("%d\n",array[i][j]);
		}
	} 
*/
 }
int main(){
	int size;
	int row;
	printf("请输入数组大小：");
        scanf("%d",&size);
	row=size*1024*1024/64;
        
	int i,j;
	int **array;
	array =(int**)malloc(sizeof(int*)*row);
	for(i=0;i<row;i++){
		array[i]=(int*)malloc(sizeof(int*)*16);
	}

	int count;	
	printf("请输入循环次数：");
	scanf("%d",&count);
	for(j=0;j<count;j++){
	cache_access(array,row);
	}
        for(i=0;i<row;i++){
		free(array[i]);
	}
	free(array);
}
