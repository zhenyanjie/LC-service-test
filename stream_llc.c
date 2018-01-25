#include <stdio.h>
#include <stdlib.h>

void cache_access(int **array,int row){
	int i,j;
        for(j=0;j<16;j++){
		for(i=0;i<row;i++){
			array[i][j]=i+j;
		}
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
