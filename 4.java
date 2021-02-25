class Box 
{ 
	int width, height, depth; 

	
	Box(int w, int h, int d) 
	{ 
		width = w; 
		height = h; 
		depth = d; 
	} 

	 
	Box() 
	{ 
		width = height = depth = 0; 
	} 

	
	Box(int len) 
	{ 
		width = height = depth = len; 
	} 

	//method overloading 

	int volume() 
	{ 
		return width * height * depth; 
	} 
    double volume(double x,double y,double z)
      {
          return x*y*z;
      }

} 

public class Test 
{ 
	public static void main(String args[]) 
	{ 
		// constructor overloading
		Box mybox1 = new Box(10, 20, 15); 
		Box mybox2 = new Box(); 
		Box mycube = new Box(7);


		double vol; 

		// get volume of first box 
		vol = mybox1.volume(); 
		System.out.println(" Volume of mybox1 is " + vol); 

		// get volume of second box 
		vol = mybox2.volume(); 
		System.out.println(" Volume of mybox2 is " + vol); 

		// get volume of cube 
		vol = mycube.volume(); 
		System.out.println(" Volume of mycube is " + vol); 

        // METHOD overloading
        vol = mybox2.volume(1.1,1.1,1.1);
         	System.out.println(" Volume of mycube is " + vol); 

	} 
} 
