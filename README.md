# LNKD_LST-lib
C linked list library that ease the use of linked list in C without using pointers to pointers and too many asterisks (*)
Just include it in your C file and adjust cfg_lnkd.h 
/* LINKED LIST LIB Created By MINA AMIR
*********YOU MUST INCLUDE stdlib.h AND stdio.h TO HAVE A PROPER LNKD_LST.h ATTITUDE*********
*********YOU SHOULD OPEN cfg_lnkd.h AND ADJUST STRUCTURE TO HAVE A PROPER LNKD_LST.H ATTITUDE*********
┌-------------------------------------------------------------------------------------------------------------------------------------------┐
|                                                        SYNTAX OF LNKD_LST FUNCs                                                           |
|-------------------------------------------------------------------------------------------------------------------------------------------|
|rtrn_type |  func(type_definition);//func description																		                                        					|
|		   		 |																														                                                                  	|
|1.void    |  push(pointer to pointer_head ,u8_the needed data);//insert node @ the begining													                      |
|2.void    |  append(pointer to pointer_head ,u8_the needed data);//insert node @the end														                        |
|3.void    |  insert_after(pointer_head,u8_search data,u8_the needed data to insert);//insert node after the node that contains search data	|
|4.void    |  delete(pointer to pointer_head,u8_search val for desired node);//delete the node that contains search val			  	            |
|5.void    |  print_list(pointer_head);//printing the nodes data of the list																	                              |
|6.node*   |  search_node(pointer_head,u8_search val);//returning the address of the node that contains search val in data field	  	      |
|7.u8      |  getlist_length(pointer_head);//returning the number of nodes in the list															                        |
└-------------------------------------------------------------------------------------------------------------------------------------------┘	
