class Base{
	
	protected int count;

	public Base(int n){
		count = n;
	}

	public int update(){
		return ++count;
	}

}

class Test{
	
	public static void main(String[] args){
		
		Base b = new Base(10){
			public int update(){
				return --count;
			}
		};

		System.out.println(b.update());
	}
}

