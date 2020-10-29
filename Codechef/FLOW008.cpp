
#include<cstdio>


int main() {
    int value,input;
    scanf("%d",&value);
    for(int i=0;i<value;i++){
    scanf("%d ",&input);
    if(input<10)
    printf("What an obedient servant you are!\n");
    else printf("-1\n");
    }	
	return 0;
}
