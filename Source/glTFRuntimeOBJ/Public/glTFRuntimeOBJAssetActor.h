/ /   C o p y r i g h t   2 0 2 3 ,   R o b e r t o   D e   I o r i s .  
  
 # p r a g m a   o n c e  
  
 # i n c l u d e   " C o r e M i n i m a l . h "  
 # i n c l u d e   " G a m e F r a m e w o r k / A c t o r . h "  
 # i n c l u d e   " g l T F R u n t i m e A s s e t . h "  
 # i n c l u d e   " g l T F R u n t i m e O B J A s s e t A c t o r . g e n e r a t e d . h "  
  
 U C L A S S ( )  
 c l a s s   G L T F R U N T I M E O B J _ A P I   A g l T F R u n t i m e O B J A s s e t A c t o r   :   p u b l i c   A A c t o r  
 {  
 	 G E N E R A T E D _ B O D Y ( )  
 	  
 p u b l i c : 	  
 	 / /   S e t s   d e f a u l t   v a l u e s   f o r   t h i s   a c t o r ' s   p r o p e r t i e s  
 	 A g l T F R u n t i m e O B J A s s e t A c t o r ( ) ;  
  
 p r o t e c t e d :  
 	 / /   C a l l e d   w h e n   t h e   g a m e   s t a r t s   o r   w h e n   s p a w n e d  
 	 v i r t u a l   v o i d   B e g i n P l a y ( )   o v e r r i d e ;  
  
 p u b l i c : 	  
 	 / /   C a l l e d   e v e r y   f r a m e  
 	 v i r t u a l   v o i d   T i c k ( f l o a t   D e l t a T i m e )   o v e r r i d e ;  
  
 	 U P R O P E R T Y ( E d i t A n y w h e r e ,   B l u e p r i n t R e a d W r i t e ,   M e t a   =   ( E x p o s e O n S p a w n   =   t r u e ) ,   C a t e g o r y   =   " g l T F R u n t i m e | O B J " )  
 	 U g l T F R u n t i m e A s s e t *   A s s e t ;  
  
 	 U P R O P E R T Y ( E d i t A n y w h e r e ,   B l u e p r i n t R e a d W r i t e ,   M e t a   =   ( E x p o s e O n S p a w n   =   t r u e ) ,   C a t e g o r y   =   " g l T F R u n t i m e | O B J " )  
 	 F g l T F R u n t i m e S t a t i c M e s h C o n f i g   S t a t i c M e s h C o n f i g ;  
  
 	 U F U N C T I O N ( B l u e p r i n t N a t i v e E v e n t ,   C a t e g o r y   =   " g l T F R u n t i m e | O B J " ,   m e t a   =   ( D i s p l a y N a m e   =   " O n   S t a t i c M e s h C o m p o n e n t   C r e a t e d " ) )  
 	 v o i d   R e c e i v e O n S t a t i c M e s h C o m p o n e n t C r e a t e d ( U S t a t i c M e s h C o m p o n e n t *   S t a t i c M e s h C o m p o n e n t ) ;  
  
 p r i v a t e :  
 	 U P R O P E R T Y ( V i s i b l e A n y w h e r e ,   B l u e p r i n t R e a d O n l y ,   m e t a   =   ( A l l o w P r i v a t e A c c e s s   =   " t r u e " ) ,   C a t e g o r y   =   " g l T F R u n t i m e | O B J " )  
 	 U S c e n e C o m p o n e n t *   A s s e t R o o t ;  
  
 } ;  
 