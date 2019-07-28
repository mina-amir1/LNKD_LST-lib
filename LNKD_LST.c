/* LINKED LIST LIB Created By MINA AMIR
*********YOU MUST INCLUDE stdlib.h AND stdio.h TO HAVE A PROPER LNKD_LST.h ATTITUDE*********
*********YOU SHOULD OPEN cfg_lnkd.h AND ADJUST STRUCTURE TO HAVE A PROPER LNKD_LST.H ATTITUDE*********

┌ ------------------------------------------------------------------------------------------------------------------------------------------- ┐
|                                                         SYNTAX OF LNKD_LST FUNCs                                                            |
| ------------------------------------------------------------------------------------------------------------------------------------------- |
|rtrn_type|func(type_definition);//func description																			     			  |
| 		  |																																	  |
|1.void   |push(pointer to pointer_head ,u8_the needed data);//insert node @ the begining													  |
|2.void   |append(pointer to pointer_head ,u8_the needed data);//insert node @the end														  |
|3.void   |insert_after(pointer_head,u8_search data,u8_the needed data to insert);//insert node after the node that contains search data	  |
|4.void   |delete(pointer to pointer_head,u8_search val for desired node);//delete the node that contains search val						  |
|5.void   |print_list(pointer_head);//printing the nodes data of the list																	  |
|6.node*  |search_node(pointer_head,u8_search val);//returning the address of the node that contains search val in data field				  |
|7.u8     |getlist_length(pointer_head);//returning the number of nodes in the list															  |
└ ------------------------------------------------------------------------------------------------------------------------------------------- ┘*/	

#include"std_types.h"
#include"cfg_lnkd.h"
void push(node**head_ref,u8 data){
	//create a new node
	node * new_node;
	new_node=(node *)malloc(sizeof(node));
	//puting data in data field of the new node
	new_node->data=data;
	//making the new node the first one and make it points as the head points
	new_node->next=*head_ref;
	*head_ref=new_node;
	}

void append(node **head_ref,u8 data ){
	//create a new node and a new pointer 
	node * last=*head_ref;
	node * new_node;
	new_node=(node *)malloc(sizeof(node));
	//putting data in data field of the new node
	new_node->data=data;
	//if head == NULL insert the node
	if(*head_ref==NULL){
		*head_ref=new_node;
		new_node->next=NULL;
	}
	//search for the last element
	while(last->next!=NULL){
		last=last->next;
	}
	//adjusting addresses
	new_node->next=NULL;
	last->next=new_node;
}

void insert_after(node *head_ref,u8 search_val,u8 data){
	//create a new node 
	node * new_node;
	new_node=(node *)malloc(sizeof(node));
	new_node->data=data;
	//search for the node contains search_val
	while(head_ref->data!= search_val){
		//if search_val is not found print error and return
		if(head_ref->next==NULL){
			printf("\nERROR NO SUCH VALUE\n");
			return;
		}else{
		head_ref=head_ref->next;}
	}
	//adjusting pointers
	new_node->next=head_ref->next;
	head_ref->next=new_node;
}

void delete(node ** head_ref,u8 search_val){
	//making new pointers to save last and prev
	node * last =*head_ref;
	node * prev=NULL;
	//search for the desired node
	while(last->data!=search_val){
		//if search_val is not found print error and return
			if(last->next==NULL){
			printf("\nERROR NO SUCH VALUE\n");
			return;
			}
			else{
			prev=last;
			last=last->next;}
	}
	//if the desired node is the first one
	if (last==*head_ref && last->data==search_val){
		*head_ref=last->next;
		free(last);
	}
	else{
		prev->next=last->next;
		free(last);
	}
}

void print_list(node * head_ref){
	while(head_ref!=NULL){
		printf("\n%d",head_ref->data);
		head_ref=head_ref->next;
	}
}

node * search_node(node * head_ref,u8 search_val){
	//search for the node that contains the desiered value
	while(head_ref->data!=search_val){
		//if no search_val exist print error and return NULL to the pointer
		if(head_ref->next==NULL){
			printf("\nERROR NO SUCH VALUE\n");
			return NULL;
		}else{
			head_ref=head_ref->next;
		}
	}
	printf("%d FOUND",head_ref->data);
	return head_ref;
}

u8 getlist_length(node * head_ref){
	u8 no=0;
	while(head_ref!=NULL){
		no++;
		head_ref=head_ref->next;
	}
	return no;
}