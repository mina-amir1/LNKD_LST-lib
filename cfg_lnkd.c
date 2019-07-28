/*		 ┌ -------------------------------- ┐
		 |  LNKD_LST LIB CONFIGURATION FILE |
		 └ -------------------------------- ┘
*/

 #define node node //RENAME THE 2nd "node" WITH YOUR NODE NAME 
 #define data data //RENAME THE 2nd "data" WITH YOUR FIELD NAME
 #define next next //RENAME THE 2nd "next" WITH YOUR NEXT NODE POINTER NAME 
      
   typedef struct node_type node;
   struct node_type{
	 u8 data;
	 node *next;
   };