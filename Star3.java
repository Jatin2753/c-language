class Star3
{
     public static void main(String[] args)
     {
          int a,b;
		  for(a=1;a<=10;a++)
		  {
			  for(b=1;b<=a;b++)
	          {
				  System.out.print(" ");
			  }
			  for(b=1;b<=10-a;b++)
	          {
				  System.out.print("*");
			  }
			  System.out.println("");
		  }	  
     }
}