#include<stdio.h>
#include<stdlib.h>
struct results{
    int marks;
    struct results* next;
};
struct results* node(int x){
    struct results* nodex = (struct results*)malloc(sizeof(struct results));
    nodex->marks = x;
    nodex->next = NULL;
    printf("\n Node created..\n");
    return nodex;
}
void insertnode(struct results* start,int x){
    struct results* newnode = node(x);
    while(start->next!=NULL){
        start = start->next;
    }
    start->next = newnode;
    printf("\n New node inserted..\n");
}
void deletenode(struct results* start,int x){
    struct results* temp = start->next;
}
int search(struct results* start,int key){
	int pos=1,found=0;
	while(start->next!=NULL){
		if(start->marks==key){
			found=1;
			break;
		}
		else{
			pos++;
			start = start->next;
		}
	}
	if(found==0)
		pos=-1;
	return pos;
}
void printall(struct results* headnode){
    while(headnode->next!=NULL){
        printf("%d-->",headnode->marks);
        headnode = headnode->next;
    }
    printf("%d-->",headnode->marks);
}
int main(){
    struct results* headnode = node(10);
    int x = 1,marks = NULL;
    while(x != 0){
        printf("\n1: New node\n2: Delete node\n3: Print list\n4: Search key\n0:exit\n");
        scanf("%d",&x);
        switch(x){
        	case 1: printf("\nEnter new node value:\n");
            		scanf("%d",&marks);
            		insertnode(headnode,marks);
            		break;
            case 2: printf("\nEnter node value to be deleted\n");
            		scanf("%d",&marks);
            		deletenode(headnode,marks);
            		break;
            case 3: printall(headnode);
            		break;
        	case 4: printf("\nEnter key value:\n");
        			scanf("%d",&marks);
        			printf("\nFound at %d position\n",search(headnode,marks));
        			break;
            case 0: printf("\nExit\n");
					break;
		}
    }
    return 0;
}
