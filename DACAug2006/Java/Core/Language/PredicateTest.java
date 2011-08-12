interface Filter{
	boolean allowed(Object item);
}

class PredicateTest{
	
	public static int print(Object[] items){
		System.out.print("{");
		int count = 0;
		for(int i = 0; i < items.length; i++){
			if(count++ > 0){
				System.out.print(", ");
			}
			System.out.print(items[i]);
		}
		System.out.println("}");
		return count;
	}

	public static int printIf(Object[] items, Filter check){
		System.out.print("{");
		int count = 0;
		for(int i = 0; i < items.length; i++){
			if(!check.allowed(items[i])) continue;
			if(count++ > 0){
				System.out.print(", ");
			}
			System.out.print(items[i]);
		}
		System.out.println("}");
		return count;
	}

	static class CheckOdd implements Filter{
		public boolean allowed(Object item){
			Integer i = (Integer) item;
			int ii = i.intValue();
			return (ii % 2 == 1); 
		}
	}

	public static void main(String[] args){
		Integer[] nums = new Integer[10];
		for(int i = 0; i < 10; i++)
			nums[i] = new Integer(i + 1);
		print(nums);
		Filter f = new CheckOdd();
		printIf(nums, f);
		final int l = 5;
		Filter g = new Filter(){
			{
				System.out.println("-- PredicateTest$1 instance initialized");
			}

			public boolean allowed(Object item){
				Integer i = (Integer) item;
				return (i.intValue() < l);
			}
		};
		printIf(nums, g);
		print(args);
	}
}








