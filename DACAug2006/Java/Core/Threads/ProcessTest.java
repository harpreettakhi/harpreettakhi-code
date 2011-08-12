class ProcessTest{

	public static void main(String[] args){
		Runtime rt = Runtime.getRuntime();
		try{
			Process p = rt.exec("notepad");
			for(int i = 50000; i > 0; i--)
				System.out.println("Count : " + i);
			//p.waitFor();
			p.destroy();
		}catch(Exception e){
			System.out.println(e);
		}
		System.out.println("Goodbye!");
	}

}
