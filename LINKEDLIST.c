#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head,*temp,*newnode,*prev;
struct node* in(struct node* head,int data){
	newnode=(struct node*)malloc(sizeof(struct node));
	
	newnode->data=data;
	newnode->next=NULL;
	
	if(head==0){
		newnode->next=head;	
		return newnode;
	}
	
	temp=head;
	
	while(temp->next!=0){
		
		temp=temp->next;
		
	}
	temp->next=newnode;
	return head;
}
struct node* insert(struct node* head,int data,int pos){
    
    int i = 1;
    if (pos < 1) {
        printf("invalid position\n");
        return head;
    }
    
    newnode = (struct node*)malloc(sizeof(struct node));
    if (!newnode) {
        printf("Memory allocation failed\n");
        exit(1); // Exit the program in case of memory allocation failure
    }

    newnode->data = data;
    newnode->next = NULL;

    if (pos == 1) {
        newnode->next = head;
        return newnode;
    }

    temp = head;
    prev = NULL;
    
    while (i < pos && temp != NULL) {
        prev = temp;
        temp = temp->next;
        i++;
    }
    
    if (i < pos) {
        printf("Out of range\n");
        free(newnode);
        return head;
    }
    
    prev->next = newnode;
    newnode->next = temp;
    
    return head;

    
}

struct node* delete(struct node* head, int pos){
    int i=1;
    if(pos<1){
        printf("invalid position\n");
        return head;
    }
    if(pos==1){
        temp=head;
        head=head->next;
        free(temp);
        return head;
    }

    temp=head;
    prev=0;
    

    while(i<pos && temp!=0){
        prev=temp;
        temp=temp->next;
        i++;
    }

    if(i<pos || temp==0){
        printf("out of range\n");
        return head;
    }
    prev->next=temp->next;
    free(temp);
    return head;

}

void display(struct node* head){
    temp=head;
    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("NULL");

}

int main(){
    head=0;
    int choice,pos,data;
    while(1){
        printf("enter choice \n1.insert \n2.insert at position \n3.delete \n4.display \n5.exit");
        scanf("%d",&choice);
        switch (choice){
        	case 1: printf("enter data");
        			scanf("%d",&data);
        			head=in(head,data);
        			break;
            case 2: printf("enter position\n");
                    scanf("%d",&pos);
                    printf("enter data\n");
                    scanf("%d",&data);
                    head=insert(head,data,pos);
                    break;
            case 3: printf("enter position to delete\n");
                    scanf("%d",&pos);
                    head=delete(head,pos);
                    break;

            case 4: display(head);
                    break;

            case 5: exit(0);

            default: printf("enter a valid choice\n");
                     break;
		}

}
	return 0;
}
