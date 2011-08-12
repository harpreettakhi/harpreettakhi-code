class ThreadTest2{
	
	public static void main(String[] args){
		Runnable r = new Runnable(){
			public void run(){
				for(int i = 1; i <= 3000; i++){
					System.out.println("Hello : " + i);
				}
					
			}
		};
		Thread t = new Thread(r);
		t.setDaemon(true);
		t.start();
		for(int i = 1; i <= 2000; i++){
			System.out.println("Welcome : " + i);
		}
		
	}
}
